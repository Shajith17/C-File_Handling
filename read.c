#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;//Declaring a file pointer for accessing the file
    char a[200];//Declaring a string to store the comma seperated values in a single row
    fp=fopen("D:\\main.csv","r");//Opening the file in the format of comma seperated values in reading mode
    int i;
    for(i=0;i<11;i++)//Upper limit is set as 21 because of the inclusion of the field names
    {
        fgets(a,200,fp);//Values in the single column is stored in the variable 'a' using 'fgets'
        printf("%s",a);//Displaying the values
    }
    fclose(fp);//Finally the file is closed using its pointer
}