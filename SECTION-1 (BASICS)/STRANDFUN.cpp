#include<iostream>
#include<stdio.h>
/*This code is wriotten using structure and functions*/
using namespace std;
/*it is modular program */
struct Rectangle
{
	int length;
	int breadth;
};
void initialize(struct Rectangle *r,int l,int b)
{
	r->length=l;
	r->breadth=b;
}
int area(struct Rectangle r)/*in C++ code struct is not mandatory it's presence will not cause any difference*/
{
	return r.length*r.breadth;
}
int perimeter( Rectangle r)
{
	int p;
	p=2*(r.length+r.breadth);
	return p;
}
int main()
{
	Rectangle r={0,0};
	int l,b;
	printf("Enter length and Breadth");
	cin>>l>>b;
	initialize(&r,l,b);
	int a=area(r);
	int peri=perimeter(r);
	printf("Area=%d\nPerimeter=%d\n",a,peri);
	
	return 0;
}
