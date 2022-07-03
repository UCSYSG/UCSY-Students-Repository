#include<iostream>
using namespace std;
int main()
{
	int a[20];
	int pCount = 0, nCount = 0, oCount = 0, eCount = 0;
	for (int i = 0; i < 20; i++)
	{
		cout << "Enter the element at index " << i << ": ";
		cin >> a[i];
		if (a[i] > 0)
		{
			pCount++;
			if (a[i] % 2 == 0)
			{
				eCount++;
			}
			else
			{
				oCount++;
			}
		}
		else if(a[i] < 0)
		{
			nCount++;
			if (a[i] % 2 == 0)
			{
				eCount++;
			}
			else
			{
				oCount++;
			}
		}
	}
	cout << "The number of positive integers: " << pCount << endl
		<< "The number of negative integers: " << nCount << endl
		<< "The number of odd integers: " << oCount << endl
		<< "The number of even integers: " << eCount << endl;
	return 0;
}