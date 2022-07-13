#include<iostream>
using namespace std;
int main()
{
    int A[3][2] = { {0,1}, {2,3}, {4,5} };
    int B[2][3] = { {0,1,2}, {3,4,5} };
    int C[3][3];

    cout<<"Matrix A:"<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout<<B[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Matrix B:"<<endl;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }

    //Multiplication to gain Matrix C
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for(int q = 0; q < 2; q++)
            {
                C[i][j] += A[i][q] * B[q][j];
            }
        }
    }

    //display Matrix C
    cout<<"The resulting Matrix C:"<<endl;
    for(int k = 0; k < 3; k++)
    {
        for(int l = 0; l < 3; l++)
        {
            cout<<C[k][l]<<"\t";
        }
        cout<<endl;
    }
}
