#include <stdio.h>
//Date: 14-08-2023
int main(void) {
	// your code goes here
	int t; 
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    float x,y;
	    scanf("%f%f",&x,&y);
	    float z = x+x*0.1;
	    printf("%d\n", z-x);
	}
	return 0;
}

