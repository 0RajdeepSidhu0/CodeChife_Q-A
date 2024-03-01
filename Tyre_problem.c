#include <stdio.h>
/*
Q:There are N bikes and M cars on the road.
Each bike has 2 tyres. Each car has 4 tyres.
Find the total number of tyres on the road.
*/

//Author: Rajdeep Singh Sidhu
//Date: 23-08-2023
int main(void) {
	// your code goes here
	int t;scanf("%d", &t);
	for(int i =0; i<t; i++)
	{
	    int n,m; scanf("%d%d", &n,&m);
	    n*=2; m*=4;
	    printf("%d\n", n+m);
	}
	return 0;
}

