#include "MyHeader.h"

int main(int argc, char const *argv[])
{
    char sArr[50];
    char sArr2[50];

    printf("Enter the string:");
    scanf("%[^'\n']s",sArr);

    StrCpyX(sArr,sArr2);

    printf("%s\n",sArr2);
    

    return 0;
}
