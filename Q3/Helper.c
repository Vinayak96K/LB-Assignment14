#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: StrWordRev
//  Description: Accepts base address of a sting and reverse each word from the string.
//  Input: char[IN-OUT]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrWordRev(char *str)
{
    int iCnt=0;
    int iCnt2=0,iCnt3=0;
    char cTemp;
    if(str==NULL)
    {
        printf("Null input value!\n");
        return;
    }
    
    while(str[iCnt]!='\0')
    {
        if(str[iCnt]!=' ')
        {
            iCnt2=iCnt;
            while((str[iCnt]!=' ') && (str[iCnt]!='\0'))
            {
                iCnt++;
                
            }
            iCnt3=iCnt-1;
            while(iCnt2<iCnt3)
            {
             cTemp=str[iCnt2];
             str[iCnt2]=str[iCnt3];
             str[iCnt3]=cTemp;
             iCnt2++;
             iCnt3--;   
            }
        }
        else
        {
            iCnt++;
        }
    }
}