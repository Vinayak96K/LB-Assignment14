#include "MyHeader.h"

int main(int argc, char const *argv[])
{
    char sArr[30];
    int iRet=0;

    printf("Enter the string:");
    scanf("%[^'\n']s",sArr);

    iRet=WordCount(sArr);

    if(iRet==-1)
    {
        printf("Incorrect base address!\n");
    }
    else
    {
        printf("Lenght of the largest word in the string is:%d.\n",iRet);
    }
    return 0;
}
