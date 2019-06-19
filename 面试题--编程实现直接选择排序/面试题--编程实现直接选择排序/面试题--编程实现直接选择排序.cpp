#include<iostream>
using namespace std;
void quick_sort(int a[], int len);
int main()
{
	int data[] = { 54,38,96,23,15,72,60,45,83 };
	int len = sizeof(data) / sizeof(data[0]);
	cout << "ÅÅÐòÇ°£º" << endl;
	for (int i = 0;i < len;i++) {
		cout << data[i] << " ";
	}
	cout << endl;
	quick_sort(data, len);
	cout << "ÅÅÐòºó£º" << endl;
	for (int i = 0;i < len;i++) {
		cout << data[i] << " ";
	}
	cout << endl;

	return 0;
}

void quick_sort(int a[], int len)
{
	int i, j, x, l;

	for (i = 0;i < len;i++) {
		x = a[i];
		l = i;
		for (j = i;j < len;j++) {
			if (a[j] < x)
			{
				x = a[j];
				l = j;
			}
		}
		a[l] = a[i];
		a[i] = x;
	}
}