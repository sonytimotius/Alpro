#include <iostream>

using namespace std;

struct BangunDatar {
    double panjang;
    double lebar;
    double r;

    double luasPersegiPanjang() {
        return panjang * lebar;
    }

    double luasLingkaran() {
        return 22.0 / 7.0 * r * r;
    }
};

struct BangunRuang {
    double phi;
    double r;
    double t;

    double volumeKerucut() {
        return 1.0 / 3.0 * phi * r * r * t;
    }

    double volumeBola() {
        return 4.0 / 3.0 * phi * r * r * r;
    }
};

int main() {
    BangunDatar persegiPanjang;
    cout << "Masukan Panjang : ";
    cin >> persegiPanjang.panjang;
    cout << "Masukan Lebar : ";
    cin >> persegiPanjang.lebar;
    double luasPP = persegiPanjang.luasPersegiPanjang();
    cout << "Luas persegi panjang: " << luasPP << endl;

    BangunDatar lingkaran;
    cout << "\nMasukan r : ";
    cin >> lingkaran.r;
    double luasL = lingkaran.luasLingkaran();
    cout << "Luas lingkaran: " << luasL << endl;

    BangunRuang kerucut;
    cout << "\nMasukan r : ";
    cin >> kerucut.r;
    cout << "Masukkan Tinggi : ";
    cin >> kerucut.t;
    kerucut.phi = 22.0 / 7.0;
    double volumeK = kerucut.volumeKerucut();
    cout << "Volume kerucut: " << volumeK << endl;

    BangunRuang bola;
    cout << "\nMasukan r : ";
    cin >> bola.r;
    bola.phi = 22.0 / 7.0;
    double volumeB = bola.volumeBola();
    cout << "Volume bola: " << volumeB << endl;

    return 0;
}
