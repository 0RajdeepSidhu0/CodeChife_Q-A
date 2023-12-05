#include <stdio.h>
#include <stdlib.h>
//Author: Rajdeep Singh Sidhu
//Date: 23-06-2023
int main(void) {
	// your code goes here
	int t;scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x; scanf("%d", &x);
	    if(x<=3)
	    {
	        printf("BRONZE\n");
	    }
	    else if(x>3 && x<=6)
	    {
	        printf("SILVER\n");
	    }
	    else if(x>6)
	    {
	        printf("GOLD\n");
	    }
	}
	return 0;
}

