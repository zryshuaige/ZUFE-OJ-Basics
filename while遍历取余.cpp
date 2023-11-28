#include <iostream>
using namespace std;
int main()
{
	int k=10;
	while(k<=1000)
	{
		if(k%2==0&&k%3==0&&k%7==0)
			cout<<k<<endl;
		k++; 
	}
	return 0;	
}
