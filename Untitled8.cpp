#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	int a , b ,c;
	
	
	cout<<"Please enter the first number:"<<endl;
	cin>>a;
	cout<<"Please enter the second number:"<<endl;
	cin>>b;
	cout<<"Please enter the third number:"<<endl;
	cin>>c;
	
	
	
	if ( b <= a && b <= c )
	{
		cout<<"The smallest number is:"<<b;
	}
	else if ( c <= a && c <= b )
	{
		cout<<"The smallest number is:"<<c;
	}
	else 
	{
		cout<<"The smallest number is:"<<a;
	}

	
}
