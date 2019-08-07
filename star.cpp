#include <iostream>
using namespace std;

int main() {
	string value,str="";
	cin>>value;
	int length=value.length();
	if(length%2==0)
	{
		value[length/2]='*';
		value[length/2-1]='*';
	}
	if(length%2==1)
	{
		value[length/2]='*';
	}
	for(int i=0;i<length;i++)
	{
		str+=value[i];
	}
	cout<<str;
	return 0;
}
