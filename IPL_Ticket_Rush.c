#include <stdio.h>
#include <stdlib.h>

//Rajdeep Singh Sidhu
//Date: 6-05-2023
int main(void) {
	// your code goes here
	int t; scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int n, m;
	    scanf("%d%d", &n,&m);
	    int c=n-m;
	    if(c>0){
	        printf("%d\n", c);
	    }
	    else{
	        printf("%d\n", 0);
	    }
	    
	}
	return 0;
}

