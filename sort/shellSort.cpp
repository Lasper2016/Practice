#include <iostream>

using namespace std;

void shellSort(int array[],int n )
{
	int i, j, step,tmp;
	for (step = n / 2; step > 0; step /= 2)
		for (i = step; i < n; i++) {
			tmp = array[i];
			for (j = i; j >= step; j -= step)
				if (tmp < array[j - step])
					array[j] = array[j - step];
				else
					break;
			array[j] = tmp;
		}
}

void main()
{
	int array[10] = { 9,6,7,8,0,2,3,1,4,5 };
	//insertSort(array,10);
	shellSort(array, 10);
	for (int i = 0; i < 10; i++)
		cout << array[i] << endl;
	system("pause");
}