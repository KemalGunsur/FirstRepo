#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    double satisfiyatin;
    cout << "Lutfen satis miktarini giriniz : " << endl;
    cin >> satisfiyatin;
    // double satisfiyati=200000;
    double toplamkar = satisfiyatin * 1.0 / 4.0;
    cout << "Toplam kar : " << toplamkar << endl;
    double maliyetpayi = toplamkar * 0.40;
    cout << "Maliyet payi : " << maliyetpayi << endl;
    double kalankar = toplamkar - maliyetpayi;
    cout << "Kalan kar : " << kalankar << endl;
    double calisangorevli = kalankar * 0.30;
    cout << "Calisan gorevli payi : " << calisangorevli << endl;
    double netkar = kalankar - calisangorevli;
    cout << "net kar: " << netkar << endl;
    if (netkar > 50000)
    {
        cout << "Kariniz cok iyi" << endl;
    }
    else if (netkar > 20000 && netkar <= 50000)
    {
        cout << "Kariniz iyi" << endl;
    }
    else if (netkar > 10000 && netkar <= 20000)
    {
        cout << "Kariniz normal" << endl;
    }
    else
    {
        cout << "Kariniz dusuk" << endl;
    }
    
    return 0;
}

/*double sayi1 , sayi2 , sayi3 , sayi4 , sayi5;
cout<<"Lutfen 5 adet sayi giriniz : "<<endl;
cin>>sayi1;
cout<<"bir sayi giriniz : "<<endl;
cin>>sayi2;
cout<<"bir sayi giriniz : "<<endl;
cin>>sayi3;
cout<<"bir sayi giriniz : "<<endl;
cin>>sayi4;
cout<<"bir sayi giriniz : "<<endl;
cin>>sayi5;
double carpim = (sayi1 * sayi2 * sayi3 * sayi4 * sayi5);
// c++ sırası  ile kodları okuduğu için carpim değişkenini tanımladıktan sonra ekrana yazdırabiliriz.
cout<<"Girdiginiz sayilarin carpimi : "<<carpim<<endl;
cout<< pow(carpim , 1.0/5)<<endl;*/

/*int sayi1 , sayi2 , sayi3 , sayi4 , sayi5;
 cout<<"Lutfen 5 adet sayi giriniz : "<<endl;
 cin>>sayi1>>sayi2>>sayi3>>sayi4>>sayi5;
 cout<<"Girdiginiz sayilarin toplami : "<<sayi1+sayi2+sayi3+sayi4+sayi5<<endl;
 cout<<"Girdiginiz sayilarin ortalamasi : "<<(sayi1+sayi2+sayi3+sayi4+sayi5)/5.0<<endl;/*






/*
string isim = "Kemal";
string soyisim = "Gunsur";
string ekstra = "mrb";

cout<< isim + " " + soyisim + " " + ekstra;
int sayi1 , sayi2 , sayi3;
sayi1=10;
sayi2=20;
sayi3=30;
double dsayi1 , dsayi2 , dsayi3;
dsayi1=10.5;
dsayi2=20.5;
dsayi3=30.5; */
