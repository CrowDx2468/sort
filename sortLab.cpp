#include <iomanip>
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;
int arr1[1000] = {}, arr2[10000] = {}, arr3[100000] = {}, arr4[1000000] = {};
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
	int randomNumber = 1 + rand() % 1000;
	int size1 = 1000, size2 = 10000, size3 = 100000, size4 = 1000000;
	int tmp, i, j, pos;
	
	tm newTime;
	time_t now = time(0);
	localtime_s(&newTime, &now);

	for (int i = 0; i < 1000; i++) {
		arr1[i] = randomNumber;
		randomNumber = 1 + rand() % 1000;
	}

	now = time(0);
	localtime_s(&newTime, &now);
	cout << newTime.tm_hour << ":" << newTime.tm_min << ":" << newTime.tm_sec << " до сортировки первого массива" << endl;

	for (i = 0; i < size1; i++) 
	{
		pos = i;
		tmp = arr1[i];
		for (j = i + 1; j < size1; ++j) 
		{
			if (arr1[j] < tmp)
			{
				pos = j;
				tmp = arr1[j];
			}
		}
		arr1[pos] = arr1[i];
		arr1[i] = tmp;
	}
	
	now = time(0);
	localtime_s(&newTime, &now);
	cout << newTime.tm_hour << ":" << newTime.tm_min << ":" << newTime.tm_sec << " после сортировки первого массива" << endl;

	for (int i = 0; i < 10000; i++) {
		arr2[i] = randomNumber;
		randomNumber = 1 + rand() % 1000;
		
	}

	now = time(0);
	localtime_s(&newTime, &now);
	cout << newTime.tm_hour << ":" << newTime.tm_min << ":" << newTime.tm_sec << " до сортировки второго массива" << endl;

	for (i = 0; i < size2; i++)
	{
		pos = i;
		tmp = arr2[i];
		for (j = i + 1; j < size2; ++j)
		{
			if (arr2[j] < tmp)
			{
				pos = j;
				tmp = arr2[j];
			}
		}
		arr2[pos] = arr2[i];
		arr2[i] = tmp;
	}

	now = time(0);
	localtime_s(&newTime, &now);
	cout << newTime.tm_hour << ":" << newTime.tm_min << ":" << newTime.tm_sec << " после сортировки второго массива" << endl;


	for (int i = 0; i < 100000; i++) {
		arr3[i] = randomNumber;
		randomNumber = 1 + rand() % 1000;
	}

	now = time(0);
	localtime_s(&newTime, &now);
	cout << newTime.tm_hour << ":" << newTime.tm_min << ":" << newTime.tm_sec << " до сортировки третьего массива" << endl;

	for (i = 0; i < size3; i++)
	{
		pos = i;
		tmp = arr3[i];
		for (j = i + 1; j < size3; ++j)
		{
			if (arr3[j] < tmp)
			{
				pos = j;
				tmp = arr3[j];
			}
		}
		arr3[pos] = arr3[i];
		arr3[i] = tmp;
	}

	now = time(0);
	localtime_s(&newTime, &now);
	cout << newTime.tm_hour << ":" << newTime.tm_min << ":" << newTime.tm_sec << " после сортировки третьего массива" << endl;

	for (int i = 0; i < 1000000; i++) {
		arr4[i] = randomNumber;
		randomNumber = 1 + rand() % 1000;
		
	}

	now = time(0);
	localtime_s(&newTime, &now);
	cout << newTime.tm_hour << ":" << newTime.tm_min << ":" << newTime.tm_sec << " до сортировки четвёртого массива" << endl;

	for (i = 0; i < size4; i++)
	{
		pos = i;
		tmp = arr4[i];
		for (j = i + 1; j < size4; ++j)
		{
			if (arr4[j] < tmp)
			{
				pos = j;
				tmp = arr4[j];
			}
		}
		arr4[pos] = arr4[i];
		arr4[i] = tmp;
	}

	now = time(0);
	localtime_s(&newTime, &now);
	cout << newTime.tm_hour << ":" << newTime.tm_min << ":" << newTime.tm_sec << " после сортировки четвёртого массива" << endl;
}


