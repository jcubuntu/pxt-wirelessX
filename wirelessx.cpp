#include "pxt.h"

using namespace pxt;

namespace wirelessX{
    char readData(){
        return uBit.serial.read();
    }
}