#include <iostream>

using namespace std;

int main(){

    float a,b,hasil;
    char aritmatika;

    //Nilai pertama
    cout << "Masukkan Nilai Pertama : ";
    cin >> a;

    //Input Operator
    cout << "Masukkan Operator : ";
    cin >> aritmatika;


    while(aritmatika !='+', '*'){
      break;

     
    }     
          

     if(aritmatika != '+'){
      cout << "Error" << endl;
     }    


     //Syarat Operator +     
     if(aritmatika == '+', '*'){

          //Nilai kedua
          cout << "Masukkan Nilai Kedua : ";
          cin >> b;

          //Hasil
          cout << "Hasilnya adalah : ";
          cout << a << aritmatika << b;

          if (aritmatika == '+'){
            hasil = a+b;
          }

          if (aritmatika == '*'){
            hasil = a*b;
          }

          cout << " = " << hasil;
          cout << "\n \nSelesai" << endl;
     }
     
    return 0;
}