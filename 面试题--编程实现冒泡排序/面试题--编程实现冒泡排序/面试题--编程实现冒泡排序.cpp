#include<iostream>
using namespace std;

/*void bubble_sort(int a[], int len) {
	int i, j,temp = 0;
	for (i = 1;i < len - 1 ; i++)
	{
		for (j = 0;j <len - i;j++)
		{
			if (a[j + 1] < a[j]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
*/

void bubble_sort(int a[], int len) {
	int i = 0, j = 0, temp = 0;
	for (i = 0;i < len - 1;i++) {
		for (j = len - 1;j >= i ;j--)
		{
			if (a[j] < a[j - 1]) {
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
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
	int nums[] = { 7,3,5,8,90,1,2,4,6 };
	int len = sizeof(nums) / sizeof(nums[0]);
	cout << "before bubble sort:"<< endl;
	printf_sort(nums, len);;
	bubble_sort(nums, len);
	cout << "after bubble sort:" << endl;
	printf_sort(nums, len);

	return 0;
}