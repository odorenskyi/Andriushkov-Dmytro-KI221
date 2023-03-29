#include <iostream>
#include <clocale>
#include <cmath>
#include "ModulesAndriushkov.h"

using namespace std;


void copyright(){

    cout << endl << "       (c) ��������� ������ " << endl << endl;
}


void comparison(char a, char b){

    bool comparison = a + 1 == b + 2;
    cout << noboolalpha << "�i����i�� (a + 1 == b + 2), True == 1 False == 0: " << comparison << endl << endl;
}


void DecHexFunc( int x ,int y, int z ){

    cout << "(x) � ��������i�: " << dec << x << endl;
    cout << "(y) � ��������i�: " << dec << y << endl;
    cout << "(z) � ��������i�: " << dec << z << endl;
    cout << "(x) � �i�����������i�: " << hex << x << endl;
    cout << "(y) � �i�����������i�: " << hex << y << endl;
    cout << "(z) � �i�����������i�: " << hex << z << endl;
}

int main(){
    setlocale( LC_ALL, "ukr" );
    int x, y, z;
    char a, b;

    copyright();

    cout << "����� x: ";
    cin >> x;
    cout << "����� y: ";
    cin >> y;
    cout << "����� z: ";
    cin >> z;
    cout << endl << "����i�� ������ (a): ";
    cin >> a;
    cout << "����i�� ������ (b): ";
    cin >> b;

    cout << endl;

    comparison(a, b);
    DecHexFunc(x ,y ,z);

    cout << endl << "�i����i�� S = " << s_calculation(x, y, z) << endl;
}
