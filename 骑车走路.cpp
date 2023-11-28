#include <iostream>
using namespace std;
double walk(int x);double bike(int x); 

int main()
{
	int a;double b,c;
	cin>>a;
	b=walk(a);c=bike(a);
	if (b<c)
		cout<<"Walk";
	else if (c<b)
		cout<<"Bike"; 
	else
		cout<<"All";
	return 0;	
}


double walk(int x)
{
	double y;
	y=x/1.2;
	return y;
}

double bike(int x) 
{
	double y;
	y=27+x/3.0+23;
	return y;
}


