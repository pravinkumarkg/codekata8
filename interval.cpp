#include <iostream>
using namespace std;

int main() {
	int n,interval1,interval2,count=0;
	cin>>interval1>>interval2;
	for(int i=interval1+1;i<interval2;i++)
	{
		if(n==i)
		count++;
		
	}
	if(count==0)
	cout<<"yes";
	else
	cout<<"no";
	return 0;
}
