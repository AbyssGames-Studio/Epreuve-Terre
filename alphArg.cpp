#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    argv[1] = "e";

    char b = argv[1][0];

    if (b >= 'a' && b <= 'z')
    {
        for (char i = b; i <= 'z'; i++)
        {
            cout << i;
        }
        cout << "\n";
    }

    return 0;
}