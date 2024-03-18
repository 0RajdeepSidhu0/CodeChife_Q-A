#include <stdio.h>


int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x,y;
	    scanf("%d%d", &x,&y);
	    x*=2; y*=5;
	    if(x>y)
	    {
	        printf("Chocolate\n");
	    }
	    else if(x==y)
	    {
	        printf("Either\n");
	    }
	    else
	    {
	        printf("Candy\n");
	    }
	}
	return 0;
}

