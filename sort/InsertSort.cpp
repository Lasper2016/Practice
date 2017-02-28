#include <iostream>
using namespace std;

void insertSort(int array[], int n)
{
	int tmp,j;
	for (int i = 1; i < n; ++i) {
		tmp = array[i];
		for (j = i; j >0 && tmp < array[j - 1]; j--) {
			array[j] = array[j - 1];
		}
		array[j] = tmp;
	}
}

void main()
{
    int array[10]={1,5,7,6,3,4,9,8,2,0};
    insertSort(array,10);
}