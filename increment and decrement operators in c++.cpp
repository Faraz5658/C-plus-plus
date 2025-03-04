#include<iostream>
using namespace std;
int main()
{
	//PERFIX FOR A ++
	int a=12,b=23,c=3;
	//PERFIX FOR A --
	int x=20,y=12,z=14;
	
	cout<<"PERFIX FOR A ++"<<endl;
	cout<<"befor value of a\t 12"<<endl;
	cout<<"after value of a\t"<<++a<<"\n\n";
	
	cout<<"befor value of b\t 23"<<endl;
	cout<<"after value of b\t "<<++b<<"\n\n";
	
	cout<<"befor value of c\t 3"<<endl;
	cout<<"after value of c\t "<<++c<<"\n\n";
	
    cout<<"******************************\n\n";	
	cout<<"PERFIX FOR A --"<<endl;
	cout<<"befor value of x\t 20"<<endl;
	cout<<"befor value of x\t"<<--x<<"\n\n";
	
	cout<<"befor value of y\t 12"<<endl;
	cout<<"after value of y\t "<<--y<<"\n\n";
	
	cout<<"befor value of z\t 14"<<endl;
	cout<<"after value of z\t "<<--z<<"\n\n";
	
	cout<<"******************************\n\n";	
	cout<<"******************************\n\n";	
	
	cout<<"POSTFIX FOR A ++"<<endl;
	cout<<"befor value of a\t "<<a++<<endl;
	cout<<"after value of a\t "<<a<<"\n\n";
	
	cout<<"befor value of b\t "<<b++<<endl;
	cout<<"after value of b\t "<<b<<"\n\n";
	
	cout<<"befor value of c\t "<<c++<<endl;
	cout<<"after value of c\t "<<c<<"\n\n";
	
    cout<<"******************************\n\n";	
	cout<<"POSTFIX FOR A --"<<endl;
	cout<<"befor value of x\t "<<x--<<endl;
	cout<<"befor value of x\t "<<x<<"\n\n";
	
	cout<<"befor value of y\t "<<y--<<endl;
	cout<<"after value of y\t "<<y<<"\n\n";
	
	cout<<"befor value of z\t "<<z--<<endl;
	cout<<"after value of z\t "<<z<<"\n\n";
	
	return 0;
}