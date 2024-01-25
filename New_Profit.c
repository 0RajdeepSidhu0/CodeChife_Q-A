#include <stdio.h>

//Author: Rajdeep Singh Sidhu
//Date: 18-08-2023
int main(void) {
	// your code goes here
	int t; 
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    int z = x+x*0.1;
	    int k = z-x+y;
	    printf("%d\n", k);
	}
	return 0;
}

