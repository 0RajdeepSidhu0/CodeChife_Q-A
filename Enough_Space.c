#include <stdio.h>
#include <stdlib.h>

//Rajdeep Singh Sidhu
//Date: 09-05-2023

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
        int n,x,y;
        scanf("%d%d%d", &n,&x,&y);
        x+=(y*2);
        if(n>=x)
        {
            printf("YES\n");
        }
        else
                {
            printf("NO\n");
        }
	}
	return 0;
}

