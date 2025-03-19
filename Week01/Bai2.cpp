#include <iostream>
using namespace std;

int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	return fibonacci(n - 2) + fibonacci(n - 1);
}

void FiboSeries(int n) {
	for (int i = 0; i < n; i++) cout << fibonacci(i) << " ";
}
int main()
{
	int n;
	cin >> n;
	FiboSeries(n);
}
