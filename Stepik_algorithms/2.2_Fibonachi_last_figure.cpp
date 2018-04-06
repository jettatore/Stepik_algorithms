//Дано число 1≤n≤107, необходимо найти последнюю цифру n - го числа Фибоначчи.

//Как мы помним, числа Фибоначчи растут очень быстро, поэтому при их вычислении
//нужно быть аккуратным с переполнением.В данной задаче, впрочем, этой проблемы
//можно избежать, поскольку нас интересует только последняя цифра числа Фибоначчи :
//если 0≤a, b≤9 — последние цифры чисел Fi и Fi + 1 соответственно,
//то(a + b)mod10 — последняя цифра числа Fi + 2.

#include <cassert>
#include <iostream>

class Fibonacci {
public:
	static int get_last_digit(int n) {
		assert(n >= 1);
		// put your code here
		int f_previous(0), f_current(1), result(0);
		for (size_t i = 1; i < n; ++i) {
			result = (f_previous + f_current) % 10;
			f_previous = f_current;
			f_current = result;
		}
		return result;
	}
};

int main(void) {
	int n;
	std::cin >> n;
	std::cout << Fibonacci::get_last_digit(n) << std::endl;
	return 0;
}
