#ifndef Can_E39_h
#define Can_E39_h

/*  This library supports the Powertrain CAN messages for the BMW E39 for driving dash gauges, putting out malf lights etc

*/

#include <stdint.h>
#include "my_fp.h"
#include "canhardware.h"

class Can_E39
{
public:
    static void DecodeCAN(int id, uint32_t data[2]);
    static void Msg316(uint16_t outRPM, CanHardware* can);
    static void Msg329(uint16_t tempValue, CanHardware* can);
    static void Msg545(CanHardware* can);

private:

};

#endif /* Can_E39_h */

