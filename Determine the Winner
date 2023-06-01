#include <stdio.h>
//Author: Rajdeep Singh Sidhu
//Date: 01-06-2023
/*
Problem:
There is a contest containing 2 problems A and B.2 strong participants 
P and Q participated in the contest and solved both the problems.
P made AC submissions on problems A and B at time instants P A and P B respectively while Q made AC submissions on problems A and B at time instants Q A and Q B.

It is given that the time penalty is the minimum time instant at which a participant has solved both the problems. Also the participant with the lower time penalty will have a better rank.

Determine which participant got the better rank or if there is a TIE.
*/
int main(void) {
	// your code goes here
	int t;scanf("%d", &t);
	for(int i=0;i<t; i++)
	{
	    int _1st=0,_2nd=0;
	    int pa,pb,qa,qb;
	    scanf("%d%d%d%d",&pa,&pb,&qa,&qb);
	    if(pa>pb|| pa==pb)
	    {
	        _1st=pa;
	    }
	    else{
	         _1st = pb;
	    }
	    if(qa>pb || qa==qb)
	    {
	         _2nd=qa;
	    }
	    else{
	         _2nd=qb;
	    }
	    if(_1st<_2nd){
	        printf("P\n");
	    }
	    else if(_1st==_2nd){
	        printf("TIE\n");
	    }
	    else{
	        printf("Q\n");
	    }
	}
	
	return 0;
}

