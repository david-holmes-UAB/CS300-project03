#include <stdio.h>
#include "piratetalk.h"
#include <iostream>
#include <string>


int main() {
    PirateTalk p;

    std::string str = "Hello, madame, would you direct me to the nearest hotel?";
    std::cout << str << std::endl;

    std::cout << p.translateToPirate(str) << std::endl;
    
}