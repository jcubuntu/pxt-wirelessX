#include "pxt.h"

using namespace pxt;

namespace wirelessX{
    int readData(){
        return uBit.serial.read();
    }
}