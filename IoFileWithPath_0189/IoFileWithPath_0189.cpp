#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // untuk menyimpan data berbentuk string
    string baris;
    string NamaFile;

    cout << "Masukan nama file : ";
    cin >> NamaFile;

    /// membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk kesebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup fileny
    outfile.close();

}