#include <stdio.h>
//Author: Rajdeep Singh Sidhu
//Date: 28-05-2023
int main(void) {
	// your code goes here
	int t;scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x,y;scanf("%d%d", &x,&y);
	    if(x>0 && y>0)
	    {
	        if(x==y)
	        {
	            printf("YES\n");
	        }
	        else{
	            printf("NO\n");
	        }
	    }
	   else{
	       printf("NO\n");
	   }
	}
	return 0;
}

