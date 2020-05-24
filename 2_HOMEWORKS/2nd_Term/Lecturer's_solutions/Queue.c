#include <stdio.h> 
#include <stdlib.h>
typedef struct queueNode {   /* self-referential structure */ 
    char data; 
    struct queueNode* nextPtr; 
} QueueNode_t;

/* function prototypes */ 
void printQueue(QueueNode_t*); 
int isEmpty(QueueNode_t*); 
char dequeue(QueueNode_t**, QueueNode_t**); 
void enqueue(QueueNode_t**, QueueNode_t**, char); 
void instructions(void);

int main()
{
    QueueNode_t* headPtr = NULL, * tailPtr = NULL;
    int choice;
    char item;

    instructions();
    printf("? ");
    scanf("%d", &choice);

    while (choice != 3) {

        switch (choice) {

        case 1:
            printf("Enter a character: ");
            scanf("\n%c", &item);
            enqueue(&headPtr, &tailPtr, item);
            printQueue(headPtr);
            break;
        case 2:
            if (!isEmpty(headPtr)) {
                item = dequeue(&headPtr, &tailPtr);
                printf("%c has been dequeued.\n", item);
            }

            printQueue(headPtr);
            break;

        default:
            printf("Invalid choice.\n\n");
            instructions();
            break;
        }

        printf("? ");
        scanf("%d", &choice);
    }

    printf("End of run.\n");
    return 0;
}

void instructions(void)
{
    printf("Enter your choice:\n"
        "   1 to add an item to the queue\n"
        "   2 to remove an item from the queue\n"
        "   3 to end\n");
}

void enqueue(QueueNode_t** headPtr, QueueNode_t** tailPtr, char value)
{
    QueueNode_t* newPtr;

    newPtr = malloc(sizeof(QueueNode_t));

    if (newPtr != NULL) {
        newPtr->data = value;
        newPtr->nextPtr = NULL;

        if (isEmpty(*headPtr))
            *headPtr = newPtr;

        else   (*tailPtr)->nextPtr = newPtr;

        *tailPtr = newPtr;
    }
    else
        printf("%c not inserted. No memory available.\n", value);
}

char dequeue(QueueNode_t** headPtr, QueueNode_t** tailPtr) 
{
    char value; 
    QueueNode_t* tempPtr;

    value = (*headPtr)->data; 
    tempPtr = *headPtr; 
    *headPtr = (*headPtr)->nextPtr;

    if (*headPtr == NULL)  
        *tailPtr = NULL;

    free(tempPtr); 
    return value;
}

int isEmpty(QueueNode_t* headPtr) 
{
    return headPtr == NULL;
}

void printQueue(QueueNode_t* currentPtr) 
{
    if (currentPtr == NULL)  
        printf("Queue is empty.\n\n"); 
    else {
        printf("The queue is:\n");

        while (currentPtr != NULL) { 
            printf("%c --> ", currentPtr->data);   
            currentPtr = currentPtr->nextPtr; 
        }

        printf("NULL\n\n");
    }
}
