#include <stdio.h>
/*
Q: Chef owns a car that can run 15 kilometers using 1 liter of petrol.
He wants to attend a programming camp at DAIICT. X liters of petrol is present in Chef's car. The distance between his house and DAIICT is 
Y kilometers. Determine whether Chef can attend the event and return to his home with the given amount of petrol.
Note: Chef has to return back to home, so the total distance to be covered would be 2⋅Y.*/
//Author: Rajdeep Singh Sidhu
//Date: 27-08-2023
int main(void) {

	int t;scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int x,y;scanf("%d%d", &x,&y);
	    x=x*15;
	    if(x>=y*2){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}

	return 0;
}

