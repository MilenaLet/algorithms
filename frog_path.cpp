#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	int n;
	cin >> n;
	if (n == 2)
	{
		cout << -1;
		return 0;
	}

	if (n == 1)
	{
		int res;
		cin >> res;
		cout << res << endl << n;
		return 0;
	}

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	vector <int> res(n);
	vector <int> res2;
	res[0] = a[0];
	res[1] = -100;
	res[2] = a[2] + res[0];
	for (size_t i = 3; i < a.size(); i++)
	{
		res[i] = max(res[i - 2], res[i - 3]) + a[i];
	}
	res2.push_back(n);
	for (size_t i = a.size() - 1; i > 0;)
	{
		int b = res[i] - a[i];
		if (res[i - 2] == b)
		{
			i = i - 2;
			res2.push_back(i + 1);
		}
		else
		{
			i = i - 3;
			res2.push_back(i + 1);
		}

	}
	cout << res[res.size() - 1] << endl;
	reverse(res2.begin(), res2.end());
	for (vector<int>::iterator it = res2.begin(); it != res2.end(); ++it)
		cout << *it << " ";
	return 0;
}