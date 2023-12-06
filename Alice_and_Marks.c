#include <stdio.h>
//Rajdeep Singh Sidhu
// date: 30-04-23
int main(void) {
	// your code goes here
	int x,y;
	scanf("%d%d", &x,&y);
	y=pow(y,2);
	if(x>=y)
	{
	    printf("YES\n");
	}
	else
	{
	    printf("NO\n");
	}
	return 0;
}


