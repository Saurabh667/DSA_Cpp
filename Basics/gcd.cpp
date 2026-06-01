#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else
    {
        while (a !=b)
        {
            if (a > b)
            {
                a = a - b;
            }
            else if (b > a)
            {
                b = b - a;
            }
        };
        if (a == 0)
        {
            return b;
        }
        else if (b == 0)
        {
            return a;
        }
    }
};

int main()
{
    int a, b;
    cout << "enter first number";
    cin >> a;
    cout << endl
         << "enter secconfd number";
    cin >> b;
    cout << "output is " << gcd(a, b);
}


// NOTE 
// ---------  HCF(A,B)*LCM(A,B)=A*B       --------------------------