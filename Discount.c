#include <stdio.h>
//Author's Name: Rajdeep Singh Sidhu
//Date: 11-05-2023
int main(void) {
	// your code goes here
	int t; scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x; scanf("%d", &x);
	    int c = 100*x/100;
	    printf("%d\n", 100-c);
	}
	return 0;
}

