#include<bits/stdc++.h>
using namespace std;
int fun(int arr[], int sum, int n)
{
	if (sum == 0) return 0;
	if (sum < 0) return INT_MAX - 1;
	if (n < 0) return INT_MAX - 1;
	if (sum >= arr[n])
		return min(fun(arr, sum, n - 1), fun(arr, sum - arr[n], n) + 1);
	else
		return fun(arr, sum, n - 1);
	// return INT_MAX;
}
int main()
{
	int sum;
	int n;
	cin >> sum >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int t = fun(arr, sum, n - 1);
	// cout << t;
	cout << (t != INT_MAX - 1 ? t : -1) << endl;
	// cout << INT_MAX;

}