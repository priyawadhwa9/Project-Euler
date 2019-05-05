#include <iostream>


bool isPrime(int i) {
	if (i == 1)
		return false;
	if (i == 2 || i == 3)
			return true;
	for (int j = 2; j < i; j++)
		if (i%j == 0)
			return false;
	return true;
}

int main()
{
	unsigned long long n = 10;
	
	int max_i = 2;
	for(int i = 2; i < n; i++) {
		if (isPrime(i)){
			std::cout << i << std::endl;
			if (n%i == 0) {
				max_i = i;
				n = n / i;
			}
		}
		i++;
	}

	std::cout << max_i;
	
}