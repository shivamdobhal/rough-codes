#include <iostream>
#include <string>
using namespace std;
int main()
{
	int yr,ch;
	string month="october";
	int date=16; 
	yr=2021;
	cout<<"Enter your choice : ";
	cin>>ch;

switch(ch)
{

case 1:
	cout<<" "<<yr;
	break;
case 2:
	cout<<" "<<month;
	break;
case 3:
	cout<<" "<<date;
	break;
default:
	cout<<"Invalid choice";
	break;
}
return 0;
}
