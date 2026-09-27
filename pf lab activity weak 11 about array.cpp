#include<iostream>
using namespace std;
int main () {
	int n;
	int sum;
	cout<<"enter a number ";
	cin >>n;
	n=n-1;
	int num [n];
	for (int i= 0;i<n;i++)
	{
		cout <<"enter"<<i+1<<"number:"<<endl;
		cin>>num[i];
	}
	for(int i=0;i<=n;i++)
	{
		cout <<"number: "<<i+1<<num[i]<<endl;
		sum=sum +num[i];
	}
	cout <<"sum of all the number is:"<<sum;
	return 0;
}
