#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: WordCount
//  Description: Accepts base address of a sting and retuns the count of total words available in the string.
//  Input: char[IN-OUT]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int WordCount(const char *str)
{
    int iCnt=0;

    if(str==NULL)
    {
        return -1;
    }
    
    while(*str!='\0')
    {
        if(*str!=' ')
        {
            while((*str!=' ') && (*str!='\0'))
            {
                str++;
            }
            iCnt++;
        }
        else
        {
            str++;
        }
    }

    return iCnt;
}