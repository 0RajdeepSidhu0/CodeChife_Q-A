#include <stdio.h>

//Author: Rajdeep Singh Sidhu
//Date: 18-06-2023

int main(void) {
	// your code goes here
	int t; scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n,m,k;scanf("%d%d%d", &n,&m,&k);
	    if(m*k>=n)
	    {
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

