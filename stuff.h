struct node{
  int data;
  struct node *next;
};



struct node *init();
int add(struct node *list, int num);
void print(struct node *list);
int del(struct node* list, int num);
int search(struct node *list, int num);
void printInfo();
void start(struct node *list);
