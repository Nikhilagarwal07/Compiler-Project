/*   GROUP - 04
Name : Rohit Raj        ID : 2020B3A70906P
Name : Adarsh Agarwal   ID : 2020B5A70924P
Name : Nandalal Odedara ID : 2020B5A70693P
Name : Gaurav Mishra    ID : 2020B3A70917P
Name : Nikhil Agarwal   ID : 2020B2A71611P
Name : Parivesh Bajpai  ID : 2020B3A70752P
*/
#include "stack.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Function to initialize Stack
Stack *initializeStack(Stack *stack)
{
    stack = (Stack *)malloc(sizeof(Stack));
    stack->top = -1;
    return stack;
}

// Function to check if stack is empty
int isEmpty(Stack *stack)
{
    return (stack->top == -1);
}

// Function to check if stack is full or not
int isFull(Stack *stack)
{
    return (stack->top == MAX_SIZE - 1);
}

void push(Stack *stack, StackElement *stackEle)
{
    if (isFull(stack))
    {
        printf("Stack overflow!\n");
        return;
    }

    stack->top++;
    stack->items[stack->top] = stackEle;
}

StackElement *pop(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack underflow!\n");
        return NULL;
    }

    return stack->items[stack->top--];
}

// Function to see top element of stack
StackElement *peek(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty!\n");
        return NULL;
    }

    return stack->items[stack->top];
}

StackElement *createNewStackElement(char lexeme[MAXTERM])
{
    StackElement *stackElement = (StackElement *)malloc(sizeof(StackElement));
    stackElement->nodePointer = NULL;
    strcpy(stackElement->lexeme, lexeme);

    return stackElement;
}

// Functio to de-allocate memory
void freeStack(Stack *stack)
{
    while (!isEmpty(stack))
    {
        free(pop(stack));
    }
}