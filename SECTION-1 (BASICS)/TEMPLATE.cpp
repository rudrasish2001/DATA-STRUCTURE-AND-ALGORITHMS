#include<iostream>
using namespace std;

template<class T>
class Arithmetic
{
private:
	T a;
	T b;
public:
	Arithmetic(T a,T b);
	T add();
	T sub();
	
};

    
	template<class T>
	Arithmetic<T>::Arithmetic(T a,T b)

	{
		this->a=a;
		this->b=b;
	}
	template<class T>
	T Arithmetic<T>::add()
	{
		T c;
		c=a+b;
		return c;
	}
	template<class T>
	T Arithmetic<T>::sub()
	{
		T c;
		c=a-b;
		return c;
	}
	


int main()
{
	Arithmetic<char> ar('B','A');/*for char*/
	Arithmetic<char> ar('A','B');
	
	/*Arithmetic<int> ar(10,5);*//*integer*/
	/*Arithmetic<float> ar(10.343,5.457);*//*foat*/
	cout<<"Add"<<ar.add()<<endl;
	cout<<"Sub"<<ar.sub()<<endl;
	return 0;
}
 
