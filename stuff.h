struct node{
  int data;
  struct node *next;
};


typedef struct{
  struct node *prev;
  struct node *cur;
  int found;
  int empty;
}Return;


struct node *init();
int add(struct node *list, int num);
void print(struct node *list);
int del(struct node* list, int num);
Return search(struct node *list, int num);
void printInfo();
void start(struct node *list);


