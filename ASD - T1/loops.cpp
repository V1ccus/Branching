#include <iostream>
using namespace std;
/*
 * Hosea Nicolas ANPP | 672021159
*/


int main(){
    //...
    int x,op;
    //...
    do {
        cout
                << "[ PROGRAM LOOPS ]\n"
                << "...\n"
                << "(3, 4, 5, 10)\n"
                << "Masukkan pilihan : ";
        cin >> x;
        //...
        system("cls");
        if (x == 3) {
            op = x * 2;
            cout << op;break;
        } else if (x == 4) {
            op = (x * 2) + 2;
            cout << op;break;
        } else if (x == 5) {
            op = x * 3;
            cout << op;break;
        } else if (x == 10) {
            op = (x * 5) + 5;
            cout << op;break;
        } else {
            cout << "Input salah!\n";
            system("pause");
            system("cls");
        }
    }while (x != 0);}
