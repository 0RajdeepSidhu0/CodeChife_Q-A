#include <stdio.h>
//Author: Rajdeep Singh Sidhu
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int a,b;
	    scanf("%d%d", &a,&b);
	    a+=b;
	    if(a%2==0)
	    {
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

