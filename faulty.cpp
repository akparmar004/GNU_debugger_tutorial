#include<iostream>

using namespace std;
void goo()
{
	//int* p = nullptr;
	//*p = 10;
}

void foo()
{
	goo();
}

int main()
{
	
	foo();
	return 0;
}
