#include<iostream>
using namespace std;

//原来去掉了同步的功能。cin慢是有原因的，其实默认的时候，cin与stdin总是保持同步的，也就是说这两种方法可以混用，而不必担心文件指针混乱，同时cout和stdout也一样，两者混用不会输出顺序错乱。正因为这个兼容性的特性，导致cin有许多额外的开销，如何禁用这个特性呢？只需一个语句std::ios::sync_with_stdio(false);，这样就可以取消cin于stdin的同步了。程序如下：
int main()
{
	std::ios::sync_with_stdio(false);
	printf("1");
	cout<<1;
	return 0;
} 
