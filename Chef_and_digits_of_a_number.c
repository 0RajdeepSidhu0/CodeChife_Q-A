#include <stdio.h>
#include<string.h>
//Author: Rajdeep Singh Sidhu
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[1000000];
        scanf("%s",str);
        int o=0,z=0;
        for(int i=0; str[i]!='\0' ;i++)
        {
            if(str[i]=='1')
            {
                o++;
                
            }
            else
            {
                z++;
                
            }
        }
        if((o+1==strlen(str)) || (z+1==strlen(str)))
        {
            printf("Yes\n");
            
        }
        else
        {
            printf("No\n");
            
        }
    }
	return 0;
}
