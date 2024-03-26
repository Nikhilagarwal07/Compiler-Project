/*   GROUP - 04
Name : Rohit Raj        ID : 2020B3A70906P
Name : Adarsh Agarwal   ID : 2020B5A70924P
Name : Nandalal Odedara ID : 2020B5A70693P
Name : Gaurav Mishra    ID : 2020B3A70917P
Name : Nikhil Agarwal   ID : 2020B2A71611P
Name : Parivesh Bajpai  ID : 2020B3A70752P
*/
#ifndef STACK_H
#define STACK_H

#include "parserDef.h"

#define MAXTERM 50
#define MAX_SIZE 250

typedef struct
{
    char lexeme[MAXTERM];
    ParseTreeNode *nodePointer;
} StackElement;

typedef struct
{
    StackElement *items[MAX_SIZE];
    int top;
} Stack;

Stack *initializeStack(Stack *stack);
int isEmpty(Stack *stack);
int isFull(Stack *stack);
void push(Stack *stack, StackElement *str);
StackElement *pop(Stack *stack);
StackElement *peek(Stack *stack);
void freeStack(Stack *stack);
StackElement *createNewStackElement(char lexeme[MAXTERM]);

#endif