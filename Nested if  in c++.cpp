#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"ENTER THE NUM(1) : ";
	cin>>num1;
	cout<<"ENTER THE NUM(2) : ";
	cin>>num2;
	if(num1>num2){
		cout<<"NUM1 IS GREATER THEN NUM2";
	}
	else if(num1<num2){
		cout<<"NUM2 IS GREATER THEN NUM1";
	}
	else{
		cout<<"THE NUMBER ARE EQUAL";
	}
	return 0;
}