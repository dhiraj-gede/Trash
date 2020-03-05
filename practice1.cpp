#include<stdio.h>

#include<string.h>
using namespace std;
void mystrrev(char *s);
int main()
{
    char str[20],temp;
    int i,j;
   
    printf("ENTER A STRING");
    scanf("%s",str);
    printf("\n ORIGINAL STRING IS %s",str);
    mystrrev(str);
    printf("\n REVERSE STRING IS %s",str );
    
}
void mystrrev(char *s)
{
    char temp;
    int i,j;
    i=0;
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
