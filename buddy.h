#ifndef BUDDY_H

#define BUDDY_H
#include <stdio.h>
#include <stdlib.h>

struct buddy;

struct buddy *buddy_new(unsigned num_of_fragments);
int buddy_alloc(struct buddy *self, size_t size);
void buddy_free(struct buddy *self, int offset);
void buddy_dump(struct buddy *self);
int buddy_size(struct buddy *self, int offset);

#endif /* end of include guard: BUDDY_H */
