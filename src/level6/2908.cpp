#include <iostream>
#include <vector>


int reverse_number(int& n)
{
	int reversed_number = 0, remainder;

	while (n != 0)
	{
		remainder = n % 10;
		reversed_number = reversed_number * 10 + remainder;
		n /= 10;
	}

	n = reversed_number;
}

int main()
{
	int A, B;

	std::cin >> A;
	std::cin >> B;

	reverse_number(A);
	reverse_number(B);

	if (A > B)
	{
		std::cout << A << std::endl;
	}
	else
	{
		std::cout << B << std::endl;
	}

	return 0;
}

