#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int lastNumber(int, int);

int main()
{
    //liczba przypadkow do rozwazenia
    int D;
    int a, b;
    vector <int> result;
    cin >> D;
    for (int i=0; i<D; i++)
    {
        cin >> a >> b;
        result.push_back(lastNumber(a, b));
    }

    int vector_size = result.size();
    for (int i=0; i<vector_size; i++)
    {
        cout<< result[i] << endl;
    }
    return 0;
}

int lastNumber(int a, int b)
{
    a %= 10; // ostatnia cyfra z liczby
    switch (a)
    {
    case 2:
        {
            b %= 4; //modulo 4 dlatego gdyz sa 4 mozliwe liczby
            if (b==0) return 6; //tutaj trzeba cos wymyslic bo zwraca 6 jak jest np 2^0
            else return pow(a,b);
        }
        break;

    case 3:
        {
            b %= 4; //modulo 4 dlatego gdyz sa 4 mozliwe liczby
            if (b==3) return 7;
            else return pow(a,b);
        }
        break;

    case 4:
        {
                if (b % 2 != 0) return 4;
                else return 6;
        }
        break;

    case 7:
        {
            int temp_result;
            b %= 4;
            temp_result = pow(a,b);
            return temp_result %= 10;
        }
        break;

    case 8:
        {
            int temp_result;
            b %= 4;
            temp_result = pow(a,b);
            return temp_result %= 10;
        }
        break;

    case 9:
        {
            if (b % 2 != 0) return 9;
            else return 1;
        }
        break;
    default: return a;

    }
}
