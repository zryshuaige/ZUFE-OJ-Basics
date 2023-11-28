#include<iostream>
using namespace std;
int main()
{
	int input,ans;
	cin>>input;
	ans=input%7;
	if(ans==0) cout<<7<<endl;
	else cout<<ans<<endl;
	return 0;
}
