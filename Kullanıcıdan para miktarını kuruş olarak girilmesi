#include <iostream>

using namespace std;

int main()
{
    int kurus;                                         // Baslangicta para miktari icin int aldık.
    float kurus1,kurus5,kurus10,kurus25,kurus50,tl1;  // Ondalikli sayilar icin float veri tipini sectim.
    cout<<"Para miktarinizi kurus olarak giriniz:";  // Kullanicidan Para miktarini kurus olarak istiyoruz.
    cin>>kurus;                                     // Kullanicinin girmesi icin int veri tipinde tanimladigim degeri istiyoruz.

    tl1=kurus/100;                                 // 100 Kurus= 1Tl esit oldugu icin kurus degerini 100 sayisina boluyoruz.
    kurus=kurus-(100*tl1);                        // Bastaki kurus degerinden tl degerini cikartiyoruz.
    kurus50=kurus/50;
    kurus=kurus-(kurus50*50);
    kurus25=kurus/25;
    kurus=kurus-(kurus25*25);
    kurus10=kurus/10;
    kurus=kurus-(kurus10*10);
    kurus5=kurus/5;
    kurus=kurus-(kurus5*5);
    kurus1=kurus/1;
    kurus=kurus-(kurus1*1);                    // Yukaridaki asamalari bastaki anlattigim sekilde devam ediyor.

    cout<<tl1<<" Adet 1 TL\n";                 // Burada kullanicinin gormesi icin ekrana yazilan kisim
    cout<<kurus50<<" Adet 50Krs\n";
    cout<<kurus25<<" Adet 25Krs\n";
    cout<<kurus10<<" Adet 10Krs\n";
    cout<<kurus5<<" Adet 5Krs\n";
    cout<<kurus1<<" Adet 1Krs";             
    return 0;
}
