#include "buddy.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  char cmd[80];
  int arg;
  struct buddy* buddy = NULL;
  buddy = buddy_new(64);
  buddy_dump(buddy);
  for (;;) {
    scanf("%s %d", cmd, &arg);
    if (strcmp(cmd, "alloc") == 0) {
      printf("allocated@%d\n", buddy_alloc(buddy, arg));
      buddy_dump(buddy);
    } else if (strcmp(cmd, "free") == 0) {
      buddy_free(buddy, arg);
      buddy_dump(buddy);
    } else if (strcmp(cmd, "size") == 0) {
      printf("size: %d\n", buddy_size(buddy, arg));
      buddy_dump(buddy);
    } else
      buddy_dump(buddy);
  }
}

