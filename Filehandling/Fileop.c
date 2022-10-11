#include "Fileop.h"
/*int readfile(char *Filename)
{
    FILE* fp;
    char ch;
    fp=fopen(Filename,READ_MODE);
    if(fp==NULL)
        return 0;
    while(1)
    {

        ch=fgetc(fp);
        if(ch==EOF) break;
        printf("%c",ch);

         }
fclose(fp);
return 1;
}
*/
/*int copyfile(char * srcfile,char * destfile)
{
    char ch;
    int c,l,t;
    FILE *fp,*fp1;
    fp=fopen(srcfile,READ_MODE);
    fp1=fopen(destfile,WRITE_MODE);
    if(fp==NULL || fp1==NULL)
        return 0;

    while((ch=fgetc(fp))!=EOF)
    {
        fputc(ch,fp1);
    }

    fclose(fp);
    fclose(fp1);
}
*/
int countch(char * Filename)
{
    char ch;
    int c=0,l=0,t=0;
    FILE *fp;
    fp=fopen(Filename,READ_MODE);

    if(fp==NULL)
        return 0;

    while((ch=fgetc(fp))!=EOF)
    {
        c++;
        if(ch==' ')
            t++;
        if(ch=='\n')
            l++;

    }
    printf("\n%d %d %d",c,t,l);

    fclose(fp);

}

int copyfile(char *srcfile,char *destfile)
{
    char ch;
    FILE* fp,*fp1;
    fp=fopen(srcfile,READ_MODE);
    fp1=fopen(destfile,"w");
    if(fp==NULL||fp1==NULL)
        return 1;
    while((ch=fgetc(fp))!=EOF)
    {
        fputc(ch,fp1);


    }

    fclose(fp);
    fclose(fp1);

}

void split_file_oddeven(char *srcfile,char *oddfile,char *evenfile) // split the content of a file into two different files
{
 FILE *fs,*fe,*fo;
 char ch;
// char ads[50],mode[4];
 char *ptr;
 int dig;
 int i = 0;
/*
 printf("\nEnter the address  :");
 scanf("%s",ads);
 printf("\nEnter the mode  :");
 scanf("%s",mode);
*/
 fs = fopen("srcfile","r");
 fe = fopen("evenfile","w");
 fo = fopen("oddfile","w");
 ptr =(char *)malloc(sizeof(char)*50);

while((ch=fgetc(fs)) != EOF)
{
 if(ch != '\n')
  {
   ptr[i] = ch;
   i++;
  }
 else
  {
   ptr[i] = '\0'; //terminate the string for each line
   //dig = num_in_string(ptr);
    if(dig%2==1)
      {
       fputs(ptr,fo);
       fputc('\n',fo); //introduce new line while saveing to new file location
      }
    else
      {
       fputs(ptr,fe);
       fputc('\n',fe); //introduce new line while saveing to new file location
      }

   i = 0;
  }
}
 free(ptr);
 fclose(fs);
 fclose(fe);
 fclose(fo);
}
