#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Deklarasi vector untuk menyimpan data
    vector<string> data;

    // Membuka file text.txt
    ifstream file("bacaAku.txt");

    // Cek apakah file berhasil dibuka
    if (!file.is_open()) {
        cout << "bacaAku.txt" << endl;
        return 1;
    }

    // Membaca file baris per baris
    string line;
    while (getline(file, line)) {
        data.push_back(line);
    }

    // Menutup file
    file.close();

    // Menampilkan isi vector
    cout << "Isi file text.txt:" << endl;
    cout << "==================" << endl;

    for (int i = 0; i < data.size(); i++) {
        cout  << (i + 1) << ": " << data[i] << endl;
    }

    cout << "\nTotal baris: " << data.size() << endl;

    return 0;
}