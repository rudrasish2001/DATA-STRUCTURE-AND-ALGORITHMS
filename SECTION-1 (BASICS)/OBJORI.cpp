#include<iostream>
#include<stdio.h>
/*This code is wriotten using structure and functions*/
using namespace std;
/*it is object oriented program design*/
class Rectangle/*in struct every thing is public while in a class everything is private by default */
{
public:
	int length;
	int breadth;

void initialize(int l,int b)
{
	length=l;
	breadth=b;
}
int area()
{
	return length*breadth;
}
int perimeter()
{
	int p;
	p=2*(length+breadth);
	return p;
}

};
int main()
{
	Rectangle r;
	int l,b;
	printf("Enter length and Breadth");
	cin>>l>>b;
	r.initialize(l,b);
	int a=r.area();
	int peri=r.perimeter();
	printf("Area=%d\nPerimeter=%d\n",a,peri);
	
	return 0;
}
