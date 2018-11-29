#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik;
    string t;
    float a,b;
    float suma=0;
    plik.open("plik.txt");

        while(!plik.eof())
        {
            plik>>a;
            suma+=a;
        }
    cout<<suma;
    plik.close();

    return 0;
}
