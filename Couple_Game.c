#include <stdio.h>
//Author: Rqajdeep Singh Sidhu
int main(void) {
	// your code goes here
	int t;scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int g,b;
	    scanf("%d%d", &g, &b);
	    b=b-g;
	    printf("%d\n", b);
	}
	return 0;
}

