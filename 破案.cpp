#include <iostream>
using namespace std;


int main()
{
	int f;
	char in;
	cin>>in;
	f=(in!='A')+(in=='C')+(in=='D')+(in!='D');
	if(f==3){
		cout<<"yes";
	}
	else	cout<<"no";
	
	return 0;
}
