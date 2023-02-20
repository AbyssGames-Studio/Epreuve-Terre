#include <iostream>
using namespace std;

void division(int n,int m)
{

    if (m = 0)
    {
        return ;
    }
    else if (n < m)
    {
        return ;
    }
    else if (n > m)
    {
        int b = n / m ;
        m = n % m ;
        cout << "Le résultat de la division est : " << b << "\n" ;
        cout << "Le reste : " << m ;
    }
    else
    {
        return ;
    }
}

int main(){

    division(4,8);
/*
    int n = *argv[1];
    int m = *argv[2];

    if(argc != 2){
        return(0) ;
    }
    else{
        division(4,8);
    }
*/
}
