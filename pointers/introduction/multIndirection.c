#include <stdio.h>


int main(int argc, char *argv[])
{
    char *titles[] = {"A tail of two cities", "Wuthering Heights", "Don Quixote",
	"Odyssey", "Moby-Dick", "Hamlet", "Gulliver's Travels"};

    /*A pointer that points to a second pointer to char*/
    char **bestBooks[3];
    char **englishBooks[4];

    bestBooks[0] = &titles[0];
    bestBooks[1] = &titles[3];
    bestBooks[2] = &titles[5];

    englishBooks[0] = &titles[0];
    englishBooks[1] = &titles[1];
    englishBooks[2] = &titles[5];
    englishBooks[3] = &titles[6];

    int i;
    printf("Titles\n");
    for (i = 0; i < 7; i++)
    {
	printf("%d: %20s\n",i, titles[i]);
    }
    
    printf("Best Books\n");
    for (i = 0; i < 3; i++)
    {
	printf("%d: %20s\n",i, *bestBooks[i]);
    }

    printf("English Books\n");
    for (i = 0; i < 4; i++)
    {
	printf("%d: %20s\n",i, *englishBooks[i]);
    }
}
