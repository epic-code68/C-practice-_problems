#include <string.h>
#include <stdlib.h>




// swap two numbers

void swap(int *a,int *b)
{
 *a=*a+*b;
 *b=*a-*b;
 *a=*a-*b;
}


// sort the given array in ascending

void sort_ascend(int a[],int b)
{
 int i,j,temp;
 for(i=0;i<b;i++)
  for(j=0;j<b;j++)
   {
     if(a[j]>a[j+1])
     {
      temp = a[j];
      a[j] = a[j+1];
      a[j+1] = temp;
     }
   }
}

// sort the given array in descending order.

void sort_descend(int a[],int b)
{
 int i,j,temp;
 for(i=0;i<b;i++)
  for(j=0;j<b;j++)
   {
     if(a[j]<a[j+1])
     {
      temp = a[j];
      a[j] = a[j+1];
      a[j+1] = temp;
     }
   }
}


//find minimum and maximum elements in a given array

int find_max_min(int a[], int b, int *max, int *min)
{
 int i;
 *max=a[0];
 *min=a[0];
 for(i=1;i<b;i++)
  {
   if(*max<a[i]) *max=a[i];
   if(*min>a[i]) *min=a[i];
  }
  return 0;
}



// Remove the duplicate entries in the array.


int * rmv_duplicate(int a[],int *b)
{
 int i,j,r=0;
 static int arr[10]={0};
 for(i=0;i<*b;i++)
  {
    for(j=0;j<=i;j++)
    {
     if(a[i]==arr[j])
      break;
    }
    if(j==i+1)
     {
      arr[r]=a[i];
      r++;
     }
  }
  *b=r;
  return arr;
}


//find union of two set

int *set_union(int a[],int b[],int la,int lb,int *new_size)
{
 int u_size=0;
 static int arr_u[10];
 int *u_set;
 int i;
 for(i=0;i<(la);i++)
   arr_u[i]=a[i];
 for(i=la;i<(la+lb);i++)
   arr_u[i]=b[i-la];
   u_size=la+lb;
 u_set=rmv_duplicate(arr_u,&u_size);
 *new_size=u_size;
 return(u_set);

}


// find intersection osf two set

int *set_intersection(int a[],int b[],int la,int lb,int *new_size)
{
 int i_size=0,i,j;
 static int arr_i[10];
 for(i=0;i<la;i++)
  for(j=0;j<lb;j++)
   {
    if(a[i]==b[j])
     {
      arr_i[i_size]=b[j];
      i_size++;
     }
   }
 *new_size=i_size;
 return (arr_i);
}


//find difference between two set

int *set_difference(int a[],int b[],int la,int lb,int *new_size)
{
 int i_size=0,i,j;
 static int arr_d[10];
 for(i=0;i<la;i++)
  {
   for(j=0;j<lb;j++)
    {
     if(a[i]==b[j])
      break;
    }
   if(j==lb)
    {
     arr_d[i_size]=a[i];
     i_size++;
    }
  }
 *new_size=i_size;
 return (arr_d);
}


 //linear search

int linear_search(int a[],int b,int s)
{
 int i;
 for(i=0;i<b;i++)
  {
    if(s==a[i])
     return 1;
  }
return 0;
}


// binary search

int binary_search(int a[],int b,int s)
{
 int first=0,last,ln;
 last=b;
 while(first<=last)
 {
   ln=(first+last)/2;
   if(a[ln]==s)
   {
    return 1;
    break;
   }
   else if(a[ln]<s)
    first=ln+1;
   else
    last=ln-1;
  }
 return 0;
}



//reads list of n integer and print sum of product of consecutive numbers
// numbers are 4,5,2,5,6,4,7 then output is 4*5+5*2+2*5+5*6+6*4+4*7 = 122.

int sop_aar(int a[],int b)
{
 int i,sum = 0,p;
 for(i=1;i<b;i++)
  {
   p=a[i-1]*a[i];
   sum=sum+p;
  }
 return sum;
}



//read a string from the user and find the length of string.(without using string.h header file)

int ln_string(char a[])
{
 int i=0;
 while(a[i]!='\0')
  {
   i++;
  }
 return i;
}



// function for display date

void disp_date()
{
 int d,m,y;
 printf("eneter the day,month&year :\n");
 scanf(" %d %d %d",&d,&m,&y);
 switch(m)
 {
  case 1:
   printf("\nThe date is %dth january,%d",d,y);
   break;
  case 2:
   printf("\nThe date is %dth february,%d",d,y);
   break;
  case 3:
   printf("\nThe date is %dth march,%d",d,y);
   break;
  case 4:
   printf("\nThe date is %dth april,%d",d,y);
   break;
  case 5:
   printf("\nThe date is %dth may,%d",d,y);
   break;
  case 6:
   printf("\nThe date is %dth june,%d",d,y);
   break;
  case 7:
   printf("\nThe date is %dth july,%d",d,y);
   break;
  case 8:
   printf("\nThe date is %dth august,%d",d,y);
   break;
  case 9:
   printf("\nThe date is %dth september,%d",d,y);
   break;
  case 10:
   printf("\nThe date is %dth october,%d",d,y);
   break;
  case 11:
   printf("\nThe date is %dth november,%d",d,y);
   break;
  case 12:
   printf("\nThe date is %dth december,%d",d,y);
   break;
  default:
   printf("invalid date");
 }
}



// convert string to upper case


char *str_uppercase(char a[])
{
 int i = 0;
 static char ptr[15] ;
 while(a[i]!='\0')
  {
    if(islower(a[i]))
     *(ptr+i)=toupper(a[i]);
    else
     *(ptr+i)=a[i];
    i++;
  }
  return ptr;
}



//read a string from the user and reverse the string

char *str_reverse(char a[])
 {
  int ln,i;
  static char ptr[15];
  ln=ln_string(a);
  for(i=0;i<ln;i++)
   {
    ptr[ln-i-1]=a[i];
   }
  return ptr;
 }



//construct 5 * 5 matrix and display the contents. Use functions for construction and display of matrix.

void construct_matrix(int a[5][5],int r,int c)
{
 int i,j,k = 0;
 printf("enter the elements of 2d array \n");
 for(i=0;i<r;i++)
  for(j=0;j<c;j++)
   {
    scanf("%d",&a[i][j]);
   }
}


void display_matrix(int a[5][5],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
  {
   printf("\n");
   for(j=0;j<c;j++)
    {
     printf(" %d ",a[i][j]);
    }
  }
}


//sum of two matrices

int **sum_matrix(int a[][5],int b[][5],int r,int c)
{
 int **matrix_sum;
 int i,j;
  matrix_sum = (int **)malloc(sizeof(int*) * 5);
  for(i = 0; i < 5; i++)
   {
     matrix_sum[i] = (int *)malloc(sizeof(int) * 5);
     for(j=0;j<5;j++)
     {
      matrix_sum[i][j]=a[i][j]+b[i][j];
     }
   }
 return matrix_sum;

}




int equal_matrix(int a[][5],int b[][5],int r,int c)
 {
  int i,j;
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
     if(a[i][j]!=b[i][j])
      {
       return 0;
       break;
      }
    }
   return 1;
 }




 int sparse_matrix(int a[][5],int r,int c)
 {
  int i,j,z = 0;
  for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
     if(a[i][j]==0)
      z++;
    }
   }
   if(z>(r*c)/2)
    return 1;
   else
    return 0;

 }


