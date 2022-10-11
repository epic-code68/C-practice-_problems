#include "Day6.h"



// read a structure from user

Student read_student(int r,char a[20],int age,int mark)
{
  int i;
  Student s;
  s.rol_no=r;
  s.age=age;
  for(i=0;i<20;i++)
   s.name[i]=a[i];
  s.mark=mark;
  return s;
}


// display the string content

void disp_student(Student s[],int number)
{
 int i;
 for(i=0;i<number;i++)
 printf("\n \nroll no: %d \n name   : %s \n age    : %d \n mark   : %d",s[i].rol_no,s[i].name,s[i].age,s[i].mark);
}



//sum of two complex numbers

Complex add_complex(Complex a,Complex b)
{
 Complex c;
 c.real=a.real+b.real;
 c.img=a.img+b.img;
 return c;
}



// difference between two complex numbers

Complex sub_complex(Complex a,Complex b)
{
 Complex c;
 c.real=a.real-b.real;
 c.img=a.img-b.img;
 return c;
}



// multiplication of complex numbers

Complex mult_complex(Complex a,Complex b)
{
 Complex c;
 c.real=a.real*b.real-a.img*b.img;
 c.img=a.img*b.real+a.real*b.img;
 return c;
}


// input the items details

Bill read_item(char a[20],int rs,int qt)
{
  int i;
  Bill s;

  s.price=rs;
  for(i=0;i<10;i++)
   s.item[i]=a[i];
  s.qty=qt;
  return s;
}

//calculate the subtotal of each item
void subtotal(Bill a[],int n)
{
 int i;
 for(i=0;i<n;i++)
  {
   a[i].subt=a[i].qty*a[i].price;
  }

}
//calculate the total
int total(Bill a[],int n)
{

 int i,s = 0;
 for(i=0;i<n;i++)
  s+=a[i].subt;
 return s;
}
//calculate discount
float discount(int a)
{
 if(a<1000)
  return (a*.05);
 else if(a<5000)
  return (a*.1);
 else if(a>5000)
  return(a*.15);
 else
  return 0;
}
//calculate grand total
float grand_total(int a,float b)
{
 return(a-b);
}
