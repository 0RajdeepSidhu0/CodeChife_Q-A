#include <stdio.h>

//Author: Rajdeep Singh Sidhu
int main(void) {
	// your code goes here
	int t;scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
	    int x;
	    scanf("%d", &x);
	    if(x<=300)
	    {
	        printf("%d\n", 3000);
	    }
	    else{
	        printf("%d\n", x*10);
	    }
	}
	return 0;
}

