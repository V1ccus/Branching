#include <iostream>
using namespace std;
/*
 * Hosea Nicolas ANPP | 672021159
*/

int main(){
    //...
    int o;
    float IDR,n;
    //...
    menu :
    do{
        cout
                << "[ CONVERSION ]\n"
                << "...\n"
                << "[1] IDR - BTC\n"
                << "[2] IDR - ETH\n"
                << "[3] IDR - USDT\n"
                << "option : ";cin >> o;
        //...
        system("cls");
        switch(o){
            case 1 :
                cout
                        << "\n( Rupiah - Bitcoin )\n"
                        << "...\n"
                        << "masukkan (IDR) : ";cin >> IDR;
                //...
                system("cls");
                n = 547974483/IDR;
                cout
                        << "Bitcoin, BTC\n"
                        << n <<endl;
                exit(0);
            case 2 :
                cout
                        << "\n( Rupiah - Ethereum )\n"
                        << "...\n"
                        << "masukkan (IDR) : ";cin >> IDR;
                //...
                n = 37897476/IDR;
                system("cls");
                cout
                        << "Ethereum, ETH\n"
                        << n <<endl;
                exit(0);
            case 3 :
                cout
                        << "\n( Rupiah - Tether )\n"
                        << "...\n"
                        << "masukkan (IDR) : ";cin >> IDR;
                //...
                n = 14342/IDR;
                system("cls");
                cout
                        << "Tether, USDT\n"
                        << n <<endl;
                exit(0);
            default :
                cout << "Kesalahan input!\n";
                system("pause");
                system("cls");}
    }
    while(o!=0);
    while(o==0){goto menu;}
}
