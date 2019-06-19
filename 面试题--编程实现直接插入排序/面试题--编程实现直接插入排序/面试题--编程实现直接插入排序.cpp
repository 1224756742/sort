#include <iostream>
using namespace std;

void insert_sort(int a[], int n) {
	int i, j, temp;

	for (i = 1;i < n;i++) {
		temp = a[i];
		for (j = i - 1;j >= 0 && temp < a[j];j--) {
			a[j + 1] = a[j];
		}
		a[j + 1] = temp;
	}
}

void printf_array(int a[],int len) {
	for (int i = 0;i < len;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	int a[] = { 7,3,5,8,9,1,2,4,6 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << "ÅÅÐòÇ°£º" << endl;
	printf_array(a, n);
	cout << "ÅÅÐòºó£º" << endl;
	insert_sort(a, n);
	printf_array(a, n);
	
	return 0;
}