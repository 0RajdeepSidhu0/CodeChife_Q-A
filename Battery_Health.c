#include <stdio.h>
//Rajdeep Singh Sidhu
//Date: 05-10-2023
int main(void) {
	int t;
	scanf("%d", &t);
	for(int i = 0; i<t; i++)
	{
	    int x;
	    scanf("%d", &x);
	    if(x>=80)
	    {
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

