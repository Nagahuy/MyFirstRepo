//MSSV:24120064             Name: Truong Dinh Nhat Huy
#include <iostream>
using namespace std;

int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	return fibonacci(n - 2) + fibonacci(n - 1);
}
int main()
{
	int n;
	cin >> n;
	for(int i = 0;i<n;i++){
		cout<<fibonacci(i)<<" ";
	}
} //this is for testing
