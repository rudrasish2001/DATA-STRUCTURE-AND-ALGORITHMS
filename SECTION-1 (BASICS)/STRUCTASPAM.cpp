#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

struct Rectangle *fun()
{
	struct Rectangle *p;
	p=new Rectangle; /*for C++ language*/
	/*p=(struct Rectangle *)malloc(sizeof(struct Rectangle))*//*For C language*/
	p->length=15;
	p->breadth=2;
	
	return p;/*returning address of the structure*/
}
int main()
{
	struct Rectangle *ptr=fun();
	cout<<"LEngth"<<ptr->length<<endl<<"Breadth"<<ptr->breadth<<endl;
	return 0;
}
/*void fun(struct Rectangle r)*//*call by value*/
//void fun(struct Rectangle *p)/*call by address*//*Array is copied into this formal parameter*/
//{
	//p->length=20;/*in call by address 20 becomes new ;length*/
	//cout<<"Length"<<p->length<<endl<<"Breadth"<<p->breadth<<endl;
//}
//int main()
//{
	//struct Rectangle r={10,5};
	/*fun(r);*//*call by value*/
	//fun(&r);/*call by address*/
	//printf("Length %d\n Breadth %d\n",r.length,r.breadth);
	//return 0;
//}
