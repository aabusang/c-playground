#include <iostream>
#include <stack>

using namespace std;

// class Stack
// {
// private:
//     char arr[101];
//     int top;
// public:
//     void Push(int x);
//     void Pop();
//     int Top();
//     bool IsEmpty();
// };

void reverse(char C[], int numOfChars)
{
    stack<char> S;
    // loop for push
    for (int i = 0; i < numOfChars; i++)
    {
	S.push(C[i]);
    }
    // loop for pop
    for (int i = 0;i < numOfChars; i++)
    {
	C[i] = S.top(); 
	S.pop();
    }
}


int main(void)
{
    char C[51];
    printf("Enter a string: ");
    gets(C);
    reverse(C, strlen(C));
    printf("Output: %s\n", C);
}
