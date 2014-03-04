#include <iostream>
#include <cstdio>
using namespace std;



int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	unsigned short a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a + b);

	return 0;
}