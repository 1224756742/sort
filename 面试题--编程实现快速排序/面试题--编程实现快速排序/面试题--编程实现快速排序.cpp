#include<iostream>
using namespace std;

void quick_sort(int a[], int low, int high);

int main()
{
	int data[9] = { 54,38,96,23,15,72,60,45,83 };
	int len;
	len = sizeof(data) / sizeof(data[0]);
	cout << "ÅÅÐòÇ°£º" << endl;
	for (int i = 0;i < len;i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
	quick_sort(data, 0, len - 1);
	cout << "ÅÅÐòºó£º" << endl;
	for (int i = 0;i < len;i++) {
		cout << data[i] << " ";
	}
	cout << endl;
	return 0;
}

void quick_sort(int a[], int low, int high) {
	int i, j, pivot;
	if (low < high)
	{
		pivot = a[low];
		i = low;
		j = high;
		while (i < j)
		{
			while (i < j && a[j] >= pivot)
				j--;
			if (i < j)
				a[i++] = a[j];

			while (i < j && a[i] <= pivot)
				i++;
			if (i < j)
				a[j--] = a[i];
		}
		a[i] = pivot;
		quick_sort(a, low, i - 1);
		quick_sort(a, i + 1, high);
	}
}