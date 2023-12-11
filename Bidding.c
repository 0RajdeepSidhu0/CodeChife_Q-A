#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int a,b,c;
	    scanf("%d%d%d",&a,&b, &c);
	    if(a>b && a>c)
	    {
	        printf("Alice\n");
	    }
	    else if(b>a && b>c)
	    {
	        printf("Bob\n");
	    }
	    else{
	         printf("Charlie\n");
	    }
	}
	return 0;
}

