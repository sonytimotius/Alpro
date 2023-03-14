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
//j : jumlah array
//t : total
//r : rata-rata
int main()
{
    //penjumlahan
    cout << "penjumlahan dari 10 + 5 = " <<penjumlahan(10,5) << endl;
    //pengurangan
    cout << "pengurangan dari 10 - 5 = " <<pengurangan(10,5) << endl;

    for(int i=1; i <= 5; i++){
        cout << "Masukan angka ke-" << i << ": ";
        cin >> n[i];
        //total
        t = t + n[i];
    }
    //jumlah array
    j = sizeof(n)/sizeof(n[0]);
    //rata-rata
    r = t / j;
    cout << "Total = " << t << endl;
    cout << "Rata-rata = " << r << endl;
    return 0;
}
