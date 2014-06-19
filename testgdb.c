#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"input a int number"<<endl;
	cin>>n;
	if(n<=0)
	{
		cout<<"error number"<<endl;
		return -1;
	}
	else
  	{
		for(int i=0;i<n;i++)
		{
			cout<<i<<endl;
		}
		return 0;
  	} 	
}

