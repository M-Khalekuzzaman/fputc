#include<stdio.h>
int main()
{
FILE *file;
char name[100];
int age;
//int len = strlen(name);
file = fopen("text.txt","a");
if(file == NULL)
    printf("File doesn't exist");
else
{
    printf("File is successfully opened\n");
    printf("Enter your full name :");
    gets(name);
    printf("Enter person age is : ");
    scanf("%d",age);
    //fputs(name,file);
    fprintf(file,"Name : %s,Age : %d",name,age);      //fprintf(file pointer name,formate spacifire ,variable name)
    /*
    for(int i = 0 ;i<len ;i++)
    {
        fputc(name[i],file);
    }
    */
    printf("File written successfully\n");
    fclose(file);
}


    getch();
}

