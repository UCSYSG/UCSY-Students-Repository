#include<iostream>
//#include<cstring>
using namespace std ;

void calculator( float num1 , float num2 , char sign ){

    float result ;

    switch(sign){

        case '+' :
            result = num1 + num2 ;
        break ;

        case '-' :
            if(num1 > num2){
                result = num1 - num2 ;
            }else{
                result = num2 - num1 ;
            }
        break ;

        case '*' :
            result = num1 * num2 ;
        break ;

        case '/' :
            result = num1 / num2 ;
        break ;
    }

    cout << "The Result value is " << result << endl << endl  ;

}

int line(int number , char type) ;
int choice(char option) ;


void workplace(){

    char choose ;

    do{

        char operation ;
        float numb1 , numb2 ;
        int begin ;
        char operators[] = {'+','-','*','/'} ;

        do{

            cout << "What operation do you want to do [ + , - , * , / ] :: ";
            cin >> operation;

            begin = 0 ;

            int length = sizeof(operators)/sizeof(operators[0]);

            while( begin < length && operation != operators[begin] ){

                begin++ ;

            }

//            cout << "The last is " << begin << endl ;
//            cout << "The result is " << operators[begin] << endl ;
//            cout << "The input is " << operation ;

            if( operation != operators[begin] ){

                cout << endl << endl << "Please Enter " ;

                for( int start = 0 ; start < length ; start++ ){

                    cout << operators[start] << " " ;

                }

                cout << endl << endl ;
            }


        }while( operation != operators[begin] );

        cout << "Enter First Number :: " ;
        cin  >> numb1 ;

        cout << "Enter Second Number :: " ;
        cin  >> numb2 ;

        calculator(numb1,numb2,operation) ;

        line(50,'=') ;

        choose = 0 ;

        while( choose != 'y' && choose != 'n' ){

            cout << "Do You Want To Run Again :: " ;
            cin  >> choose ;

            cout << endl  ;

            choice(choose);

        }



        line(50,'=') ;

    }while( choose == 'y') ;

}



int main(){

    workplace() ;

    return 0 ;
}


int line( int number , char type ){


    for( int start = 0 ; start <= number ; start++ ){

        cout << type ;

    }

    cout << endl << endl ;
    return 0 ;
}

int choice( char option ){

    if( option == 'y' ){

        cout << "OK , we will run again this program..." << endl << endl ;

    }else if( option == 'n' ){

        cout << "Thank for using program...Exit the program...Have A Good Day" << endl << endl ;

    }else{

        cout << "Please Enter [ y or n ] " << endl << endl ;

    }

}


