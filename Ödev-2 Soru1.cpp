#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main()
{

        // 0-20 ARASI �IFT SAYILARIN EKRANA YAZILMASI FAKAT 14 SAYISININ EKRANA YAZILMAMASI

    int s1=0;

        while(s1<=20)           // Tanimlamis oldugumuz s1 degiskeni 20 sayisindan k���k esit mi sorusu soruyoruz
    {

        if(s1==14)             // Sayinin 14 e esit mi sorusu soruyoruz.
        {
            s1++;             //Eger sayiyi bir daha arttirmazsak d�ng�y� 14 e gelmeden sonlandiriyor
            continue;        //D�ng�den �ikmasi i�in continue kullandim
        }
        else if(s1%2==0)    // Sayinin mod 2'sinin sifira esit oldugu durum sayinin �ift oldugu durumdur
        {
            cout<<s1<<" ";  //Sayiyi kullaniciya aktariyoruz
        }
        s1++;               // if d�ng�s� i�erisinde kullanmadan sayiyi birer birer arttiriyoruz
    }

    return 0;
}
