#ifndef SCREENModifyPWDH
#define SCREENModifyPWDH

#include "SCREEN.h"
//---------------------------------------------------------------------------
class SCREENModifyPWD:public SCREEN
{
    public:

      SCREENModifyPWD(void);
      ~SCREENModifyPWD(void);

      void DisplayModifyPWD(void);
      void DoKeyWork(BYTE);                                                     //�ھ�KEY���ȧ@��


    private:

      DISP_WORD pwd[6];                                                         //�������ťճB,�w�q�y��
      unsigned int cPosition;                                                   //�{�b����m
      char passWord[6];                                                         //�O���K�X

      BYTE modifyPWDBitmap[3840];                                               //����

      void LoadBitmapFromFile(void);                                            //�N����Load�i�O����
      void InitDispWord(void);                                                  //��l�Ʀ��e�����y�е��Ѽ�
      void GetTCPassword(void);

      void DoKey0Work(void);
      void DoKey1Work(void);
      void DoKey2Work(void);
      void DoKey3Work(void);
      void DoKey4Work(void);
      void DoKey5Work(void);
      void DoKey6Work(void);
      void DoKey7Work(void);
      void DoKey8Work(void);
      void DoKey9Work(void);
      void DoKeyAWork(void);
      void DoKeyBWork(void);
      void DoKeyCWork(void);
      void DoKeyDWork(void);
      void DoKeyEWork(void);
      void DoKeyFWork(void);
      void DoKeyF1Work(void);
      void DoKeyF2Work(void);
      void DoKeyF4Work(void);
      void DoKeyUPWork(void);
      void DoKeyDOWNWork(void);
      void DoKeyLEFTWork(void);
      void DoKeyRIGHTWork(void);
      void DoKeyEnterWork(void);
};
//---------------------------------------------------------------------------
extern SCREENModifyPWD screenModifyPWD;
#endif


