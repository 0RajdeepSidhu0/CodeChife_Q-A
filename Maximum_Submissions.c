#include <stdio.h>
#include <stdlib.h>
/*Problem:
A participant can make 1 submission every 30 seconds. If a contest lasts for 
X minutes, what is the maximum number of submissions that the participant can make during it?
It is also given that the participant cannot make any submission in the last 
5 seconds of the contest*/

//Author: Rajdeep Singh Sidhu
//Date: 28-06-2023
int main(void) {
	// your code goes here
	int t; scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
	    int x; scanf("%d",&x);
	    x=x*60;
	    x=x/30;
	    printf("%d\n", x);
	}
	return 0;
}

