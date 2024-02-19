#include <iostream>
using namespace std;


int main() {
	// your code goes here
	int t;
	scnaf("%d", &t);
	for(int i=0; i<t; i++)
	{
	    int n;
	    scanf("%d", &n);
	    printf("%d\n", n);
	}
	return 0;
}
