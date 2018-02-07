//---------------------------------------------------------------------------
#include "PTRAFFIC.h"

//---------------------------------------------------------------------------
PTRAFFIC::PTRAFFIC(void)
{
}
//---------------------------------------------------------------------------
PTRAFFIC::~PTRAFFIC(void)
{
}
//---------------------------------------------------------------------------
bool PTRAFFIC::DoWorkViaProtocol(MESSAGEOK message)
{
try {
    switch (message.protocol) {
            //�Ĥ@�ؤ���:��q��77�~���q�T��w
            case PROTOCOL77:                                                    //��q��77�~���q�T��w
                 pTraffic77.DoWorkViaPTraffic(message);
            break;
            //�ĤG�ؤ���:��q��87�~���q�T��w
            case PROTOCOL87:                                                    //��q��87�~���q�T��w
                 pTraffic87.DoWorkViaPTraffic(message);
            break;
            //�ĤT�ؤ���:��q��92�~���q�T��w
            case PROTOCOL92:                                                    //��q��92�~���q�T��w
                 pTraffic92.DoWorkViaPTraffic(message);
            break;
            //�ĥ|�ؤ���:��q��Ntcip�~���q�T��w
            case PROTOCOLNTCIP:                                                 //��q��NTCIP�q�T��w
                 pTrafficNtcip.DoWorkViaPTraffic(message);
            break;

            case PROTOCOLCCJ:                                                 //��q��NTCIP�q�T��w
                 pTrafficCCJ.DoWorkViaPTraffic(message);
            break;

            case PROTOCOLREVSYNC:
                 pTrafficRevSync.DoWorkViaPTraffic(message);
            break;

            case PROTOCOLAMEGIDS:
                 pTrafficAmegids.DoWorkViaPTraffic(message);
            break;

            case PROTOCOLKEYPAD:                                                //�F�ͭ��O������L�q�T��w
            case PROTOCOLRTMS:                                                  //RTMS�q�T��w
            case PROTOCOLSS:                                                    //SMART SENSOR�q�T��w
            case PROTOCOLOWNWAY:                                                //�������O�˼Ƴq�T��w
            case PROTOCOLEOI:                                                   //���Ŭ��O�˼Ƴq�T��w
            case PROTOCOLLISCMS:                                                //�x�_�õaCMS�q�T��w
            case PROTOCOLUNKNOW:                                                //���M������w
            break;

            default:
            break;
    }

    return true;

  } catch (...) {}
}
//---------------------------------------------------------------------------