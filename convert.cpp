#include "convert.h"

Convert::Convert()
{

}

std::stringstream Convert::toSStream(double d) {
    std::stringstream ss;
    ss << d;
    return ss;
}

std::string Convert::toString(double d) {
    std::stringstream ss = toSStream(d);
    std::string ret;
    ss >> ret;
    return ret;
}
