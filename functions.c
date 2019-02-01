                                                                                                                                                                                                                     functions.c

#include <stdio.h>
#include <stdlib.h>
#include "stuff.h"

//Initializes the sentinel node
struct node *init(){

  struct node *list;
  list=malloc(sizeof(struct node));
  list->data=98662;
  list->next = NULL;
  return list;  //returns the address to the sentinel

}

void start(struct node *list){

  char temp[50], input;
  int num,valid;
  Return retrn;

  while(input != 'x'){  //As long as user doesn't input 'x'
    printf("> ");

 //Gets input from user and stores in variables
    fgets(temp,50,stdin);
    valid = sscanf(temp,"%c %d",&input, &num);

    if(valid == 2){ // If user input a letter and a number then it send the information to the correct$

      if(input == 'i'){
        retrn.found = add(list,num);
        if(retrn.found == -1)  printf("NODE ALREADY EXISTS\n");
        if(retrn.found == 1)  printf("SUCCESS\n");
        if(retrn.found == 0)  printf("OUT OF MEMORY\n");
      }
      else if(input == 's'){
        retrn = search(list,num);
        if(retrn.found == 0)  printf("NOT FOUND\n");
        if(retrn.found == 1)  printf("FOUND\n");
      }
      else if(input == 'd'){
        retrn.found = del(list,num);
        if(retrn.found == 0)  printf("NODE NOT FOUND\n");
        if(retrn.found == 1) printf("SUCCESS\n");
      }
     else
        printInfo();  //If user enters something invalid then print the directory information
    }

    if(valid == 1){  //If user input one input or the second input is invalid then checks what the inp$
      if(input == '?')
        printInfo();  //Print Directory Information
      else if(input == 'p')
        print(list); //Print Node List
      else if(input == 'x')
        exit(0); //Exits the program
      else
      printInfo();  //If user enters something invalid then print the directory information
    }
  }
}


void printInfo(){

//Prints Directory information

  printf("Please enter one of the folowing commands:\n");
  printf("i number      insert number into the list\n");
  printf("p             print the list in order\n");
  printf("s number      search for a number in the list\n");
  printf("d number      delete the number from the list\n");
  printf("x             exit the program\n");
}



int add(struct node *list, int num){

  Return retrn = search(list,num);

  if(retrn.found == 1)  //If the item is found then return to inform user that number already exists
     return -1;

  struct node *temp = malloc(sizeof(struct node));

  if(temp == NULL)  //If malloc return NULL then system is out of memory
    return 0;

  temp->data = num;  //store new number in temp

  if(retrn.empty == 1){  //if the list is empty

  list->next = temp;
  temp->next = NULL;
  return 1;

  }

//If the list is not empty

  retrn.prev->next = temp;
  temp->next = retrn.cur;
  return 1;

}



Return search(struct node *list, int num){

  Return retrn;
  retrn.found = 0, retrn.empty = 0;

  retrn.prev = list;
  retrn.cur = list->next;

  if(retrn.cur == NULL){  //If the list is empty then return
    retrn.empty = 1;
    return retrn;
  }

  while(retrn.cur != NULL){

    if(retrn.cur->data > num)  //once the first data variable that larger than the num then break the loop
      break;


    if(retrn.cur->data == num){  //if the num already exists
      retrn.found = 1;
      break;
    }

    retrn.prev = retrn.cur;
    retrn.cur = retrn.cur->next;

  }

  return retrn;
}


int del(struct node *list, int num){

  Return retrn = search(list,num);

  if(retrn.found == 0)  //If the num already exists in the list
    return 0;

  if(retrn.found == 1){
    retrn.prev->next = retrn.cur->next;

    free(retrn.cur);  //free the deleted node memory

    return 1;
  }


}



void print(struct node *list){

  struct node *temp;
  temp=list->next;

//Traverses through the list and prints all the data until NULL

  while(temp != NULL){

  printf("%d ", temp->data);
  temp = temp->next;

  }

  printf("\n");
}


