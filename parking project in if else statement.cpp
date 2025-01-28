#include<iostream>
using namespace std;
int main()
{
	int num,amount=0,count=0;
	while(true){
	
	//menu for the parking
	cout<<"Press 1 for Rickshaw \n";
	cout<<"Press 2 for Car \n";
	cout<<"Press 3 for Bus \n";
	cout<<"Press 4 for show the record\n";
	cout<<"Press 5 to delete the record \n";
	cin>>num;
	
	if(num==1)
	{
		amount=amount+100;
		count = count+1;
	}
	
	else if(num==2)
	{
		amount=amount+200;
		count = count+1;
	}
	
	else if(num==3)
	{
		amount=amount+300;
		count = count+1;
	}
	
	else if(num==4)
	{
	   cout<<"The total amount ="<<amount;
	   cout<<"\n";
	   cout<<"the total number of vehicles parking = "<<count<<"\n";
	   cout<<"*****************************\n";
	}
	
	else if(num==5)
	{
		amount=0;
		count=0;
		cout<<"Parking data delete \n *****************************\n";
	}
	else{
		cout<<"INVALID NUMBER"<<endl;
	}
}
	return 0;
}