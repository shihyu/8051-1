//  檔名:Trig.C
//  配合"DAC0800實習板"
//  由DAC0800送出三角波形
//作業 : 產生直角三角形波形
#pragma oe db pw(80) SM SB CD
#include <reg51.h>
#include "sDelay.h"
unsigned char code trigtbl[]={	//三角波形資料
255, 228, 203, 177,152,126,101,75,51,25, // 目前只有改這邊 only change here..
255,228,203,177,152,126,101, 75, 51, 25 };
main()
{
  char i ;
  for(;;)		//無窮迴圈
  {
    for(i=19;i>=00;i--)	//共有20筆資料
    {
    P0=trigtbl[i] ;	//把i所指之trigtbl資料輸出至P0
    Delay1ms() ;	//延遲1毫秒
    }
  }
}
