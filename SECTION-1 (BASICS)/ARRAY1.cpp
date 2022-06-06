#include<iostream>

using namespace std;

int main()
{
	int A[] = {2,4,6,8,10,12,14};
	int B[10] = {2,4};
	
	cout<<sizeof(A)<<endl;
	cout<<A[3]<<endl;
	printf("%d\n",A[2]);
	
	cout<<sizeof(B)<<endl;
	cout<<B[3]<<endl;
	
	for(int i=0; i<10;i++)
	{
		cout<<A[i]<<endl;
	}
	
	return 0;
	
	
}
