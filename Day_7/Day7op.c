int *gen_arr_dynamic(int arr[],int size)
{
 int i;
 int *dymc_arr;
 dymc_arr=(int *)malloc(sizeof(int)*size);
 for(i=0;i<size;i++)
  {
   dymc_arr[i]=arr[i];
  }
 return dymc_arr;
}


//search element using linear search

int linear_search(int *a,int b,int s)
{
 int i;
 for(i=0;i<b;i++)
  {
    if(s==a[i])
     return 1;
  }
return 0;
}

// find minimum and maximum
int arr_max(int *a,int b)
{
 int i,m;
 m=*a;
 for(i=1;i<b;i++)
  {
   if(m<*(a+i))
    m=*(a+i);
  }
 return m;
}


int arr_min(int *a,int b)
{
 int i,m;
 m=*a;
 for(i=1;i<b;i++)
  {
   if(m>*(a+i))
    m=*(a+i);
  }
 return m;
}

// sum of array element

int sum_arr(int *a,int b)
{
  int i,s = 0;
  for(i=0;i<b;i++)
   {
    s+=*(a+i);
   }
return s;
}

// sum of even elements

int even_sum_arr(int *a,int b)
{
  int i,s = 0;
  for(i=0;i<b;i++)
   {
    if(*(a+i)%2==0)
     s+=*(a+i);
   }
return s;
}

// sum of odd elements
int odd_sum_arr(int *a,int b)
{
  int i,s = 0;
  for(i=0;i<b;i++)
   {
    if(*(a+i)%2==1)
     s+=*(a+i);
   }
return s;
}

//check palin

int palin_arr(int *a,int b)

{int i,j,*ptr;
 ptr=(int *)malloc(sizeof(int)*b);
 for(i=0,j=b-1;i<b;i++,j--)
  {
   *(ptr+j)=*(a+i);
  }
 for(i=0;i<b;i++)
  {
   if(*(ptr+i)!=*(a+i))
    {
     return 0;
     break;
    }
  }
  return 1;
}


// function to deallocate memmory
void deallocate(int *a)
{
 free(a);
}
