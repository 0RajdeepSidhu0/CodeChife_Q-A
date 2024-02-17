#include <stdio.h>
/*Q: 
In Chefland, a football player gets 2 points for each goal and 1 point for each assist.
Messi has A goals and B assists this season, whereas Ronaldo has X goals and Y assists.
Find out the player with more points this season.*/
//Author: Rajdeep Singh Sidhu
//Date: 19-08-2023

int main(void) {
	// your code goes here
	int a,b,x,y; scanf("%d%d%d%d", &a,&b,&x,&y);
	a=a*2 + b; x = x*2 + y;
	if(a>x){
	    printf("Messi\n");
	}
	else if (a==x)
	{
	    printf("Equal\n");
	}
	else{
	    printf("Ronaldo\n");
	}
	return 0;
}

