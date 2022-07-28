#include<iostream>
#include<cmath>

using namespace std ;
//
//float circlearea( float = 2 ) ; // declaration circle area function with default parameter



float circlearea( float radius ){

    float PI = 3.142 ;

    float squaredradius = pow( radius , 2 ) ;

    float areaofcircle = PI * squaredradius ;

//    cout << "The area of circle is " << areaofcircle << endl ;

    return areaofcircle ;

}; // defining circle area function with default parameter ;

float returnvalueofcirclearea( float radii = 2 ){

    cout << circlearea(radii) << endl  << endl ;
}

int main(){

    returnvalueofcirclearea() ; // without argument

    returnvalueofcirclearea(4.0) ; // with argument

}