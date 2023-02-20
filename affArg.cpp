#include <iostream>
int main ( int argc, char *argv[] )
{
    int i = 0;
    argc = 4;
    argv[1] = "Je";
    argv[2] = "suis";
    argv[3] = "solide";
    argv[4] = "!";

    while( i < argc )
    {
        i++;
        std::cout << argv[i];
        if(i<argc){
            std::cout << "\n";
        }
    }
}
