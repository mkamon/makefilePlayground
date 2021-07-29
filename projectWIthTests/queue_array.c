#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>

#define QUEUE_EMPTY INT_MIN

typedef struct {
    int *values;
    int head, tail;
    int num_entries, size;
} queue;

void init_queue(queue *q, int max_size)
{
    q->size = max_size;
    q->values = malloc(sizeof(int) * q->size);
    q->num_entries = 0;
    q->head = 0;
    q->tail = 0;
}

bool queue_empty(queue *q)
{
    return (q->num_entries == 0);
}

bool queue_full(queue *q)
{
    return (q->num_entries == q->size);
}

void queue_distroy(queue *q)
{
    free(q->values);
}

bool enqueue(queue *q, int value)
{
    if(queue_full(q)){
        return false;
    }
    q->values[q->tail] = value;
    q->num_entries++;
    q->tail = (q->tail + 1) % q->size;

    return true;
}

int dequeue(queue *q)
{
    int result;
    
    if(queue_empty(q)){
        return QUEUE_EMPTY;
    }

    result = q->values[q->head];
    q->head = (q->head + 1) % q->size;
    q->num_entries--;

    return result;
}

int main()
{
    queue q1;


    init_queue(&q1, 5);

    enqueue(&q1, 56 );
    enqueue(&q1, 78 );
    enqueue(&q1, 10 );
    enqueue(&q1, 200 );
    enqueue(&q1, 131 );
    enqueue(&q1, 45 );
    enqueue(&q1, 14 );

    int t;
    while((t = dequeue(&q1)) != QUEUE_EMPTY){
        printf("t = %d\n", t);
    }



    return 0;
}
