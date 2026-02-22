#include <stdio.h>
#include <string.h>
int main()
{
    char koms[100];
    printf("Enter the sentence: ");
    fgets(sen,100,stdin);
    int len1=strlen(koms);

    char sss[100];
    printf("Enter the string: ");
    fgets(sss,100,stdin);
    int len2=strlen(sss);

    int i=0;
    int j=l;
    while(i<=len2)
    {
        koms[j]= sss[i];
        i++;
        j--;
    }
    printf("The resultant string is: ");
    puts(koms);