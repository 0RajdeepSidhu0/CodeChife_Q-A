#include <stdio.h>
#include <stdlib.h>
/*
Problem :
Chef considers the climate HOT if the temperature is above
20, otherwise he considers it COLD. You are given the temperature 
C, find whether the climate is HOT or COLD
*/
//Author: Rajdeep Singh Sidhu
//Date: 21-05-2023
int main(void) {
	// your code goes here
	int t;scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int c;
	    scanf("%d", &c);
	    if(c>20){
	        printf("HOT\n");
	    }
	    else{
	        printf("COLD\n");
	    }
	}
	return 0;
}

