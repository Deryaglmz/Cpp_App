
//İnheritance - Kalıtım - Miras
//bazı sınıfların özelliklerinin başka sınıflar tarafından kullanılması , sınıflar arasında yapılır, tekrarları engellemek için
//miras alınan sınıf : ana sınıf , temel sınıf , üst sınıf
//miras alan : alt sınıf, türetilmiş sınıf


#include <iostream>
using namespace std;

class Sekil {  //ortak sınıf, diğer classlar özelliklerini burdan alıcak
public:
    string adi;
    int kenarSayisi;
};

class Kare {
public:
    string adi;
    int kenarSayisi;
};

class Ucgen {
public:
    string adi;
    int kenarSayisi;
};
class Besgen {
public:
    string adi;
    int kenarSayisi;
};
// yukarıdaki gibi yazmak yerine kalıtım kullanarak

class Kare : public Sekil {
public:
   
};

class Ucgen: public Sekil {
public:
    
};
class Besgen : public Sekil {
public:
    
};

int main()
{
    Kare K1;
    K1.adi = "Kare";
    K1.kenarSayisi = 4;
    Ucgen U1;
    U1.adi = "Ucgen";
    return 0;
}

//protected : alt sınıflardan ulaşılabilen fakat mainden ulaşılamayan ifadeler

#include <iostream>
using namespace std;

class Sekil {  //ortak sınıf, diğer classlar özelliklerini burdan alıcak
    protected:   //private: doğrudan erişimi engelledik, privateden kalıtım alınmaz(erişilmez)
      string adi;
      int kenarSayisi;
    public:
      void goster() {
          cout << " Sekil adi: " << adi << " Kenar Sayisi: " << kenarSayisi << endl;
       }
    public:

      void atama(string gelenAd, int gelenSayi) {
          adi = gelenAd;
          kenarSayisi = gelenSayi;
       }

      void cevreGoster(int uzunluk) {
          cout << "Cevre: " << kenarSayisi * uzunluk << endl;
      }
};
class Kare : public Sekil {
public:
    Kare() {
        atama("Kare", 4);
    }
   
};

class Ucgen : public Sekil {
public:
    Ucgen() {
        atama("Ucgen", 3);
    }
};

class Besgen : public Sekil {
public:
    Besgen() {
        atama("Besgen", 5);
    }
};

int main(){

  Kare K1;
   //K1.atama("Kare", 4);  //protected olduğu için böyle kullanıyoruz
  K1.goster();
  K1.cevreGoster(7); //karenin uzunluğuna yedi dedim 

  Ucgen U1;
  U1.goster();
  U1.cevreGoster(9);

  Besgen B1;
  B1.goster();

  return 0;
  }


//
#include<iostream>
using namespace std;

class Insan {
private:
    string ad;
    string bolum;
    int TC;
public:
    void atama(string gAd, string gBolum, int gTC) {
        if (gTC > 0) {
            ad = gAd;
            bolum = gBolum;
            TC = gTC;
        }
        else
            cout << "TC numarasi hatali!" << endl;
    }

    void goster() {
        cout << "Ad: " << ad << " Bolum: " << bolum << " TC: " << TC;
    }
};

class Ogretmen : public Insan {
private:
    int kurumID;
    int maas;
public:
    Ogretmen(string gAd, string gBolum, int gTC, int gID, int gmaas) {
        atama(gAd, gBolum, gTC);
        kurumID = gID; maas = gmaas;
        goster();
        cout << " Kurum ID: " << kurumID << " Maas: " << maas << endl;
    }
};

class Ogrenci : public Insan {
private:
    int ogrNo;
public:
    Ogrenci(string gAd, string gBolum, int gTC, int gNo) {
        atama(gAd, gBolum, gTC);
        ogrNo = gNo;
        goster();
        cout << " Ogrenci No: " << ogrNo << endl;
    }
};

class Personel : public Insan {
private:
    int perID;
    int maas;
public:
    Personel(string gAd, string gBolum, int gTC, int gID, int gmaas) {
        atama(gAd, gBolum, gTC);
        perID = gID; maas = gmaas;
        goster();
        cout << " Prsonel ID: " << perID << " Maas: " << maas << endl;
    }
};

int main() {
    Ogretmen O1("Adem", "Bilgisayar", -5, 1001, 5000);
    Ogrenci Ogr1("Berat", "Bilgisayar", -5, 345);
    Personel P1("Ali", "Peyzaj", -5, 100, 1500);
    //Ogretmen o2.ad = "ali";  //ad'a erişemem çünkü protected
    return 0;
}


