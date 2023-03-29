#include <iostream>
#include <clocale>
#include <cmath>
#include "ModulesAndriushkov.h"

using namespace std;


void copyright(){

    cout << endl << "       (c) Андрюшков Дмитро " << endl << endl;
}


void comparison(char a, char b){

    bool comparison = a + 1 == b + 2;
    cout << noboolalpha << "Вiдповiдь (a + 1 == b + 2), True == 1 False == 0: " << comparison << endl << endl;
}


void DecHexFunc( int x ,int y, int z ){

    cout << "(x) В десятковiй: " << dec << x << endl;
    cout << "(y) В десятковiй: " << dec << y << endl;
    cout << "(z) В десятковiй: " << dec << z << endl;
    cout << "(x) В шiстнадцятковiй: " << hex << x << endl;
    cout << "(y) В шiстнадцятковiй: " << hex << y << endl;
    cout << "(z) В шiстнадцятковiй: " << hex << z << endl;
}

int main(){
    setlocale( LC_ALL, "ukr" );
    int x, y, z;
    char a, b;

    copyright();

    cout << "Число x: ";
    cin >> x;
    cout << "Число y: ";
    cin >> y;
    cout << "Число z: ";
    cin >> z;
    cout << endl << "Введiть символ (a): ";
    cin >> a;
    cout << "Введiть символ (b): ";
    cin >> b;

    cout << endl;

    comparison(a, b);
    DecHexFunc(x ,y ,z);

    cout << endl << "Вiдповiдь S = " << s_calculation(x, y, z) << endl;
}
