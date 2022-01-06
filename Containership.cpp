#include <iostream>
using namespace std;

class Alpha
{
    private:
        int x;
    public:
        Alpha(int xVal)
        {
            x = xVal;
            cout << "Alpha constructor called " << endl;
        }
        int GetX()
        {
            return x;
        }
};

class Beta
{
    private:
        int y;
    public:
        Beta(int yVal)
        {
            y = yVal;
            cout << "Beta constructor called " << endl;
        }
        int GetY()
        {
            return y;
        }
};

class Gamma
{
    public : 
        Alpha a;
        Beta b;
        int c , d;
    public:
        Gamma(int aVal, int bVal, int cVal, int dVal) : c(cVal), d(dVal), a(aVal), b(bVal)
        {
            cout << "Gamma constructor called" << endl;
        }
};

class GammaInh : public Alpha, public Beta
{
    int c ,d;
    public:
        GammaInh(int aVal, int bVal, int cVal, int dVal) : c(cVal), d(dVal), Alpha(aVal), Beta(bVal)
        {
            cout << "Gamma Inheritance constructor called" << endl;
        }
};

int main()
{
    Gamma g(1,2,3,4);
    g.a.GetX();
    
    cout << endl << "------------------------" << endl;
    GammaInh g1(5,6,7,8);
    g1.GetX();

    return 0;
}