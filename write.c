#include<stdio.h>
#include<stdlib.h>
struct details//Creating a structure for storing blood donation details
{
    char name[100];
    int age;
    char bldgrp[4];
    char phno[20];
    char date[20];
    char id[20];
    char ads[150];
}b[10];//Declaring 10 structure variables for storing details for 10 persons 
void main()
{
    FILE *fp;//Declaring a pointer for accessing the file
    fp=fopen("D:\\main.csv","w");//Opening the file in the format of comma seperated values in writing mode
    int i;
    fprintf(fp,"S.No,Name,Age,Blood Group,Phone No,Date,Aaadhar No,Address\n");//creating fields
    for(i=0;i<10;i++)//Getting inputs for ten persons
    {
        printf("Enter the details for donor %d:\n",i+1);
        printf("Enter the name:");
        scanf("\n%[^\n]%*c",b[i].name);
        printf("Enter the age:");
        scanf("%d",&b[i].age);
        printf("Enter the blood group:");
        scanf("%s",b[i].bldgrp);
        printf("Enter the phone number:");
        scanf("%s",b[i].phno);
        printf("Enter the date of donation(DAY/MONTH/YEAR):\n");
        scanf("%s",b[i].date);
        printf("Enter the Aadhar number:");
        scanf("%s",b[i].id);
        printf("Enter the Address:");
        scanf("\n%[^\n]%*c",b[i].ads);
        //After getting inputs, it is stored in the csv file using 'fprintf' statement 
        fprintf(fp,"%d,%s,%d,%s,%s,%s,%s,%s\n",i+1,b[i].name,b[i].age,b[i].bldgrp,b[i].phno,b[i].date,b[i].id,b[i].ads);
    }
    fclose(fp);//Finally the file is closed using its pointer
}