//
#include<iostream>
using namespace std;

class Cokgen {  //cokgen : protected olduğu için mainde hiçbişeyine ulaşamam
protected:
    int en, boy;
    void atama(int gEn, int gBoy) {
        en = gEn; boy = gBoy;
    }
};

class Kare : public Cokgen {
public:
    Kare(int gEn, int gBoy) {
        atama(gEn, gBoy);
    }

    void alanHesap() {
        cout << "Kare Alan: " << en * boy << endl;
    }
};

class Ucgen : public Cokgen {
public:
    Ucgen(int gEn, int gBoy) {
        atama(gEn, gBoy);
    }
    void alanHesap() {
        cout << "Ucgen Alan: " << en * boy / 2 << endl;
    }
};

class Dikdortgen : public Cokgen {
public:
    Dikdortgen(int gEn, int gBoy) {
        atama(gEn, gBoy);
    }
    void alanHesap() {
        cout << "Dikdortgen Alan: " << en * boy << endl;
    }
};

int main() {
    Kare K1(5, 5);
    K1.alanHesap();

    Ucgen U1(6, 4);
    U1.alanHesap();

    Dikdortgen D1(4, 5);
    D1.alanHesap();

    return 0;
}

//
#include<iostream>
using namespace std;
// Metot Overloading
void tip(int veri) {
    cout << "Verinin tipi Integer: " << veri << endl;
}
void tip(double veri) {
    cout << "Verinin tipi Float: " << veri << endl;
}
void tip(string veri) {
    cout << "Verinin tipi String: " << veri << endl;
}

int main() {
    tip(5);
    tip(5.7);
    tip("Bilgisayar");
    return 0;
}

//
#include<iostream>
using namespace std;
// Yapıcı (Kurucu) Overloading
class Tip {
public:
    Tip() {
        cout << "Veri girisi yok" << endl;
    }
    Tip(int veri) {
        cout << "Veri Integer: " << veri << endl;
    }
    Tip(double veri) {
        cout << "Veri Float: " << veri << endl;
    }
    Tip(string veri) {
        cout << "Veri String: " << veri << endl;
    }
};

int main() {
    Tip T1;
    Tip T2(10), T3(4.8), T4("Bilgisayar");
    return 0;
}

//
#include<iostream>
using namespace std;
// Operator Overloading
class Veri {
public:
    int deger, sayi;
    void yazdir() {
        cout << deger << endl;
    }
};
Veri operator+(Veri B1, Veri B2) {
    Veri B3;
    B3.deger = B1.deger + B2.deger;
    return B3;
}
int main() {
    Veri V1, V2, V3;
    V1.deger = 11; V2.deger = 22;
    V3 = V1 + V2;
    V3.yazdir();
    return 0;
}

//
#include<iostream>
using namespace std;
// Operator Overloading
class Veri {
public:
    int deger, sayi;
    void yazdir() {
        cout << deger << endl;
    }
    Veri operator+(Veri B) {
        Veri B3;
        B3.deger = deger + B.deger;
        return B3;
    }
};
int main() {
    Veri V1, V2, V3;
    V1.deger = 11; V2.deger = 22;
    V3 = V1 + V2;
    V3.yazdir();
    return 0;
}

//
#include<iostream>
using namespace std;
// Operator Overloading
class Kompleks {
public:
    int reel, sanal;
    void goster() {
        if (sanal >= 0)
            cout << reel << "+" << sanal << "i" << endl;
        else
            cout << reel << sanal << "i" << endl;
    }
};
Kompleks operator>>(Kompleks C1, Kompleks C2) {
    Kompleks C3;
    C3.reel = C1.reel + C2.reel;
    C3.sanal = C1.sanal + C2.sanal;
    return C3;
}
Kompleks operator-(Kompleks C1, Kompleks C2) {
    Kompleks C3;
    C3.reel = C1.reel - C2.reel;
    C3.sanal = C1.sanal - C2.sanal;
    return C3;
}


int main() {
    Kompleks K1, K2, K3, K4;
    K1.reel = 5; K1.sanal = -7;
    K2.reel = 2; K2.sanal = 8;
    K3 = K1 >> K2;
    K4 = K1 - K2;
    K1.goster();
    K2.goster();
    K3.goster();
    K4.goster();
    return 0;
}