//Дано целое число 1≤n≤40, необходимо вычислить n - е число Фибоначчи
//(напомним, что F0 = 0, F1 = 1 и Fn = Fn−1 + Fn−2 при n≥2).
//new coment
#include <cassert>
#include <iostream>

class Fibonacci {
public:
	static int get(int n) {
		assert(n >= 0);
		// put your code here
		int result = 0;
		int n2 = 0;
		int n1 = 1;
		if (n > 1) {
			for (size_t i = 2; i <= n; ++i) {
				result = n1 + n2;
				n2 = n1;
				n1 = result;
			}
			return result;
		}
		return n;
	}
};

int main(void) {
	int n;
	std::cin >> n;
	std::cout << Fibonacci::get(n) << std::endl;
	return 0;
}
