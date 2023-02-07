#include <limits>
#include <iostream>

int main() {
	std::cout << "Min streamsize value: " << std::numeric_limits<std::streamsize>::min() << std::endl;
	std::cout << "Max streamsize value: " << std::numeric_limits<std::streamsize>::max() << std::endl;
	return 0;
}