#include <iostream>
#include <fstream>
#include "flite/include/flite.h"
#include "gr2sp.h"


int main(int argc, char* argv[]){

    std::string fname;

    if(argc<2){ //if only executable name is given, ask for filename
        std::cout << "Enter filename:";
        std::cin >> fname;
    }else  fname = argv[1]; //else use the name given as a cmdline arg
    //if more than 2 args, just ignore the rest

    
    std::ifstream inp(fname);

    while(!inp.is_open()){
        std::cout << "Error opening file!\nPlease provide a valid filename:";
        std::cin >> fname;
        inp.clear();
        inp.open(fname); 
    }

    return 0;
}