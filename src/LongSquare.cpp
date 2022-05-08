#include "include\LongSquare.hpp"
#include <iostream>

void PersegiPanjang::print(){

        std::cout << "\nTitik tengah X    : \n" << (this->xmax - this->xmin)/2 + this->xmin;
        std::cout << "\nTitik tengah Y    : \n" << (this->ymax - this->ymin)/2 + this->ymin;
        std::cout << "\nPanjang X         : \n" << this->xmax - this->xmin;
        std::cout << "\nPanjang Y         : \n" << this->ymax - this->ymin;
        std::cout << "\nNilai xmax        : \n" << this->xmax;
        std::cout << "\nNilai xmin        : \n" << this->xmin;
        std::cout << "\nNilai ymax        : \n" << this->ymax;
        std::cout << "\nNilai ymin        : \n" << this->ymin;
        std::cout << "\n\n";
}

PersegiPanjang::PersegiPanjang(float tengahx, float tengahy, float panjangx, float panjangy){
    this->xmin = tengahx - (panjangx/2);
    this->xmax = tengahx + (panjangx/2);
    this->ymin = tengahy - (panjangy/2);
    this->ymax = tengahy + (panjangy/2);
}

bool PersegiPanjang::operator== (PersegiPanjang Persegi2){
    if(this->xmax > Persegi2.xmin && this->xmin < Persegi2.xmax && this->ymax > Persegi2.ymin && this->ymin < Persegi2.ymax){return 1;}
    else{return 0;}
}

PersegiPanjang PersegiPanjang::operator+ (PersegiPanjang Persegi2){
    
    if(*this == Persegi2){
    PersegiPanjang Hasil (0,0,0,0);
    if (this->xmax > Persegi2.xmax){
        Hasil.xmax = this->xmax;
    }
    else{Hasil.xmax = Persegi2.xmax;}

    if (this->xmin < Persegi2.xmin){
        Hasil.xmin = this->xmin;
    }
    else{Hasil.xmin = Persegi2.xmin;}

    if (this->ymax > Persegi2.ymax){
        Hasil.ymax = this->ymax;
    }
    else{Hasil.ymax = Persegi2.ymax;}

    if (this->ymin < Persegi2.ymin){
        Hasil.ymin = this->ymin;
    }
    else{Hasil.ymin = Persegi2.ymin;}

    return Hasil;
    }
    else {std::cout << "Tidak Beririsan";}
}

PersegiPanjang PersegiPanjang::operator- (PersegiPanjang Persegi2){
    
    if(*this == Persegi2){
    PersegiPanjang Hasil (0,0,0,0);
    if (this->xmax < Persegi2.xmax){
        Hasil.xmax = this->xmax;
    }
    else{Hasil.xmax = Persegi2.xmax;}

    if (this->xmin > Persegi2.xmin){
        Hasil.xmin = this->xmin;
    }
    else{Hasil.xmin = Persegi2.xmin;}

    if (this->ymax < Persegi2.ymax){
        Hasil.ymax = this->ymax;
    }
    else{Hasil.ymax = Persegi2.ymax;}

    if (this->ymin > Persegi2.ymin){
        Hasil.ymin = this->ymin;
    }
    else{Hasil.ymin = Persegi2.ymin;}

    return Hasil;
    }
    else {std::cout << "Tidak Beririsan";}
}

float PersegiPanjang::operator[](int f){
    switch(f){
        case 1: return this->xmin; break;
        case 2: return this->xmax; break;
        case 3: return this->ymin; break;
        case 4: return this->ymax; break;
    }
}

void PersegiPanjang::operator++(){
    float tengahx, tengahy, panjangx, panjangy;
    panjangx = this->xmax - this->xmin;
    panjangy = this->ymax - this->ymin;
    tengahx = this->xmax - (panjangx/2);
    tengahy = this->ymax - (panjangy/2);

    panjangx = panjangx*2;
    panjangy = panjangy*2;

    this->xmin = tengahx - (panjangx/2);
    this->xmax = tengahx + (panjangx/2);
    this->ymin = tengahy - (panjangy/2);
    this->ymax = tengahy + (panjangy/2);

}

void PersegiPanjang::operator--(){
    float tengahx, tengahy, panjangx, panjangy;
    panjangx = this->xmax - this->xmin;
    panjangy = this->ymax - this->ymin;
    tengahx = this->xmax - (panjangx/2);
    tengahy = this->ymax - (panjangy/2);

    panjangx = panjangx/2;
    panjangy = panjangy/2;

    this->xmin = tengahx - (panjangx/2);
    this->xmax = tengahx + (panjangx/2);
    this->ymin = tengahy - (panjangy/2);
    this->ymax = tengahy + (panjangy/2);

}