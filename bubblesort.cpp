#include<iostream>
#include<iomanip>

using namespace std ;
int main(){

    int seq[] = { 6 , 9 , 3 , 7 , 2 } ;

    int arrlength = sizeof(seq) / sizeof(seq[0])  ;

    for( int start = 0  ; start < arrlength ; start++ ){

        for( int begin = 0 ; begin < arrlength - start - 1 ; begin++ ){  // because without ( -1 ) , the loop variable "begin" go to 4 and "begin+1" to 5  but there is no value for index 5 in this array , so we must reduce (-1)

            cout << " begin  =  " << begin << endl
                 << " begin + 1 =  " << begin+1 << endl << endl ;

            cout << " seq[begin] = " << seq[begin] << endl
                 << " seq[begin+1] = " << seq[begin+1] << endl << endl ;

            if( seq[begin] > seq[begin+1] ){

                int temp = seq[begin] ;

                seq[begin] = seq[begin+1] ;

                seq[begin+1] = temp ;

            }

            cout << endl
                 << " seq[begin]  = " << seq[begin] << endl
                 << " seq[begin+1]  = " << seq[begin+1] << endl ;

        }
    }

    cout << " The sequence is " << endl ;

    for( int start = 0 ; start < arrlength ; start++ ){

        cout << seq[start] << "    " ;

    }



    cout << endl ;

//    cout << " seq[4] = " << seq[4] << endl ;

    int numoflargestnum ;

    cout << "How many first largest number you want in " << arrlength << " terms sequence. :: " ;
    cin  >> numoflargestnum ;

    cout << " The num of " << numoflargestnum << " largest number are " << endl ;

    for( int start = arrlength - 1 ; start >= arrlength - numoflargestnum ; start-- ){ //

        cout << setw(5) << seq[start]  ;

    }


    cout << endl ;

    return 0;
}