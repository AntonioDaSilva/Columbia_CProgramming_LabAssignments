#include <iostream>
#include <math.h>

using namespace std;

int quad(float a,float b,float c) {

    if (((b*b)- (4*a*c)) < 0){
    cout<<"Enter valid numbers.";
    }

    else{

        float x1,x2;
        x1=(-b-(sqrt((b*b)-(4*a*c))))/(double)(2*a);
        x2=(-b+(sqrt((b*b)-(4*a*c))))/(double)(2*a);
        cout << x1 <<endl << x2;
    }
    return 0;
}
int main(){
    float d,e,f;
    cout << "Welcome to a quadratic eqution solver. \n Enter the coefficient of x squared: ";
    cin >> d;
    cout << "\n Enter the coefficient of x: ";
    cin >> e;
    cout << "\n Enter the constant of the equation: ";
    cin >> f;
    cout << "Result: \n" << "x1 and x2 in order :\n" ;
    quad(d,e,f);
    return 0;
}
