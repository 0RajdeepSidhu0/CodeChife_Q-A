#include <stdio.h>

/*
Q: Chef is eagerly waiting for a piece of information. His secret agent told him that this information would be revealed to him after K weeks.
X days have already passed and Chef is getting restless now. Find the number of remaining days Chef has to wait for, to get the information.
It is guaranteed that the information has not been revealed to the Chef yet.*/
//Author: Rajdeep Singh Sidhu
//Date: 20-08-2023
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

