#include <iostream>

using namespace std;
using std::cin;

double abs(double c){
if(c<0){
    c= -1*c;
}
return c;
}

double power(int exponent, double val){
double acc = 1;
// ist exponent negativ?
    if(exponent < 0){
    acc = 1/ (power(-1*exponent, val));
    }
    else {
        while (exponent>0){
            acc = acc * val;
            exponent --;
        }
}
return acc;
}
//double wurzel (double a){
//    double x;
//    double y;
//    x =1;
//    double betrag;
//    double abbruch = power (-7,10);
//    while(abs(x-y)>=abbruch){
//                x=y;
//                y = ((x+a/x)/2);
//
//    }
//    cout  << "wurzel von "<< a << " ist " << x;
//    }

    double wurzelInOut(){
    double in;
    cin >>in;

    double x;
    double y;
    string punkte="";
    x =1;
    y = ((x+in/x)/2);
    while(abs(x-y)>(power (-7,10) )){
                x=y;
                y = ((x+in/x)/2);
            punkte +=".";
            cout  << "Berechne "<< punkte << endl;
    }
    cout << "Ergebnis ist: " << x << endl;
    return x;
    }


int main()
{
wurzelInOut();





    return 0;
}
