#include <stdio.h>

//Rajdeep Singh Sidhu
int main(void) {
	// your code goes here
	int t; scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int n,k;
	    scanf("%d%d", &n,&k);
	    printf("%d\n", n-k);
	}
	return 0;
}
