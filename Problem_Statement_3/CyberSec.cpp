#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<long long> encrypted;
vector<long long> decrypted;
string final;
int D(int e, int phi)
{
    bool cond = false;
    int d = 2;
    while (!cond)
    {
        if ((e * d) % phi == 1)
        {
            return d;
        }
        else
        {
            d += 1;
            cond = false;
        }
    }
    return -1;
}

long long power(int power, long long ch, int n)
{
    long long enc = ch;
    for (int i = 1; i < power; ++i)
    {
        int temp = ch;

        enc *= temp;
        enc %= n;
    }
    return enc;
}

void encryption(string str, int n, int e)
{
    vector<long long> encrypted;
    for (int i = 0; i < str.length(); ++i)
    {
        encrypted.push_back(power(e, str[i], n));
    }

    ::encrypted = encrypted;
}

void decryption(int n, int d)
{
    vector<long long> decrypted;
    string str;
    for (int i = 0; i < ::encrypted.size(); ++i)
    {
        str += (power(d, ::encrypted[i], n));
    }
    ::final = str;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int E(int phi)
{
    int e = 3;
    bool cond = false;
    while (!cond)
    {
        if (gcd(e, phi) == 1)
        {
            return e;
        }
        else
        {
            e += 2;
            cond = false;
        }
    }
    return -1;
}

bool primecheker(int a)
{
    for (int i = 2; i < a - 1; ++i)
    {
        if (a % i == 0)
        {
            return false;
        }
        else
        {
            continue;
        }
    }
    return true;
}

int main()
{
    int tester, p = 0, q = 0, n = 0;

    do
    {
        do
        {
            cout << "ENTER PRIME NUMBER : " << endl;
            cin >> tester;

            if (!primecheker(tester) || tester <= 2)
            {
                cout << "NUMBER IS NOT PRIME " << endl;
            }
            else
            {
                cout << "NUMBER ACCEPTED" << endl;
                p = tester;
            }
        } while (!primecheker(tester) || tester <= 2);

        do
        {
            cout << "ENTER PRIME NUMBER : " << endl;
            cin >> tester;

            if (!primecheker(tester) || tester <= 2)
            {
                cout << "NUMBER IS NOT PRIME " << endl;
            }
            else
            {
                cout << "NUMBER ACCEPTED" << endl;
                q = tester;
            }
        } while (!primecheker(tester) || tester <= 2);
        n = p * q;
        if (n > 1000 || n < 127)
        {
            cout << "INVALID PRIME NUMBERS REDO : \n\n\n"
                 << endl;
        }
    } while (n > 1000 || n < 127);

    int phi = (p - 1) * (q - 1);
    int e = E(phi);
    int d = D(e, phi);

    string str;
    cout << "\n\nENTER YOUR TEXT" << endl;
    cin.ignore();
    getline(cin, str);

    cout<<"\nYOUR PUBLIC KEY : ("<<n<<","<<e<<")"<<endl;
    encryption(str, n, e);
    for (int i = 0; i < ::encrypted.size(); ++i)
    {
        cout << "\nENCRYPTED FORM\n"<<::encrypted[i];
    }
    cout << "\n\nDECRYPTED TEXT";
    decryption(n, d);
    cout << ::final;
    return 0;
}