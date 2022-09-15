#include<iostream>
#include<string>
using namespace std;

string output(){

    string text = "Hello World" ;

    return text ;
}

int main(){

//    cout << "Hello World" << endl ;

    string texting ;

    texting = output() ;

    cout << "The result is " << texting << endl ;

    return 0;
}