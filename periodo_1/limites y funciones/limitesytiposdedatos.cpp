#include <iostream>
#include <limits>

using namespace std;

int main(){

    int imin = numeric_limits<int>::min(); 
    int imax = numeric_limits<int>::max(); 

    cout << " imin = " << imin <<endl;
    cout << " imax = " << imax << "\n";
    cout << " tamanio de int : " << sizeof(int) <<endl;

    float fmin = std ::  numeric_limits<float>::min();
    float fmax = std ::  numeric_limits<float>::max();

    cout << " fmin = " << fmin <<endl;
    cout << " fmax = " << fmax << "\n";
    cout << " tamanio de float : " << sizeof(float) <<endl;

    char cmin = std ::  numeric_limits<char>::min();
    char cmax = std ::  numeric_limits<char>::max();
 
    cout << " cmin = " << cmin <<endl;
    cout << " cmax = " << cmax <<"\n";
    cout << " tamanio de char : " << sizeof(char) <<endl;

    double dmin = std ::  numeric_limits<double>::min();
    double dmax = std ::  numeric_limits<double>::max();

    cout << " dmin = " << dmin <<endl;
    cout << " dmax = " << dmax <<"\n";
    cout << " tamanio de double : "  << sizeof(double) <<endl;

    long lmin = std ::  numeric_limits<long>::min();
    long lmax = std ::  numeric_limits<long>::max();

    cout << " lmin = " << lmin <<endl;
    cout << " lmax = " << lmax <<"\n";
    cout << " tamanio de long : "  << sizeof(long) <<endl;
    
    short smin = std ::  numeric_limits<short>::min();
    short smax = std ::  numeric_limits<short>::max();

    cout << " smin = " << smin <<endl;
    cout << " smax = " << smax <<"\n";
    cout << " tamanio de short : "  << sizeof(short) <<endl;

    bool bmin = std ::  numeric_limits<bool>::min();
    bool bmax = std ::  numeric_limits<bool>::max();

    cout << " bmin = " << bmin <<endl;
    cout << " bmax = " << bmax <<"\n";
    cout << " tamanio de bool : "  << sizeof(bool) <<endl;

    wchar_t wtmin = std ::  numeric_limits<wchar_t>::min();
    wchar_t wtmax = std ::  numeric_limits<wchar_t>::max();

    cout << " wtmin = " << wtmin <<endl;
    cout << " wtmax = " << wtmax <<"\n";
    cout << " tamanio de wchar_t : "  << sizeof(wchar_t) <<endl;

    signed short ssmin = std ::  numeric_limits<signed short>::min();
    signed short ssmax = std ::  numeric_limits<signed short>::max();

    cout << " ssmin = " << ssmin <<endl;
    cout << " ssmax = " << ssmax <<"\n";
    cout << " tamanio de signed short : "  << sizeof(signed short) <<endl;

    unsigned short  usmin = std ::  numeric_limits<unsigned short>::min();
    unsigned short  usmax = std ::  numeric_limits<unsigned short>::max();

    cout << " usmin = " << usmin <<endl;
    cout << " usmax = " << usmax <<"\n";
    cout << " tamanio de unsigned short : "  << sizeof(unsigned short) <<endl;

    long double ldmin = std ::  numeric_limits<long double>::min();
    long double ldmax = std ::  numeric_limits<long double>::max();

    cout << " ldmin = " << ldmin <<endl;
    cout << " ldmax = " << ldmax <<"\n";
    cout << " tamanio de long double : "  << sizeof(long double) <<endl;

    signed int simin = std ::  numeric_limits<signed int>::min();
    signed int simax = std ::  numeric_limits<signed int>::max();

    cout << " simin = " << simin <<endl;
    cout << " simax = " << simax <<"\n";
    cout << " tamanio de signed int : "  << sizeof(signed int) <<endl;

    unsigned int  uimin = std ::  numeric_limits<unsigned int>::min();
    unsigned int  uimax = std ::  numeric_limits<unsigned int>::max();

    cout << " uimin = " << uimin <<endl;
    cout << " uimax = " << uimax <<"\n";
    cout << " tamanio de unsigned int: "  << sizeof(unsigned int) <<endl;

    signed long slmin = std ::  numeric_limits<signed long>::min();
    signed long slmax = std ::  numeric_limits<signed long>::max();

    cout << " slmin = " << slmin <<endl;
    cout << " slmax = " << slmax <<"\n";
    cout << " tamanio de signed long : "  << sizeof(signed long) <<endl;

    unsigned long ulmin = std ::  numeric_limits<unsigned long>::min();
    unsigned long ulmax = std ::  numeric_limits<unsigned long>::max();

    cout << " ulmin = " << ulmin <<endl;
    cout << " ulmax = " << ulmax <<"\n";
    cout << " tamanio de unsigned long: "  << sizeof(unsigned long) <<endl;

    signed char scmin = std ::  numeric_limits<signed char>::min();
    signed char scmax = std ::  numeric_limits<signed char>::max();

    cout << " scmin = " << scmin <<endl;
    cout << " scmax = " << scmax <<"\n";
    cout << " tamanio de signed char : "  << sizeof(signed char) <<endl;

    unsigned char  ucmin = std ::  numeric_limits<unsigned char>::min();
    unsigned char  ucmax = std ::  numeric_limits<unsigned char>::max();

    cout << " ucmin = " << ucmin <<endl;
    cout << " ucmax = " << ucmax <<endl;
    cout << " tamanio de unsigned char: "  << sizeof(unsigned char) <<endl;

    std::cin.get();
    return 0;

    


}

    

 
