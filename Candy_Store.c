#include <stdio.h>
#include <stdlib.h>
//Author: Rajdeep Singh Sidhu
//Date: 25-06-2023
int main(void) {
	// your code goes here
	int t;scanf("%d", &t);
	for(int i=0; i<t;i++)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    int c = 100-y;
	   if(x<y)
	   {
	       y=y-x;
	       printf("%d\n", x+(y*2));
	   }
	   else if(x==y)
	   {
	       printf("%d\n", x);
	   }
	   else{
	       
	       printf("%d\n", y);
	   }
	    
	}
	return 0;
}

