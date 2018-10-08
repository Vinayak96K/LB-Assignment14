#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: WordCount
//  Description: Accepts base address of two stings and copies the content of string1 into string2 by removing whitespaces.
//  Input: char[IN-OUT,IN-OUT]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyX(char *str,char *dstr)
{
    if((str==NULL) || (dstr==NULL))
    {
        return;
    }
    
    while(*str!='\0')
    {
        if(*str!=' ')
        {
            while((*str!=' ') && (*str!='\0'))
            {
            *dstr=*str;
            str++;
            dstr++;
            }
        }
        else
        {
            str++;
        }
    }
    *dstr='\0';
}
