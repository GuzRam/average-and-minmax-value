#include "proses.h"

void mi6::output(){
  cout << "=============== OUTPUT===============\n";
  cout << "nama dosen : " << nama << endl;
  cout << "nama matkul : "<< matkul << endl;
  cout << "jumlah mahasiswa : " << bykmhs << endl;
  cout << "daftar nilai : ";
  for (int i=0;i <= bykmhs; i++){
      cout << uas[i] << endl;
      cout << uts[i] << endl;
      cout << tugas[i] << endl;
      cout << "nilai tertinggi : \n";
    if (uas[i] >= uts[i] && uas[i] >= tugas[i]){
      cout << uas[i]; 
    }
    if (uts[i] >= uas[i] && uts[i] >= tugas[i]){
        cout << uts[i];
    }
    if (tugas[i] >= uas[i] && tugas[i] >= uts[i]){ 
        cout << tugas[i];
    }
    cout << endl;
    cout << "nilai terendah ";
     if (uas[i] <= uts[i] && uas[i] <= tugas[i]){
            cout<< uas[i]; 
        }
    if (uts[i] <= uas[i] && uts[i] <= tugas[i]){
            cout<< uts[i];
        }
    if (tugas[i] <= uas[i] && tugas[i] <= uts[i]){
            cout<< tugas[i];
        }
        cout <<  endl;
   }
      cout << "nilai rata - rata : " << sum;
}