#include <iostream>
#include <cstdio>
using namespace std;



int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif	
	int a, b;
	scanf("%d%d", &a, &b);
	int x = (a + b - 4) + rand() % 8;
	printf("%d", x);
	
	return 0;
}