//Задача на программирование повышенной сложности : огромное число Фибоначчи по модулю

//Даны целые числа 1≤n≤10^18 и 2≤m≤10^5, необходимо найти остаток от деления n - го числа Фибоначчи на m.

#include <cassert>
#include <iostream>
#include <vector>

class Fibonacci {
public:
	static int get_remainder(long long n, int m) {
		assert(n >= 1);
		assert(m >= 2);
		// put your code here
		std::vector<int>remains = { 0,1 };
		for (size_t i = 2; i < m; ++i) {

		}


		return n % m;
	}
};

int main(void) {
	long long n;
	int m;
	std::cin >> n >> m;
	std::cout << Fibonacci::get_remainder(n, m) << std::endl;
	//
	return 0;
}