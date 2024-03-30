#include <stdio.h>

//Author: Rajdeep Singh Sidhu
//Date: 27-06-2023
int main(void) {
	// your code goes here
	int t;scanf("%d",&t);
	for(int i=0; i<t; i++)
	{
	    int x,y,z;scanf("%d%d%d", &x,&y,&z);
	    if(x>y && x>z){
	        printf("SETTER\n");
	    }
	    else if(y>x && y>z){
	        printf("TESTER\n");
	    }
	    else{
	        printf("Editorialist\n");
	    }
	}
	return 0;
}

