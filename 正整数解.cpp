#include <iostream>
using namespace std;


int main()
{
	int n;
	cin>>n; 
	for(int x=1;x<n;x++)
	{
		for(int y=1;y<n;y++)
		{
			if(x*x+y*y==n) 
			{
				cout<<x<<" "<<y<<endl;
			}
		}
	}
	return 0;
}
