#include <iostream>
#include <string.h>
#include <cstring>
#include <iomanip>
using namespace std;
void showMid(int a[3][3], int s);
int main()
{
    int arr[3][3] = {{00, 01, 02}, {10, 11, 12}, {20, 21, 22}};
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    showMid(arr, 3);
    return 0;
}
void showMid(int a[3][3], int s)
{
    const int mid = (int) s/2;
    cout<<"Elements of middle row: ";
    for(int i = 0; i < s; i++)
    {
        cout<<a[mid][i]<<"\t";
    }
    cout<<endl;
    cout<<"Elements of middle column: ";
    for(int k = 0; k < s; k++)
    {
        cout<<a[k][mid]<<"\t";
    }
}
