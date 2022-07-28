#include<iostream>
using namespace std ;
int main(){


    int seq[] = { 1 , 2 , 3 , 5 , 6 , 7 , 8 , 10 , 12 , 13 , 15 , 16 , 18 , 19 , 20 } ;

    int lend = 1 ,
        rend = sizeof(seq) / sizeof(seq[0]) ;

    int findnum = 10 ;

    while( lend < rend ){

        float div = ( lend + rend )  / 2 ;

        int middle = static_cast<float>( div ) ;

        if( findnum > seq[middle] ){

            lend = middle + 1 ;

        }else{

            rend = middle ;
        }

    }

    if( findnum == seq[lend] ){

        cout << " Found the number " << findnum << " at index " << lend << " in array. " << endl ;

    }else{

        cout << " The number " << findnum << " you want to find is not found in the list. " << endl ;
    }

    cout << lend << endl << rend << endl ;

    return 0 ;
}
