//---------------------------------------------------------------------------

#ifndef PDEVICEH
#define PDEVICEH

#include "var.h"
#include "PDEVICESS.h"
#include "PDEVICERTMS.h"
#include "PDEVICEKEYPAD.h"

/*OTCombo0713*/
#include "PDEVICETRAFFICLIGHT.h"
#include "PDEVICEREVMANUALPAD.h"
//---------------------------------------------------------------------------
class PDEVICE
{
    public:

        PDEVICE(void);
        ~PDEVICE(void);
        bool DoWorkViaProtocol(MESSAGEOK);                                      //�ھ�protocol�ǨӪ�Structure�@�Ʊ�


    private:

        PDEVICESS pDeviceSS;
        PDEVICERTMS pDeviceRTMS;
        PDEVICEKEYPAD pDeviceKeypad;
/*OTCombo0713*/
        PDEVICETRAFFICLIGHT pDeviceTrafficLight;
        PDEVICEREVMANUALPAD pDeviceRevManualPad;

};
//---------------------------------------------------------------------------
#endif

