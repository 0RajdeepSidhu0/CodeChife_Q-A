#include <stdio.h>
//Author: Rajdeep Singh Sidhu
//Date: 14-06-2023
int main(void) {
	// your code goes here
	int a,b; scanf("%d%d", &a,&b);
	if(a>0 && b>0)
	{
	    if(a+b+(a*b)==111)
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
	return 0;
}

