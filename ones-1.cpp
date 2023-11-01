#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int len;
	cin >> len;
	int count;
	cin >> count;
	long long a = 1;
	long long b = 1;
	long ost = 1000000007;

	for (size_t i = len - count + 1; i <= len; i++)
	{
		a = (a * i) % ost;
	}

	for (size_t i = 1; i <= count; i++)
	{
		b = (b * i) % ost;
	}
	
	long long pow = ost - 2;
	long long p = 1;

	while (pow > 0) {
		if (pow % 2 != 0)
		{
			p = (p * b) % ost;
		}
		b = (b * b) % ost;
		pow >>= 1;
	}

	cout << (a * p) % ost;
}