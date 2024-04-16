#include<iostream>
using namespace std;

int sum(int x, int y)
{
	return x+y;
}

int main()
{
	int a = 10;
	int b = 20;
	
	a += b;
	
	int c = sum(a,b);
	
	cout << c << '\n';
	
	return 0;
}
