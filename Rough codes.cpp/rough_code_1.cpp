#include <iostream>
using namespace std;
void boolf()
{

bool x=1;
cout<<"\nbool value = "<<x;
}
void  intf()
{
 int x=10;
 cout<<"\ninteger value= "<<x;
}
void floatf()
{
float x=3.20;
cout<<"\nfloat value= "<<x;
}

void doublef()
{
 double x=2.4444;
 cout<<"\ndouble value = "<<x;
}
void longf()
{
long x=5000;
cout<<"\nlong int value ="<<x;
}
void charf()
{
char ch='A';
cout<<"\ncharacter value is "<<ch;
}

void widecharf()
{
wchar_t wch=L'm';
cout<<"\nwide char = "<<wch; 
}

void shortf()
{
short x=29;
cout<<"\nshort int = "<<x;
}


int main()
{
boolf();
intf();
shortf();
longf();
charf();
floatf();
doublef();

 return 0;
}











