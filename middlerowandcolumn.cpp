#include<iostream>
#include<iomanip>
using namespace std ;

void accpettwodarr(int row,int column){

    int arr[row][column] ;
    int start , begin ;

    for( begin = 0 ; begin < row ; begin++ ){

        for( start = 0 ; start < column ; start++ ){

            cout << "Please Enter a number for row " << begin + 1 << " , column " << start + 1  << " :: " ;
            cin  >> arr[begin][start] ;

        }
    }

    for( begin = 0 ; begin < row ; begin++ ){

        for( start = 0 ; start < column ; start++ ){

            cout << setw(5) << arr[begin][start] ;

        }

        cout << endl ;
    }

    // middle column

    int divcol = column / 2  , divrow = row / 2 ;

    cout << "The middle column element are " ;

    if( column % 2 != 0 ){

        for( start = 0 ; start < row ; start++ ){

            cout << setw(5) << arr[start][divcol] ;
        }

    }
    else{

        for( start = 0 ; start < row ; start++ ){

            cout << setw(5) << arr[start][divcol - 1 ]
                 << setw(5) << arr[start][divcol] ;

        }

    }

    cout << endl ;

    cout << "The middle row elements are " ;

    if( row % 2 != 0 ){

        for( begin = 0 ; begin < column ; begin++ ){

            cout << setw(5) << arr[divrow][begin] ;

        }

    }else{

        for( begin = 0 ; begin < column ; begin++ ){

            cout << setw(5) << arr[divrow - 1][begin]
                 << setw(5) << arr[divrow][begin] ;

        }
    }

    cout << endl ;
}



int main(){

    int rw , col ;

        cout << "Please Enter Row and Column For Matrix [ 2 3 ] :: " ;
        cin  >> rw >> col ;


    accpettwodarr(rw,col);

    return 0;
}