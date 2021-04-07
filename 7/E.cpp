#include <iostream>

int main() {
	int N;

	std::cin >> N;
	int* a = new int[N * N];
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) {
			std::cin >> *(a + i * N + k);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int k = N - 1; k >= 0; k--) {
			std::cout << *(a + i + N * k) << " ";
		}
		std::cout << "\n";
	}
	return 0;
}