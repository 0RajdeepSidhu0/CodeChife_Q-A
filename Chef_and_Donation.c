#include <stdio.h>

//Author: Rajdeep Singh Sidhu

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x,y;scanf("%d%d", &x, &y);
	    if(y>x)
	    {
	        y-=x;
	        printf("%d\n", y);
	    }
	    else
	    {
	        printf("%d", 0);
	    }
	}
	return 0;
	//Author: Rajdeep Singh Sidhu
}

