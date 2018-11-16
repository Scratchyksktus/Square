#include <QCoreApplication>
#include "fun.h"
#include <iostream>


using namespace std;



int main(){

    int n;
    cout << "Vvedite col-vo elementov massiva ";
    cin >> n;
    float sum = 0;
    srand(time(0));
    for (int i = 0; i < n; i++){
        Square C[n];
        C[i].set_w(1 + rand()%10 );
        float A1 = C[i].area();
        sum = sum + A1;
        cout << A1 << endl;
    }
    cout << sum << endl;
    system("pause");

//    Square S1(12);
//    float A1 = S1.area();
//    float P1 = S1.perimeter();

//    cout << A1 << endl;
//    cout << P1 << endl;

//    Square S2;
//    S2.set_w(0.8);

//    cout << S2.perimeter() << endl;

//    system("pause");

}
