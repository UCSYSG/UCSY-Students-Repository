#include<iostream>
using namespace std;

void leapyearcal(int);

void outputtext(int);

int main(){

//    cout << "Hello World" << endl ;

    int year ;

    cout << "Enter a year :: ";
    cin  >> year ;

    leapyearcal(year) ;

    return 0;
}

void leapyearcal( int getyear ){

    if( getyear % 4 == 0 ){

        if( getyear % 100 != 0 ){

            outputtext(1) ;

        }else{

            if( getyear % 400 == 0 ){

                outputtext(1) ;

            }else{

                outputtext(2) ;
            }
        }

    }else{

        outputtext( 2 );

    }

}

void outputtext( int cond ){

    if( cond == 2 ){

        cout << "This is not a leap year" << endl ;

    }else{

        cout << "This is a leap year" << endl ;
    }

}
