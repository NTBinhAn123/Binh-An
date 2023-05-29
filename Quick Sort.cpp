#include<iostream>
using namespace std;

void quicksort(int a[], int left, int right)
{
	int mid = a[(left + right) / 2];
	int l = left;
	int r = right;
	do
	{
		while (a[l] < mid)
			l++;
		while (a[r] > mid)
			r--;
		if (l <= r)
		{
			swap(a[l], a[r]);
			l++;
			r--;
		}
	} while (l <= r);
	if (left < r)
		quicksort(a, left, r);
	if (l < right)
		quicksort(a, l, right);
}
int main()
{
	int a[] = { 10 ,9 ,2 ,3 ,7 ,1 ,13 ,0 ,5 };
	int n = sizeof(a) / sizeof(a[0]);
	quicksort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
		cout << "  "<<a[i]<<" ";
	cout << endl;
	return 0;
}