#include <stdio.h>

int main(void)
{
    int nums[] = {6, 2, 4, 1};

    for (int i = 0; i < 4; i++)
    {
	for (int j = i + 1; j < 4; j++)
	{
	    if (nums[i] > nums[j])
	    {
		int tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = tmp;
	    }
	    /*
	    if (nums[i] > nums[j])
	    {
		nums[i] = nums[i] ^ nums[j];
		nums[j] = nums[i] ^ nums[j];
		nums[i] = nums[i] ^ nums[j];
	    }*/
     	}
    }

    for (int n = 0; n < 4; n++)
	printf("%d ", nums[n]);
}