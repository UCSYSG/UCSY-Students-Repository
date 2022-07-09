#include<iostream>
using namespace std;
int main()
{
    int a[] = {1, 3, 5, 2, 6, 0, 12, -1};
    for(int j = 0; j < 8; j++)
    {
        int temp;
        for(int i = 0; i <7-j; i++)
        {
            if(a[i] < a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    cout<<"The array element are: ";
    for(int i = 0; i < 8; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nThe largest 3 integers are: ";
    for(int i = 0; i <3; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
