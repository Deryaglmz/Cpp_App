#include <iostream>
using namespace std;

class ogrenci {
public:
    int ogrNo;
    string adSoyad;
    int sinif;

    void goster() {
        cout << ogrNo << " " << adSoyad << " " << sinif << endl;
    }
};

int main() {
    ogrenci ogr1;
    ogr1.ogrNo = 101;
    ogr1.adSoyad = "Berat";
    ogr1.sinif = 2;
    ogr1.goster();
    return 0;
}

//
class nokta {
public:
    int a, b;

    void ata(int x, int y) {
        a = x;
        b = y;
    }

    void goster() {
        cout << a << " " << b << endl;
    }

    void arttir(int x, int y) {
        a = a + 3;
        b = b + 3;
    }
};
int main() {
    nokta n1, n2;
    n1.ata(10, 20);
    n1.goster();
    n1.arttir(2,3);
    n1.goster();
    return 0;
}

//
class ogrenci {
 private:
    int ogrNo;
    string adSoyad;
    int sinif;

 public:
    void ata(int no) {
        if (no < 0)
            cout << "hatalı giriş" << endl;
        else
            ogrNo = no;
    }

    void goster() {
        cout << ogrNo << " " << adSoyad << " " << sinif << endl;
    }
};

int main() {
    ogrenci ogr1;
    //ogr1.ogrNo = 101;
    //ogr1.adSoyad = "Berat";
    //ogr1.sinif = 2;

    ogr1.ata(-101);
    ogr1.goster();
    return 0;
}


//
class ogrenci {
private:
    int ogrNo;
    string adSoyad;
    int sinif;

public:
    void ata(int no, string gelenAd, int gelenSinif) {
        if (no < 0){
            cout << "hatalı giriş" << endl;
            ogrNo = 111111;
        }
        else
        ogrNo = no;
        adSoyad = gelenAd;
        sinif = gelenSinif;
    }

    void goster() {
        cout << ogrNo << " " << adSoyad << " " << sinif << endl;
    }
};

int main() {
    ogrenci ogr1;
    //ogr1.ogrNo = 101;
    //ogr1.adSoyad = "Berat";
    //ogr1.sinif = 2;

    ogr1.ata(-101, "Berat", 2);
    ogr1.goster();
    return 0;
}


//
class ogrenci {
private:
    int ogrNo;
    string adSoyad;
    int sinif;

public:
    void ata(int no, string gelenAd, int gelenSinif) {
        if (no < 0) {
            cout << "hatalı giriş" << endl;
            ogrNo = 111111;
        }
        else
            ogrNo = no;
            adSoyad = gelenAd;

        if (gelenSinif < 0 || gelenSinif > 5)
            sinif = 11111;
        else
            sinif = gelenSinif;
    }

    void goster() {
        cout << ogrNo << " " << adSoyad << " " << sinif << endl;
    }
};

int main() {
    ogrenci ogr1, ogr2;
    //ogr1.ogrNo = 101;
    //ogr1.adSoyad = "Berat";
    //ogr1.sinif = 2;

    ogr1.ata(-101, "Berat", 2);
    ogr1.goster();
    ogr2.ata(1, "kaan", 5);
    ogr2.goster();
    return 0;
}


//alan hesabı
class oda {
private:
    int en, boy, yükseklik;
    int alan, hacim;

public:
    void alanHesapla(int a, int b) {
        if (a <= 0 || b <= 0)
            cout << "hatali giris" << endl;
        else {
            en = a;
            boy = b;
            alan = en * boy;
        }
    }

    void goster() {
        cout << "alan = " << alan << endl;
    }
};

int main() {
    oda salon, mutfak, kiler;
    salon.alanHesapla(4, 6);
    salon.goster();
    return 0;
}

//
class oda {
private:
    int en, boy, yükseklik;
    int alan, hacim;

public:
    void alanHesapla(int a, int b) {
        if (a <= 0 || b <= 0)
            cout << "hatali giris" << endl;
        else {
            en = a;
            boy = b;
            alan = en * boy;
        }
    }

    void hacimHesapla(int e, int b, int y) {
        if (e <= 0 || b <= 0 || y <= 0)
            cout << "hatalı giriş" << endl;
        else {
            en = e; boy = b; yükseklik = y;
            hacim = en * boy * yükseklik;
        }
    }

    void goster() {
        cout << "alan = " << alan << "hacim = " << hacim<< endl;
    }
};

int main() {
    oda salon, mutfak, kiler;
    salon.alanHesapla(4, 6);        
    salon.hacimHesapla(4, 6, 3);
    salon.goster();
    mutfak.alanHesapla(3, 4);
    mutfak.hacimHesapla(3, 4, 5);
    mutfak.goster();
    return 0;
}


//
class oda {
private:
    int en, boy, yükseklik;
    int alan, hacim;

public:
    void alanHesapla(int a, int b) {
        if (a <= 0 || b <= 0)
            cout << "hatali giris" << endl;
        else {
            en = a;
            boy = b;
            alan = en * boy;
        }
    }

    void hacimHesapla(int e, int b, int y) {
        if (e <= 0 || b <= 0 || y <= 0)
            cout << "hatalı giriş" << endl;
        else {
            en = e; boy = b; yükseklik = y;
            hacim = en * boy * yükseklik;
        }
    }

    void hesapla(int e, int b, int y) {
        en = e; boy = b; yükseklik = y;
        alan = en * boy;
        hacim = en * boy * yükseklik;
    }

    void goster() {
        cout << "alan = " << alan << endl << "hacim = " << hacim << endl;
    }
};

int main() {
    oda salon, mutfak, kiler;
    kiler.hesapla(3, 4, 5);
    kiler.goster();
    return 0;
}


//
class oda {
private:
    int en, boy, yükseklik;
    int alan, hacim;

public:
    void alanHesapla(int a, int b) {
        if (a <= 0 || b <= 0)
            cout << "hatali giris" << endl;
        else {
            en = a;
            boy = b;
            alan = en * boy;
        }
    }

    void hacimHesapla(int e, int b, int y) {
        if (e <= 0 || b <= 0 || y <= 0)
            cout << "hatalı giriş" << endl;
        else {
            en = e; boy = b; yükseklik = y;
            hacim = en * boy * yükseklik;
        }
    }

    void hesapla(int e, int b, int y) {
        en = e; boy = b; yükseklik = y;
        alan = en * boy;
        hacim = en * boy * yükseklik;
    }

    void goster() {
        cout << "alan = " << alan << endl << "hacim = " << hacim << endl;
    }
};

int main() {
    oda salon, mutfak, kiler;

    int en, boy, yukseklik;
    cout << "en degeri gir: ";
    cin >> en;
    cout << "boy degeri gir: ";
    cin >> boy;
    cout << "yukseklik degeri gir: ";
    cin >> yukseklik;

    salon.hesapla(en, boy, yukseklik);
    salon.goster();
    return 0;
}