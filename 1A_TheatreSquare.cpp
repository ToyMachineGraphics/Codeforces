#include <iostream>

using std::cin;
using std::cout;

int main(void)
{
	long n, m, a;
	cin >> n >> m >> a;

	long long least = (long long)(n / a + (n % a != 0)) * (m / a + (m % a != 0));
	cout << least;

	return 0;
}