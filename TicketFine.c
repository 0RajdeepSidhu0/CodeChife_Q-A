#include <stdio.h>

int main(void) {
	// your code goes here
	int t;scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x,p,q;
	    scanf("%d%d%d", &x,&p,&q);
	    p=p-q;
	    x=x*p;
	    printf("%d\n", x);
	}
	return 0;
}

