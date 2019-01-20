#include <stdio.h>
#include <stdlib.h>
#include "stuff.h"

struct node *init(){
  struct node *list;
  list=malloc(struct node);
  list->data=98662;
  list->next = NULL;
  return list;
}
