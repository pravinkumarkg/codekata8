#include <iostream>
using namespace std;

int main() {
	int n,rem,sum=0;
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n/=10;
	}
	while(sum>0)
	{
		rem=sum%10;
		if(rem%2!=0)
		{
			cout<<rem<<" ";
		}
		sum/=10;
	}
	return 0;
}
