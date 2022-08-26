#include <iostream>



int main() {
	const int N = 15;
	float x[N];
	std::cout << "Input 15 float numbers to sort:\n";
	for (int i = 0; i < 15; i++) {
		std::cin >> x[i];
	}

	int left = 0, right = N - 1;

	while (right - left > 0) {
		for (int i = left; i < right; i++) {
			if (x[i] < x[left]) {
				// std::cout << "x[" << left << " = " << x[left] << "] <<<< ";
				// std::cout << "x[" << i << " = " << x[i] << "]\n";
				float temp = x[left];
				x[left] = x[i];
				x[i] = temp;
			} else if (x[i] > x[right]) {
				// std::cout << "x[" << right << " = " << x[right] << "] >>>> ";
				// std::cout << "x[" << i << " = " << x[i] << "]\n";
				float temp2 = x[right];
				x[right] = x[i];
				x[i] = temp2;
			}
		}
		left++;
		right--;
	}

	for (int i = N - 1; i >= 0; i--) {
		std::cout << x[i] << " ";
	}
	std::cout << std::endl;
}