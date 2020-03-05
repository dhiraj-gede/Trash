#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
void mystrrev(char *s)
int main()
{
    char str[20],temp;
    int i,j;
    clrscr();
    printf("ENTER A STRING");
    scanf("%s",str);
    printf("\n ORIGINAL STRING IS %s",str);
    mystrrev(str);
    printf("\n REVERSE STRING IS %s",str );
    getch();
}
void mystrrev(char *s)
{
    char temp;
    int i,j;
    i=o;
    j=strlen(s)-1;
    while(i<j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
}
