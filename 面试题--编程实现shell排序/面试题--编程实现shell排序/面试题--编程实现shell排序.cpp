#include<iostream>
using namespace std;

void shell_sort(int a[], int len) {
	int h, i, j, temp;
	for (h = len / 2;h > 0;h = h / 2){
		for (i = h;i < len;i++) {
			temp = a[i];
			for (j = i - h;j >= 0 && temp < a[j]; j -= h) {
					a[j + h] = a[j];
				}
				a[j + h] = temp;
		}
	}
}

void printf_sort(int a[], int len) {
	for (int i = 0;i < len;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	int a[] = { 7,3,5,8,9,1,2,4,6 };
	int len = sizeof(a) / sizeof(a[0]);
	cout << "before shell sort:" << endl;
	printf_sort(a, len);
	shell_sort(a, len);
	cout << "after shell sort:" << endl;
	printf_sort(a, len);

	return 0;
}