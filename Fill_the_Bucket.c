#include <stdio.h>
//Author: Rajdeep Singh Sidhu
//Date: 17-06-2023
int main(void) {
	// your code goes here
	int t; scanf("%d",&t);
	for(int i; i<t; i++)
	{
	    int k,x;
	    scanf("%d%d",&k,&x);
	    x = k-x;
	    printf("%d\n", x);
	}
	return 0;
}

