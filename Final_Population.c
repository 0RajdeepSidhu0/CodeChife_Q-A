#include <stdio.h>

//Author: Rajdeep Singh Sidhu
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x,y,z;
	    scanf("%d%d%d", &x,&y,&z);
	    x=x-y+z;
	    printf("%d\n", x);
	    
	}
	return 0;
}

