#include <iostream>
using namespace std;

int makanan(int menu) {
    int total_makan;
    switch (menu) {
        case 1: total_makan = 2500; break;
        case 2: total_makan = 2000; break;
        case 3: total_makan = 1500; break;
        default: total_makan = 0;
    }
    return total_makan;
}

int main() {
    int menu;
    cout << "===================================\n";
    cout << "|GEROBAK FRIED CHICKEN            |\n"; 
    cout << "|==================================\n";
    cout << "|1. Dada                          |\n";
    cout << "|2. Paha                          |\n";
    cout << "|3. sayap                         |\n";
    cout <<"====================================\n";
    cout << "Pilih Menu (1/2/3):";
    cin>> menu;
    

    int total_porsi = makanan(menu) ;
    if (total_porsi > 0) {
        cout << "Berapa Porsi: ";
        cin >> total_porsi;
    }

    cout << "Total Pembayaran: Rp. " << total_porsi *1000 << endl;

    return 0;
}
