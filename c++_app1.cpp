
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!";
    return 0;
}

//
//veri alamayan ve veri geri döndürmeyen fonksiyon
void yazdir() {
    cout << "merhaba dunya" << endl;
}
int main() {
    yazdir();
    return 0;
}

//veri alan fakat geriye veri döndürmeyen fonksiyon
void noyazdir(int no) {
    cout << "ana programdan gelen deger:" << no << endl;
}

int main() {
    yazdir();
    int n = 16;
    noyazdir(n);
    return 0;
}

//birden fazla veri alan ve geriye veri döndürmeyen fonksiyon
void topla(int a, int b, int c) {
    cout << "toplam:" << a + b + c << endl;
}

int main()
{
    topla(1, 2, 3);
    return 0;
}

//veri alan ve geriye veri döndüren
//* veri alacaksa önce tipini yazmam lazım , int olduğu için return yaptım

int cikar(int x, int y) {
    return x - y;
}

int main() {
    //cout << cikar(6, 3);

    int gelen = cikar(6, 3);
    cout << gelen;
    return 0;
}


//birden fazla veri alan ve geriye veri döndüren fonksiyon
int topla(int a, int b, int c) {
    int toplam = a + b + c;
    return toplam;
}

int main() {
    cout << topla(2, 3, 6);
    return 0;
}

//işaretçi
int main() {
    int a = 5;
    cout << a << endl;  //sayının kendisini verir
    cout << &a << endl; // a nın  bellek adresini verir
    return 0;
}

int main() {
    int a = 5;
    int* ptr;  //int* ptr;: Bir işaretçi (pointer) olan ptr oluşturuluyor.
    //Bu işaretçi, bir tamsayı değişkeninin bellek adresini saklamak için kullanılacak.
    ptr = &a;  //ptr = &a;: ptr, a değişkeninin bellek adresini tutacak şekilde ayarlanıyor.
    cout << "a adresi:" << &a << endl; // "a adresi:" << &a <<: a değişkeninin bellek adresi ekrana yazdırılıyor
    cout << "a adresi:" << ptr << endl;//<< "a adresi:"<< ptr <<: ptr işaretçisinin içinde saklanan bellek adresi ekrana yazdırılıyor.
    // a değişkeninin bellek adresi 
    cout << "a degeri:" << *ptr << endl; //<< "a degeri:" << *ptr << ptr işaretçisi aracılığıyla a değişkeninin değeri ekrana yazdırılıyor.
    //*ptr ifadesi, ptr işaretçisinin işaret ettiği bellek adresindeki değeri ifade eder.

    *ptr = *ptr + 1;  // anın değeri 1 artar
    cout << "a degeri:" << a << endl;

    ptr = ptr + 1;  // bellek adresi 4 artar cünkü int 4 byte
    cout << ptr << endl;

    ptr = ptr + 1;  // adres içindeki değer
    cout << "adres içindeki değer" << ptr << endl;
    return 0;
}

//
void degistir(int a, int b) {
    int temp;  //temp: a ve b yer değiştirir
    temp = a;
    a = b;
    b = temp;
    cout << "fonksiyon ici" << endl;  //a = 10 , b = 5
    cout << "a:" << a << "b:" << b << endl;
}

int main() {
    int a = 5, int b = 10;
    degistir(a, b);
    cout << "ana program" << endl;  //a = 5 , b = 10
    cout << "a:" << a << "b:" << b << endl;
    return 0;
}


//
void degistir(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a, b;
}

int main() {
    int a = 5, b = 10;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "ana program" << endl;  //a = 5 , b = 10
    cout << "a:" << a << "b:" << b << endl;
    return 0;   //tek değer döndürür
}

//
void degistir(int *a, int *b) {  // call by referance (referans alabilen fonk)
    int *temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
    return *a,*b;
}

int main() {
    int a = 5, b = 10;
    degistir(&a, &b);  //adresler üzerinden işlem yapar
    cout << "ana program" << endl;  // a = 10 , b=5
    cout << "a:" << a << "b:" << b << endl;
    return 0;  
}

//
int fonk(int a, int b) {
    return a + b;
}

int main() {
    int a = 10, b = 20;
    int toplam;
    toplam = fonk(a, b);
    cout << "toplam:" << toplam << endl;
    return 0;
}
// aynısı
int fonk(int *a, int *b) {
    return *a + *b;
}

int main() {
    int a = 10, b = 20;
    int toplam;
    toplam = fonk(&a ,&b);
    cout << "toplam:" << toplam << endl;
    return 0;
}
//toplam:30

//fark

int fonk(int* a, int* b , int *f) {
    *f = *a - *b;
    return *a + *b;
}

int main() {
    int a = 10, b = 20;
    int toplam, fark;
    toplam = fonk(&a, &b, &fark);
    cout << "toplam:" << toplam << endl;
    cout << "fark:" << fark << endl;
    return 0;
}

//
int fonk(int* a, int* b, int *t, int* f) {
    *f = *a - *b;
    *t= *a + *b;
}

int main() {
    int a = 10, b = 20;
    int toplam, fark;
    fonk(&a, &b, &toplam, &fark);
    cout << "toplam:" << toplam << endl;
    cout << "fark:" << fark << endl;
    return 0;
}


//
class nokta {
public:
    int a, b;

    void goster() {
        cout << a << " " << b << endl;
    }

    void arttir() {
        a = a + 3;
        b = b + 3;
    }
};
int main() {
    nokta n1, n2, n3;
    n1.a = 10;
    n2.b = 20;
    n1.goster();
    n1.arttir();
    n1.goster();
    return 0;
}
//10 0
//13 3


//
class nokta {
public:
    int a, b;

    void goster() {
        cout << a << " " << b << endl;
    }

    void arttir(int x, int y) {
        a = x;
        b = y;
        a = a + 3;
        b = b + 3;
    }
};

int main() {
    nokta n1, n2, n3;
    n1.a = 10;
    n2.b = 20;
    n1.goster();
    n1.arttir(n1.a, n1.b);
    n1.goster();
    return 0;
}
//10 0
//13 3