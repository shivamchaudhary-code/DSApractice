#include<iostream>

using namespace std;

void rearrange(int *a, int n) {
	int i = 0;
	int j = n - 1;

	//shift al negative element to the end;

	while (i < j) {
		while (i <= n and a[i] > 0) {
			i++;
		}
		while (j >= 0 and a[j] < 0) {
			j--;
		}
		if (i < j) {
			swap(a[i], a[j]);
		}
	}
	if (i == 0 || i == n) {
		return;
	}
	int k = 0;
	while (k < n and i < n) {
		swap(a[k], a[i]);
		i++;
		k = k + 2;
	}
}

int main() {
	int arr[] = {2, 3, -4, -1, 6, 9};
	int n = sizeof(arr) / sizeof(int);

	rearrange(arr, n);

	for (auto i : arr) {
		cout << i << " ";
	}

}