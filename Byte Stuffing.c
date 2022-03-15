#include<string.h>
#include <stdio.h>

void Sender(char *str){
    int l;
    l = strlen(str);
    int i;
    char nstr[100] = "$";
    int count = 1;
    for(i=0;i<l;i++)
    {
        if(str[i]=='@' || str[i]=='$'){
            nstr[count+i] = '@';
            count++;
            
        }
        nstr[count+i] = str[i];
    }
    nstr[count+i] = '$';
    nstr[count+i+1] = '\0';
    printf("The stuffed bit is: %s", nstr);
}

int main()
{
    char str[100];
    int l;
    char z[100];
    char nstr[100];
    printf("Enter String for Byte Stuffing: ");
    scanf("%s",str);
    printf("%s",str);
    l = strlen(str);
    printf("\n");
    Sender(str);
    return 0;
}

