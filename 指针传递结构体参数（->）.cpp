#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct node
{
    int x, y;

};

void pscanf(node *p)
{
	scanf("%d %d",&p->x,&p->y);
}

void pculculation(node *a,node *b)
{
	int ans;
	ans= a->x * b->x;
	printf("%d",ans);
}
int main() {
	node a,b;
	pscanf(&a);
	pscanf(&b);
	pculculation(&a,&b);
    return 0;
}
