#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];

    int n,i,m,j;
     printf("enter your name:");
    scanf("%s",&name);
    n=strlen(name);
    for (i = 1; i < n; i++) {
        m = name[i];
        j = i - 1;


        while (j >= 0 && name[j] > m)
        {
            name[j + 1] = name[j];
            j = j - 1;
        }
        name[j + 1] = m;
    }
    puts(name);
    return 0;
}
