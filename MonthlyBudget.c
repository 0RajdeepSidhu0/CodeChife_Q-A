#include <stdio.h>
/*
Q: Akshat has X rupees to spend in the current month. His daily expenditure is 
Y rupees, i.e., he spends Y rupees each day. Given that the current month has 
30 days, find out if Akshat has enough money to meet his daily expenditures for this month.
*/
//Author: Rajdeep Singh Sidhu
//date: 26-08-2023
int main(void) {
	// your code goes here
	int t; scanf("%d", &t);
	for(int i=0; i<t; i++){
	    int x,y;scanf("%d%d", &x,&y);
	    if(y*30<=x){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

