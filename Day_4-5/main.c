#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Day4.h"

int main()
{
int i,j;
int r = 5,c = 5;
// int arr[10]={7,5,6,3,8,2,9,1,0,4};

 int arr1[10]={17,36,63,93,5,16,57,16,72,36};
 //int arr2[10]={0,1,2,3,4,5,6,7,8,9};
 int set1[5]={3,12,7,9,17};
 int set2[5]={7,14,3,8,16};
 //int max,min;
 int *arr_dup;
int arr_size = 10;
int *arr_uni;
//char str[10];
//char str1[10]="ManiPal";
//char *up_ptr;
//char str2[15];
//int matrix_arr[5][5]={{1,2,3,4,5},{4,5,2,6,4},{5,5,3,2,0},{6,6,5,3,3},{2,2,2,4,6}};
//int matrix_arr1[5][5]={{2,0,1,2,3},{5,5,0,3,8},{5,9,4,5,0},{4,0,5,3,3},{5,1,0,3,7}};
//int matrix_arr2[5][5]={{6,0,1,2,3},{5,5,0,3,8},{5,9,4,5,0},{4,0,5,3,3},{5,1,0,3,7}};
//int matrix_arr3[5][5]={{0,0,0,2,3},{5,0,0,3,0},{0,9,0,5,0},{4,0,5,0,0},{0,0,0,3,7}};
//int **ptr;
int store_arr[5][5];

int a = 7,b = 4;
printf("value of a and b : %d & %d \n",a,b);
swap(&a,&b);
printf("after swaping value of a and b : %d & %d",a,b);



// sort the given array in ascending
/*
sort_ascend(arr,10);

for(i=0;i<10;i++)
{
  printf(" %d",arr[i]);
}

*/

// sort the given array in descending order.
/*

sort_descend(arr,10);

for(i=0;i<10;i++)
{
  printf(" %d",arr[i]);
}

*/

//find minimum and maximum elements in a given array
/*
find_max_min(arr1,10,&max,&min);
printf("maximum element : %d \n",max);
printf("minimum element : %d \n",min);

*/

// Remove the duplicate entries in the array.


arr_dup=rmv_duplicate(arr1,&arr_size);
 printf("after rem dul \n");
for(i=0;i<arr_size;i++)
 printf(" %d \n",*(arr_dup+i));



//find union of two set

/*
arr_uni=set_union(set1,set2,5,5,&arr_size);
for(i=0;i<arr_size;i++)
 printf(" %d ",*(arr_uni+i));
*/


// find intersection of two sets

arr_uni=set_intersection(set1,set2,5,5,&arr_size);
for(i=0;i<arr_size;i++)
printf(" %d ",*(arr_uni+i));



// find difference between two set
/*
arr_uni=set_difference(set1,set2,5,5,&arr_size);  //set1-set2
for(i=0;i<arr_size;i++)
printf(" %d ",*(arr_uni+i));
*/


// linear search

//assert(linear_search(arr1,10,72)==1);
//assert(linear_search(arr1,10,67)==0);



// binary search

//assert(binary_search(arr2,10,10)==0);
//assert(binary_search(arr2,10,2)==1);


//sop of array

//assert(sop_aar(arr2,10)==240);



// find string length
/*
printf("enter a string\n");
scanf("%s" ,str);
printf("string length= %d",ln_string(str));
*/



// function for display date

//disp_date();



// convert string to uppercase

/*
up_ptr=(str_uppercase(str1));
for(i=0;*(up_ptr+i)!='\0';i++)
 {
  printf("%c",*(up_ptr+i));
 }
*/




// reverse a string

/*
printf("enter a string : \n");
scanf("%s",str2);
up_ptr=(str_reverse(str2));
for(i=0;*(up_ptr+i)!='\0';i++)
 {
  printf("%c",*(up_ptr+i));
 }
*/



//two dimensional array opperation


construct_matrix(store_arr,r,c);




display_matrix(store_arr,5,5);



// matrix sum



//ptr=sum_matrix(matrix_arr,matrix_arr1,5,5);

 for(i=0;i<r;i++)
  {
    printf("\n");
   for(j=0;j<c;j++)
    {
//     printf(" %d",ptr[i][j]);
    }
  }



// check equality of matrices


//assert(equal_matrix(matrix_arr1,matrix_arr2,5,5)==1);
//assert(equal_matrix(matrix_arr1,matrix_arr,5,5)==0);


// check sparse

//assert(sparse_matrix(matrix_arr3,5,5)==1);
//assert(sparse_matrix(matrix_arr2,5,5)==0);



return 0;
}
