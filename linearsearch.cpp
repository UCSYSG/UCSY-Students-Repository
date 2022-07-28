#include<iostream>

using namespace std;

int main(){

    int LENGTH , start , numb , foundplace ;

    cout << "Please Enter length of sequence :: ";
    cin  >> LENGTH;

    int searchbox[LENGTH] ;

    for( start = 0 ; start <= LENGTH - 1 ; start++ ){

        cout << "Please Enter a number for location of array , " << start << " :: " ;
        cin  >> searchbox[start] ;

//        cout << searchbox[start] << endl ;
    }

    cout << "Please Enter a number you want :: " ;
    cin  >> numb;

    // NOT SOLVED WITHOUT LOGICAL OPERATOR

//    for( start = 0 ; start < LENGTH ; start++  ){
//
//        if( numb == searchbox[start] && start < LENGTH ){
//
//                numb = searchbox[start];
//
//                cout << "The number you entered " << numb << " is at " << start << " , the location of the array . ";
//        }
//
//    }
//
//    if( numb != searchbox[start] && start >= LENGTH ){
//
//        cout << "The number you entered is out of bound ." << endl ;
//    }

    start = 0 ;

    // LOGIC ERROR


//    while( start < LENGTH ){
//
//        if( numb == searchbox[LENGTH] ){
//
//            foundplace = start ;
//
//        }else{
//
//
//            foundplace = -1 ;
//        }
//
//        start++;
//
//    }

    // TRUE LOGIC

    while( start < LENGTH && numb != searchbox[start] ){



//        cout << " the start is  " << start << endl ;

        foundplace = 0 ;

        start++;
    }

    if( numb == searchbox[start] ){

//            cout << "The number you entered " << numb << " is at " << start << " of the array." << endl ;

        foundplace =  1 ;

        cout << "The number you entered " << numb << " is found at " << start << " of the array." << endl ;

    }

    if( foundplace == 0 ){

        cout << "The number you entered " << numb << " is not found in the array box." << endl ;
    }

    cout << "The found place is " << foundplace << endl
         << "The start is "<< start << endl ;

//    if( foundplace == 1 ){
//
//        cout << "Your number is not found in the array." ;
//    }

//    switch(foundplace){
//
//        case -1 :
//            cout << "The number you entered " << numb << " is not found in the search box .";
//        break;
//
//        default :
//            cout << "The number you entered " << numb << " is found at " << foundplace << " , the location of array ." ;
//    }

//    cout << LENGTH << endl ;

    return 0;
}