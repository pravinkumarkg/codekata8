#include <iostream>
using namespace std;

int main() {
	int n1,n2,product,count;
	cin>>n1>>n2;
	product=n1*n2;
	for(int i=1;i<=product;i++)
	{
		if(product==i*i)
		{
			count++;
		}
	}
	if(count>0||product==0)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;
}
