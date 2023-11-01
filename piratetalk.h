/*
* File: piratetalk.h
* ------------------------------------
* File to outline the pirateTalk class. The pirateTalk class converts
* inputted strings into "pirateTalk" as defined by its internal
* dictionary.
*/

#ifndef _piratetalk_h
#define _piratetalk_h

#include <map>
#include <string>

class PirateTalk {
    private:
    // Dictionary of pirate words
    std::map<std::string, std::string> pirateDict;
    // private function to return equivalent pirate word from the dictionary
    std::string getFinalStr(std::string tLS, const std::string & original);

    public:
    PirateTalk(); // Constructor declaration

    // returns a translation from English to Pirate
    std::string translateToPirate(const std::string & input);


};

#endif