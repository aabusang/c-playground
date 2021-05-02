#include <stdio.h>
#include <string.h>

#define N 6
int queue[N];
int tail = -1;
int head = -1;

void enqueue(int n);
int dequeue();
int front();
int isEmpty();

int main(void)
{
    char *names[] = {"Sule", "Iddi", "Hamid", "Adam", "Rashid", "Kande"};
    int numbers[] = {1, 2, 3, 4, 5, 6};

    int i;
    for (i = 0; i < N; i++)
    {
	enqueue(numbers[i]);
    }

    printf("Enqueued: ");
    for (i = 0; i < N; i++)
    {
	printf("%d ", queue[i]);
    }
    printf("\n\nDequeuing: ");
    for (i = 0; i < N; i++)
    {
	printf("%d ", dequeue());
    }
    printf("\n");
}

void enqueue(int n)
{
    if (tail == N)
    {
	printf("Queue if full sorry!\n");
	return;
    }
    else if (isEmpty() == 0)
    {
	printf("Queue is empty %d %d\n", head, tail);
	head = 0;
	tail = 0;
    }
    else
    {
	++tail;
    }
    queue[tail] =  n;
}

int dequeue()
{
    if (isEmpty() == 1)
    {
	printf("Queue is empty, %d %d %d\n", head, tail, queue[2]);
	return -1;
    }
    else if (head == tail)
    {
	head = -1;
	tail = -1;
    }
    return queue[++head];
}

int isEmpty()
{
    if (tail >= 0  && head >= 0)
	return 1;
    else
	return 0;
}
