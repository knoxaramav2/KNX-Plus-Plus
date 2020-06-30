#include "headers/config.hpp"

#include <string>

#include <stdio.h>

using namespace std;

Config _config;

void initConfig(){
    _config.DebugEnabled=false;
    _config.ThreadHeapLimit=1024*1000*10;   //10 MB
    _config.ThreadStackLimit=1024*1000*10;  //10 MB
    _config.Verbosity=0;
}

int parseCli(int argc, char ** argv){

    bool error = false;

    //Quick flags
    bool printHelp = false;

    for(auto i=1; i < argc; ++i){
        string arg = string(argv[i]);

        for(int i = 0; i < arg.length; ++i){
            char c = arg[i];

        }

        if(arg.length == 1 || arg[0] != '-'){
            printf("CLI options must follow the format of -FLAG(s) or --FLAG[= VALUE]\r\n");
            error = true;
            continue;
        }

        //-- Switches
        if(arg[1]=='-'){
            for(auto j=1; j < arg.length; ++j){
                switch(arg[j]){
                    case 'd': _config.DebugEnabled=true; break;
                    case 'h': printHelp = true; break;

                    default:
                        printf("Unregonized option '%c'\r\n", arg[j]);
                }
            }
        } else {
        //- Switches
            string key, val;
            auto pos = arg.find('=');

            if(pos == string::npos){
                key = arg;
            } else {
                key = arg.substr(0, pos-1);
                val = arg.substr(pos, arg.length-1);
            }

            if(key=="verbosity"){
                if(val != "") continue;
                else {
                    if (val == "none") _config.Verbosity=0;
                    else if (val == "low") _config.Verbosity=1;
                    else if (val == "mid") _config.Verbosity=2;
                    else if (val == "high")_config.Verbosity=3;
                    else{
                        printf("Verbosity level '%s' not recognized", val);
                    } 
                }

                continue;
            }

        }

        
    }

    return 0;
}

int main(int argc, char ** argv, char ** env){

    printf("KNX Version %s\r\n", VERSION);

    return 0;
}