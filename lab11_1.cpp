#include<iostream>

using namespace std;

unsigned long long int fibonacci(unsigned long long int);

int main(){
	
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(40) << "\n";
	return 0;
}

unsigned long long int fibonacci(unsigned long long int x)
{
	if(x == 0)
	{
		return 0;
	}
	else if(x == 1)
	{
		return 1;
	}
	if (x > 1)
	{
		unsigned long long y;
		y = fibonacci(x-1) + fibonacci(x-2);
		return y;
	}
}


