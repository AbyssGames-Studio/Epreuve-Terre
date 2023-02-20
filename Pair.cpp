#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Veuillez entrer un entier : ";
    cin >> n;
    if (cin.fail())
    {
        cout << "Vous n'avez pas mis un entier!" << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            cout << n << " est un entier pair";
        }
        else
        {
            cout << n << " est un entier impair";
        }
    }

    return 0;
}