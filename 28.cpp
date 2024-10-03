#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include "Scanner.h"
#include "Printer.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*Scanner HP;
    cout << "Text: \n" << HP.getText()<<endl;
    cout << "------------------------------------------------\n";
    string user;
    cout << "Enter file name: ";
    cin >> user;
    HP.scanFile(user);
    cout << "Text: \n" << HP.getText() << endl;*/

    Printer::printFile("test.txt","Hello from Vitaliy",3);

    return 0;
}