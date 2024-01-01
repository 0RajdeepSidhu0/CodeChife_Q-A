#include <stdio.h>

//Author: Rajdeep Singh Sidhu
//Date: 26-06-2023
int main(void) {

	int t;scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
	    int x,y;scanf("%d%d", &x,&y);
	    if(x*100>y*10)
	    {
	        printf("CLOTH\n");
	    }
	    else if(x*100==y*10)
	    {
	        printf("CLOTH\n");
	    }
	    else{
	        printf("DISPOSABLE\n");
	    }
	}
	return 0;

}

