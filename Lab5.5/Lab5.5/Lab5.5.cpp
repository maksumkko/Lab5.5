#include <iostream>
#include <cmath>

using namespace std;

int f(int n, int& depth);
int C(int k, int n, int& depth);

int main()
{
	int k, n, depth=0;
	cout << "k="; cin >> k;
	cout << "n="; cin >> n;
	if (k > n)
	{
		cout << "0" << endl;
		return 0;
	}
	if (n > 0)
	{
		cout << "C= " << C(k - 1, n - 1, depth) + C(k, n - 1, depth) << endl;
		cout << "depth: " << depth << endl;
	}
	if ((k == n) || (k == 0))
	{
		cout << "1" << endl;
		cout << "depth: " << depth << endl;
	}
}

int f(int n,int& depth)
{
	depth++;
	if (n == 0 || n == 1) 
	{
		return 1;
	}
	return n * f(n - 1, depth);
}

int C(int k, int n, int& depth)
{
	return f(n, depth) / (f(k, depth) * (f(n - k, depth)));
}
