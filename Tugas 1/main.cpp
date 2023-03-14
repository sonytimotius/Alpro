#include <iostream>

using namespace std;

int penjumlahan(int a, int b){
    return a + b;
}

int pengurangan(int a, int b){
    return a - b;
}

int n[5];
int j, t, r;

int main()
{
    cout << "penjumlahan dari 10 + 5 = " <<penjumlahan(10,5) << endl;
    cout << "pengurangan dari 10 - 5 = " <<pengurangan(10,5) << endl;
    for(int i=1; i <= 5; i++){
        cout << "Masukan angka ke-" << i << ": ";
        cin >> n[i];
        t = t + n[i];
    }
    j = sizeof(n)/sizeof(n[0]);
    r = t / j;
    cout << "Total = " << t << endl;
    cout << "Rata-rata = " << r << endl;
    return 0;
}
