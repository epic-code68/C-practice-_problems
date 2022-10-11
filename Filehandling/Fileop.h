#include <string.h>
#include<stdio.h>
#define READ_MODE "r"
#define WRITE_MODE "w"
#define APPEND_MODE "a"

int readfile(char *Filename);
int copyfile(char * srcfile,char * destfile);
int countch(char * Filename);
void split_file_oddeven(char *srcfile,char *oddfile,char *evenfile);



