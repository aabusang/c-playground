#ifndef header_h
#define header_h

#define N 10

typedef struct Node
{
    int data;
    struct Node *next;
}node;

extern node *head;

/* addition or insertion functions */
void addNodeAtStart(int data);
void addNodeAtEnd(int data);
void addNode(int data, int position);

/* deletion functions */
void deleteNodeAtStart();
void deleteNodeAtEnd();
void deleteNode(int position);

/* other */
void reverse();
int len();
void printList();
void prompt();
int validResponse(char response);

#endif
