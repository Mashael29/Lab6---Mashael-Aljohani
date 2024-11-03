#include <stdio.h>
#include <stdlib.h>

int *stack = NULL;
int stack_Index = -1;      

void push(int value) {
    stack_Index++; 
    stack = realloc(stack, (stack_Index + 1) * sizeof(int)); 
    if (stack == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    stack[stack_Index] = value; 
}

void pop() {
    if (stack_Index == -1)
    {
        printf("Stack is empty\n"); 
    } 
    else
    {
        printf("Popped value: %d\n", stack[stack_Index]); 
        stack_Index--; 
        stack = realloc(stack, (stack_Index + 1) * sizeof(int)); 
    }
}

void display() {
    if (stack_Index == -1) {
        printf("Stack is empty.\n"); 
    } 
    else 
    {
        printf("Current stack: ");
        for (int i = stack_Index; i >= 0; i--) 
	{ 
            printf("%d", stack[i]);
            if (i > 0) printf(", "); 
        }
        printf("\n");
    }
}

int main() 
{
    char command;
    int value;

    printf("Enter a command (p: push, o: pop, d: display, e: exit): ");
    while (scanf(" %c", &command)) 
    {
        if (command == 'p') 
	{ 
            printf("Enter an integer to push: ");
            scanf("%d", &value);
            push(value);
        } 
	else if (command == 'o') 
	{ 
            pop();
        }
       	else if (command == 'd') 
	{ 
            display();
        }
       	else if (command == 'e') 
	{ 
            break;
        } 
	else
       	{
            printf("Invalid command. Try again.\n"); 
        }
        printf("Enter a command (p: push, o: pop, d: display, e: exit): ");
    }

    free(stack); 
    return 0;
}
