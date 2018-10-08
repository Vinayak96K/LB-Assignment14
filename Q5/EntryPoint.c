#include "MyHeader.h"

int main(int argc, char const *argv[])
{
    char sArr[30];
    
    printf("Enter the string:");
    scanf("%[^'\n']s",sArr);

    printf("String before conversion:%s\n",sArr);
    StrCap(sArr);

    printf("String after conversion:%s\n",sArr);

    return 0;
}
