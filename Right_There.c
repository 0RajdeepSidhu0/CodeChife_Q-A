#include <stdio.h>

//Author: Rajdeep Singh Sidhu
//Date: 11-06-2023

int main(void) {
	// your code goes here
	int t;scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int n,x;
	    scanf("%d%d", &n,&x);
	    if(n<=x)
	    {
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

