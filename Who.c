#include <stdio.h>
//Date: 13-08-2023
int main(void) {
	// your code goes hereint 
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	       int x,y;
	       scanf("%d%d", &x,&y);
	       if(x>y)
	       {
	           printf("A\n");
	       }
	       else if(x<y)
	       {
	           printf("B\n");
	       }
	}
	return 0;
}

