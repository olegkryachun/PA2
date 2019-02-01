/*
Creator: Oleg Kryachun
Date: 01/31/2019
CSE 22: Program Assignment 2

This program creates a dynamic linked list, as the user adds new things to the list, the list expands. The linked
list has 4 functions, search, add, delete, and print. As the user adds or deletes data, the program adjusts and
either free or adds memory. The list is kept in constant incrementing order throughout the whole process.

*/



#include <stdio.h>
#include <stdlib.h>
#include "stuff.h"

int main(){

  struct node *list = init();  //Sets up the first sentinel node
  start(list);  //starts the program
  return 0;

}


