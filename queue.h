#ifndef _QUEUE_H
#define _QUEUE_H

typedef struct queue* queue_t;

queue_t new_queue(void);

int delete_queue(queue_t queue);

int add_to_queue(queue_t queue, void *data);

int remove_from_queue(queue_t queue, void **data);

int delete_from_queue(queue_t queue, void *data);

typedef int (*queue_func_t)(queue_t queue, void *data, void *arg);

int queue_for_all(queue_t queue, queue_func_t func, void *arg, void **data);

int length_of_queue(queue_t queue);

#endif
