#include<iostream>
using namespace std;

int main()
{
    int matrix[3][2], integer,output;
    cout<<"enter an integer: ";
    cin>>integer;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"enter number: ";
            cin>>matrix[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            output=matrix[i][j]*integer;
            cout<<output<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
