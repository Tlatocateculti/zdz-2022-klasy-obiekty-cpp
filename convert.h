#ifndef CONVERT_H
#define CONVERT_H

#include <string>
#include <sstream>
//STATIC!!

class Convert
{
   std::stringstream toSStream(double );
   std::stringstream toSStream(long long );
   std::stringstream toSStream(std::string );
   std::stringstream toSStream(char );
   std::stringstream toSStream(bool );

public:
    Convert();

    std::string toString(double );
    std::string toString(long long );
    std::string toString(char );
    std::string toString(bool );

    double toDouble(std::string );
    double toDouble(long long );
    double toDouble(char );
    double toDouble(bool );

    int toInt(std::string );
    int toInt(long long );
    int toInt(char );
    int toInt(bool );
};

#endif // CONVERT_H
