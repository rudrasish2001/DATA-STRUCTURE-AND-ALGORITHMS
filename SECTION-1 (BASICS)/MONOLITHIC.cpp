#include<iostream>
#include<stdio.h>

using namespace std;
/*it is monolithic program so every thing will be present inside the main function*/
int main()
{
	int length=0,breadth=0;
	
	printf("Enter length and Breadth");
	cin>>length>>breadth;
	int area=length*breadth;
	int peri=2*(length+breadth);
	printf("Area=%d\nPerimeter=%d\n",area,peri);
	
	return 0;
}
