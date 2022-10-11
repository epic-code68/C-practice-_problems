#include "Fileop.h"
#include <string.h>
#include<stdio.h>

int main()
{
//  readfile("Samplefile.txt");
  copyfile("Samplefile.txt","destfile.txt");
  //countch("Samplefile.txt");
  split_file_oddeven("Samplefile.txt", "oddfile.txt", "evenfile.txt") ;
  return 0;
}

