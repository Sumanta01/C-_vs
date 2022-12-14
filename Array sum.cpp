#include<iostream>
using namespace std;
int main()
{

	int arr[] = {23, 3, 55, 66, 4, 3, 44, 556, 66, 6};
	int i;
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << "The size or length of the array is : " << len << endl;
	for (i = 0; i <= len; i++)
	{
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] + i << endl;
		}
	}
	return 0;
}
