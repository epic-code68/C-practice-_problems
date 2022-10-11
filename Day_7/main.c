#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Day7.h"

int main()
{
  int i,n = 5;
  int a[5]={3,4,10,2,7};
  int b[5]={1,2,3,2,1};
  int *ptr;
  int *ptr1;
  ptr=gen_arr_dynamic(a,n); // points to the dynamially generated array
  ptr1=gen_arr_dynamic(b,n);
  // print the generaed array
  for(i=0;i<n;i++)
   {
    printf("%d ",*(ptr+i));
   }

 //search for an element
  assert(linear_search(ptr,n,10)==1);
  assert(linear_search(ptr,n,5)==0);
// find min and max
  assert(arr_min(ptr,n)==2);
  assert(arr_max(ptr,n)==10);

// sum of elements
  assert(sum_arr(ptr,n)==26);

  //sum of even elements
   assert(even_sum_arr(ptr,n)==16);

  // sum of odd elements
   assert(odd_sum_arr(ptr,n)==10);

 // check palindrome
   assert(palin_arr(ptr,n)==0);
   assert(palin_arr(ptr1,n)==1);

   deallocate(ptr);
   deallocate(ptr1);


 return 0;
}
