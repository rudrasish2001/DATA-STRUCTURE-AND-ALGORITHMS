#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int &r=a; /*initialisation*//*r is the nickname of the variable a, So a and r are same*/
	int b=25;
	r=b; /*assigning values*/
	
	r=34;
	cout<<a<<endl<<r<<endl;
	/*reference a doesn't consume extra memory it uses same memory as a*/
	
	
	return 0;
}
