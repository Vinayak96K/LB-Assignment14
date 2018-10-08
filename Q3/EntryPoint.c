#include "MyHeader.h"

int main(int argc, char const *argv[])
{
    char sArr[30];
    int iRet=0;

    printf("Enter the string:");
    scanf("%[^'\n']s",sArr);

    printf("String before reverse:%s\n",sArr);
    StrWordRev(sArr);

    printf("String after reverse:%s\n",sArr);

    return 0;
}
