#include <stdio.h>

//Author: Rajdeep Singh Sidhu

int main(void) {
	// your code goes here
	
	int t;scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x,y;scanf("%d%d", &x,&y);
	    if(x>=y*2)
	    {
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

