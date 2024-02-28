#include <stdio.h>

/*
Problem:
Chef appeared for an exam consisting of 3 sections. Each section is worth 100 marks. Chef scored A marks in Section 1, 
B marks in section 2, and C marks in section 3. Chef passes the exam if both of the following conditions satisfy:
Total score of Chef is ≥100; Score of each section ≥10. Determine whether Chef passes the exam or not.
*/

//Author: Rajdeep Singh Sidhu
//Date: 19-06-2023
int main(void) {
	// your code goes here
	int t;scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int a,b,c;scanf("%d%d%d", &a,&b,&c);
	    int x = a+b+c;
	    if(x>=100 && a>=10 && b>=10 && c>=10)
	    {
	        printf("PASS\n");
	    }
	    else{
	        printf("FAIL\n");
	    }
	}
	return 0;
}

