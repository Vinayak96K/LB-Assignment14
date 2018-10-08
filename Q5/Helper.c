#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: StrCap
//  Description: Accepts base address of a sting and converts the first letter of each word into capital.
//  Input: char[IN-OUT]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCap(char *str)
{
    
    if(str==NULL)
    {
        printf("Null input value!\n");
        return;
    }
    
    while(*str!='\0')
    {
        if(*str!=' ')
        {
            if((*str>='a')&&(*str<='z'))
            {
                *str=*str-32;
            }   
            while((*str!=' ') && (*str!='\0'))
            {
               str++;                
            }
            
        }
        else
        {
            str++;
        }
    }
}