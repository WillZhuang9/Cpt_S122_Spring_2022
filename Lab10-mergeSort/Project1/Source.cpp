#include <iostream>
using namespace std;
int* merge(int left[], int right[], int l_size, int r_size)
{
	
	int* res = new int[l_size + r_size];
	int l = 0;
	int r = 0;
	int cur = 0; 
	while (l < l_size && r < r_size)
	{
		int l_v = left[l], r_v = right[r];
		if (left[l] < right[r])
		{
			res[cur] = left[l];
			l++;
		}
		else
		{
			res[cur] = right[r];
			r++;
		}
		cur++;
	}
	while (l < l_size)
	{
		res[cur] = left[l];
		l++;
		cur++;
	}
	while (r < r_size)
	{
		res[cur] = right[r];
		r++;
		cur++;
	}
	return res; 
}
int* mergeSort(int arr[], int len)
{
	if (len < 2)
		return arr;
	int size = len;
	int mid = size / 2; 

	int* left = new int[mid]; 
	int* right = new int[size - mid];
	int l = 0; 
	int r = 0;
	for (int i = 0; i < size; i++)
	{
		if (i < mid)
		{
			left[l] = arr[i];
			l++;
		}
		else
		{
			right[r] = arr[i];
			r++;
		}
	}
	auto new_arr =  merge(mergeSort(left, mid), mergeSort(right, size - mid), mid, size - mid);
	
	
	return new_arr;
}
int main()
{
	int arr[] = { 3,1,3,4,5,6,-1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	auto new_arr = mergeSort(arr, len);
	for (int i = 0; i < len; i++)
	{
		cout << new_arr[i] << endl;
	}

}