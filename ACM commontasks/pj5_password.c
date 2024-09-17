# include <stdio.h>
# include <string.h>
# include <stdlib.h>
void pass(char str[100]);
int main()
{
    char str[100];
    printf("Enter your password : ");
    fgets(str,sizeof(str),stdin);
    pass(str);
    return 0;
}
void pass(char str[100])
{
    int i,len;
    int uc,lc,sc;
    i=len=uc=lc=sc=0;
    len = strlen(str);
    if((strcmp(str,"A1b#cD3e")==0 ) || (strcmp(str,"Xy4$Zz7!")==0) || (strcmp(str,"P@ssw0rd")==0) || (strcmp(str,"M!n3r4L^")==0) || (strcmp(str,"T7r$eN8f")==0) )
    {
        printf("\nThis password is not accepted..");
        return ;
    }
    if((str[0]>='0' && str[i]<='9') || !(str[i]>= 'A' && str[i]<='Z') && !(str[i]>='a' && str[i]<='z'))
    {
        printf("\nPassword cannot start with a digit or a special character");
        return;
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
           uc++;
        if (str[i]>='a' && str[i]<='z')
           lc++;
        if(!(str[i]>='0' && str[i]<='9'))
           sc++;
    }
    if((uc==0) || (lc==0) || (sc==0))
    {
        printf("\nPassword must contain upper case letters and lower case letters and special characters");
    }
    else
        printf("\nPassword is accepted.");
    return ;
}