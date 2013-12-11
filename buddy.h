#ifndef BUDDY_H

#define BUDDY_H

struct buddy;

int buddy_alloc(struct buddy *self, size_t size)
void buddy_free(struct buddy *self, int offset)

#endif /* end of include guard: BUDDY_H */
