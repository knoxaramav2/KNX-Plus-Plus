#include <string>

#include <stdio.h>

using namespace std;

int parseCli(int argc, char ** argv){

    for(auto i=1; i < argc; ++i){
        string arg = string(argv[i]);

        
    }

    return 0;
}

int main(int argc, char ** argv, char ** env){

    printf("KNX Version %s\r\n", VERSION);

    return 0;
}