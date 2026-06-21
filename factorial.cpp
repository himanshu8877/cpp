
#include <iostream>
#include <limits>

// Simple factorial program
// Computes n! for 0 <= n <= 20 using unsigned long long

unsigned long long factorial(unsigned int n) {
	unsigned long long result = 1;
	for (unsigned int i = 2; i <= n; ++i) result *= i;
	return result;
}

int main() {
	std::cout << "Enter a non-negative integer (0-20): ";
	unsigned long long n;
	if (!(std::cin >> n)) return 0;
	if (n > 20) {
		std::cerr << "Input too large; result may overflow.\n";
		return 1;
	}
	std::cout << n << "! = " << factorial(static_cast<unsigned int>(n)) << '\n';
	return 0;
}
