#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	/*creating array in heap*/
	int *p;
	p = (int *)malloc(5*sizeof(int)); /*in C++ we can use {p=new int[5];it acts just as malloc}*/
	p[0]=10; p[1]=15;p[2]=14;p[3]=21;p[4]=31;
	for(int i=0;i<5;i++)
    cout<<p[i]<<endl;
    
    free(p);     /*in C++ delete [] p; is used for deallocating memory*/
    return 0;
	
}
