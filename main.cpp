#include<iostream>

int main()
{
	std::cout << "number ";
	int x;
	std::cin >> x;

	while (x>0)
	{
		std::cout << x % 10 << std::endl;
		x = x / 10;
	}
	
}