#include <stdio.h>
//Author: Rajdeep Singh Sidhu
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x;
	    scanf("%d", &x);
	    if(x<3)
	    {
	        printf("LIGHT\n");
	    }
	    else if(x<7)
	    {
	        printf("MODERATE\n");
	    }
	    else if(x>=7)
	    {
	        printf("HEAVY\n");
	    }
	}
	return 0;
}

