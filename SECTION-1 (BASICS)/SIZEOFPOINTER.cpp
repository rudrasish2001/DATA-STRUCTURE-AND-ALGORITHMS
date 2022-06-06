#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int *p1;
	char *p2;
	float *p3;
	double *p4;
	struct Rectangle *p5;
	/*all pointers same amount of memory or size that is 8 bytes because what ever the
	data type be but the pointers takes the same amount of memory*/
	/*size of a pointer is independent of its data type*/
	/*latest compilers are taking 8 bytes in 64 bit machines earlier they used 
	to take 4 bytes in 32 bit machines*/
	
	cout<<sizeof(p1)<<endl;
	cout<<sizeof(p2)<<endl;
	cout<<sizeof(p3)<<endl;
	cout<<sizeof(p4)<<endl;
	cout<<sizeof(p5)<<endl;
	
    return 0;
	
}
