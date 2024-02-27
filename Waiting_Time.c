#include <stdio.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i = 0 ; i < t; i ++)
	{
	    int x,k;
	   scanf("%d%d", &k,&x);
	   k*=7;
	   k=k-x;
	   printf("%d\n", k);
	}
	return 0;
}

