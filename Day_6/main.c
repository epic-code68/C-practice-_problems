#include <stdio.h>
#include <stdlib.h>

#include "Day6.h"

int main()
{

// read and display student structure

int i;
Student list[2];
int rn,ag,m;
char nm[20];

for(i=0;i<2;i++)
 {
  printf("\n Enter the roll.no,name,age ,mark of student %d \n",(i+1));
  scanf("%d %s %d %d",&rn,nm,&ag,&m);

 }


 disp_student(list,2);




//add, subtract and multiply two complex numbers using structures.

 Complex num1,num2;
 num1.real=12;
 num1.img=6;
 num2.real=8;
 num2.img=4;
 printf("\nsum of complex numbers = %f + i%f",add_complex(num1,num2).real,add_complex(num1,num2).img);
 printf("\ndifference of complex numbers = %f + i%f",sub_complex(num1,num2).real,sub_complex(num1,num2).img);
 printf("\nproduct of complex numbers = %f + i%f",mult_complex(num1,num2).real,mult_complex(num1,num2).img);




// complete billing


Bill items[5];
int i,qt,rs;
char nm[10];

for(i=0;i<5;i++)
 {
  printf("\n Enter the item name  %d price and quantity\n",(i+1));
  scanf(" %s %d %d",nm,&rs,&qt);
  items[i]=read_item(nm,rs,qt);
 }

subtotal(items,5);
 printf("\nitems                  price    quantity   subtotal  ");
for(i=0;i<5;i++)
 {
  printf("\n%-10s          %-5d       %-5d         %-7f ",items[i].item,items[i].price,items[i].qty,items[i].subt);

 }
 printf("\n*********************************************");

printf("\nTotal amount  : %d",total(items,5));

printf("\nDiscount  : %f",discount(total(items,5)));

printf("\nGrant total : %f",grand_total(total(items,5),discount(total(items,5))));




//snake and ladder

Game box[100];



    return 0;
}
