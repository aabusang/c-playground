#include <stdio.h>
#include <ctype.h>

#include "header.h"

node *head;

int main(void)
{
    head = NULL;
    int i, n;
    char response;

    printf("\nInsertions\n\n");
    for (i = 0; i < 5; i++)
    {
	addNodeAtStart((i+1)*10);
    }
    /* addNode(333, 2); */
    /* addNodeAtEnd(99); */
    /* printList(); */

    /* printf("\nDeletions\n\n"); */
    /* deleteNodeAtStart(); */
    /* deleteNodeAtEnd(); */
    /* deleteNode(3); */
    printList();
    reverse();
    printList();
    /* design to take user input dynamically */
    /* do */
    /* { */
    /* 	prompt(); */
    /* 	scanf(" %c", &response); */
    /* 	if (response != 'i' && response != 'q') */
    /* 	{ */
    /* 	    printf("\n%c is not a valid input\n", response); */
    /* 	} */
    /* }while(validResponse(response) != 1); */

    /* if (response == '1') */
    /* { */
    /* 	printf("Enter number: "); */
    /* 	scanf(" %d", n); */
    /* 	printf("\n(l) to insert last (s) to insert start"); */
    /* 	printf("\n(n) to insert at nth position\n"); */
    /* 	scanf(" %d", &position); */
    /* } */

}
