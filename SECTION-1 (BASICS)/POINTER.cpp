
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	/*pointer to array*/
	int A[5]={2,4,6,8,10}; /*it is created in the stack frame or whenever we declare anything in program it is created in stack frame of main functon*/
	int *p;
	p=A;  /*dont give & while initialising a pointer with an array as it ia an invalid syntax */
    
    for(int i=0;i<5;i++)
    cout<<p[i]<<endl; /*we can use A[i] as well as p[i]m pointer will as name of the array*/
    cout<<A[i]<<endl;
	return 0;
	/*int a=10;
	int *p;
	p=&a;	
	cout<<a<<endl;	
	printf("using pointer %d", *p);
	return 0;*/
}
