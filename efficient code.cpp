#include<iostream>
using namespace std;
int main(){
	float a;
	cout<<"Enter the time taken by the worker to complete the task?"<<endl;
	cin>>a;
	if (a>=2 && a<3)
	{
		cout<<"The worker is highly efficient."<<endl;
	}
	else if (a>=3 && a<4)
	{
		cout<<"The worker need to improve the speed."<<endl;
	}
	else if (a>=4 && a<=25)
	{
		cout<<"The training should be given to worker to improve the speed."<<endl;
	}
	else if (a>5)
	{
		cout<<"The worker is fired."<<endl;
	}
	else
	{
		cout<<"Please enter correct time."<<endl;
	}
	return 0;
}
