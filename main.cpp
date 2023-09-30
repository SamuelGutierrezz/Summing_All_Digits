#include <iostream>
using namespace std;


int sum_of_digits(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; ++i)
		sum += i;

	return sum;
}




int main()
{
	int n;
	cin >> n;
	int result = sum_of_digits(n);
	cout << result << endl;

	return 0;
}
