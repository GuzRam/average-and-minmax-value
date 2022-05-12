#include "input.h"

void mi6::proses(){
        bykmhs = 1;
        for (int i = 0; i <= bykmhs; i++)
        {
        cout << "Masukan Nilai UAS Mahasiswa ke - " <<i+1 << " : " ;
        cin >> uas[i];
        cout << "Masukan Nilai UTS Mahasiswa ke - " <<i+1 << " : ";
        cin >> uts[i];
        cout << "Masukan Nilai Tugas Mahasiswa ke - " <<i+1 << " : ";
        cin >> tugas[i];


        //proses
        //menghitung rata2
        sum = ( uas[i] + uts[i] + tugas[i] ) / 3;
        cout << "Nilai Rata-Ratanya Mahasiswa ke - " <<i+1  << " :  "<< sum  << endl;


        //menghitung nilai terbesar dan terkecil
        if (uas[i] >= uts[i] && uas[i] >= tugas[i]){
            cout << "Nilai Terbesar Mahasiswa ke - " <<i+1  << " : " << uas[i]; 
        }
        if (uts[i] >= uas[i] && uts[i] >= tugas[i]){
            cout << "Nilai Terbesar Mahasiswa ke - " <<i+1  << " : "<< uts[i];
        }
        if (tugas[i] >= uas[i] && tugas[i] >= uts[i]){ 
            cout << "Nilai Terbesar Mahasiswa ke - " <<i+1  << " : "<< tugas[i];
        }
        cout << endl;

        if (uas[i] <= uts[i] && uas[i] <= tugas[i]){
            cout << "Nilai Terkecil Mahasiswa ke - " <<i+1  << " : "<< uas[i]; 
        }
        if (uts[i] <= uas[i] && uts[i] <= tugas[i]){
            cout << "Nilai Terkecil Mahasiswa ke - " <<i+1  << " : "<< uts[i];
        }
        if (tugas[i] <= uas[i] && tugas[i] <= uts[i]){
            cout << "Nilai Terkecil Mahasiswa ke - " <<i+1  << " : "<< tugas[i];
        }
        cout << endl;
        }

}

