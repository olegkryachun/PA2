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
//  Return retrn;

  while(input != 'x'){
    printf("> ");

 //Gets input from user and stores in variables
    fgets(temp,50,stdin);
    valid = sscanf(temp,"%c %d",&input, &num);

    if(valid == 2){ // If user input a letter and a number then it send the information to the correct$
      if(input == 'i'){
        add(list,num);
      }
      else if(input == 's'){
        search(list,num);
      }
      else if(input == 'd'){
        del(list,num);
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

}

void print(struct node *list){

  struct node *temp;
  temp=list;

  while(temp.next != NULL){
  printf("
}

int del(struct node *list, int num){

}

int search(struct node *list, int num){

}
