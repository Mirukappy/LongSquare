#ifndef __LONGSQUARE_HPP__
#define __LONGSQUARE_HPP__

class PersegiPanjang{
    private:
    float xmin, ymin, xmax, ymax;
    public:
    
    PersegiPanjang (float tengahx, float tengahy, float panjangx, float panjangy);
    PersegiPanjang operator +(PersegiPanjang);
    PersegiPanjang operator -(PersegiPanjang);
    void operator ++();
    void operator --();
    float operator [] (int);
    bool operator ==(PersegiPanjang);
    void print ();
    
    
};
#endif