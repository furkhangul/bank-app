#include<stdio.h>
#include<string.h>
int main()
{
int pass;
char username[10];
int sifre=1234;
char kullaniciadi[10]="furkan";
printf("***********BANK OF USA***********\n\n\nWELCOME TO BANK OF USA\n-----LOGİN-----\n");
printf("User Name:");
scanf("%s",&username);
printf("Password:");
scanf("%d",&pass);
if(strcmp(username,kullaniciadi)==0 && pass==sifre){
printf("Successful Login");}
else{
printf("Unsuccessful Login \nİnvalid username or password \nPlease try again!");}
return 0;
}
