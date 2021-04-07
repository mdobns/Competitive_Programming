#include <bits/stdc++.h>
using namespace std;

int minOperations(int arr1[], int arr2[],
				int i, int j,
				int n)
{

int f = 0;
for (int i = 0; i < n; i++)
{
	if (arr1[i] != arr2[i])
	f = 1;
	break;
}
if (f == 0)
	return 0;

if (i >= n || j >= n)
	return 0;

if (arr1[i] < arr2[j])

	return 1 + minOperations(arr1, arr2,
							i + 1, j + 1, n);

return max(minOperations(arr1, arr2,
						i, j + 1, n),
			minOperations(arr1, arr2,
						i + 1, j, n));
}

void minOperationsUtil(int arr[], int n)
{
int brr[n];

for (int i = 0; i < n; i++)
	brr[i] = arr[i];

sort(brr, brr + n);
int f = 0;

for (int i = 0; i < n; i++)
{
	if (arr[i] != brr[i])
	f = 1;
	break;
}

if (f == 1)

	cout << (minOperations(arr, brr,
						0, 0, n));
else
	cout << "0";
}


int main()
{
	int arr[] = {3, 2, 5, 1, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	minOperationsUtil(arr, n);
}
