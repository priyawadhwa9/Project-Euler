#include <iostream>

int main()
{
	int sum = 0;
	int last_i = 1;
	int i = 2;
	while (i < 4000000)
	{
		if (i % 2 == 0)
			sum += i;
		i = i + last_i;
		last_i = i - last_i;
	}
	
	std::cout << "The total sum is: " << sum;
	
}