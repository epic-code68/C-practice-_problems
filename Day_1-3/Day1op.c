#include "Day1.h"
//Day 1 programs
char Uppertolower(char ch)
{

    if(ch<65 || ch>97)
        return '*';
    return ch+32;
}


float Areaofcircle(float r)
{

    return PI * r * r;
}

float SI(float p,float t,float r)
{
    return (p * t * r)/100;


}
float CI(float p,float t,float r)
{
    return p * pow((1+r/100),t);


}
float C_F(float c)
{

 return (c * 9 / 5 ) + 32;
}

float F_C(float f)
{
    return ((f-32)*5)/9;
}
int Evenorodd(int i)
{
    if (i%2==0) printf("Number is even\n");
    else printf("Number is odd\n");
    return 0;

}


int Leap(int i)
{
    if (((i%4==0) && (i%100!=0)) || (i%400==0)) return 1;
    else return 2;
}
//Day 2 programs
int sumoffivedgt(int num)
{
    int sum=0;
    while(num!=0)
    {

        sum= sum +  num%10;
        num=num/10;
    }
    return sum;
}

int reverseanum(int num)
{
    int r = 0;
    while(num!=0)
    {
        r = r*10+num%10;
        num=num/10;
    }
        return r;
}
int occurence(int num,int d)
{
    if(num<=0) return 0;


    int r=num%10;

    if(r==d)
        return 1+occurence(num/10,d);
    return occurence(num/10,d);
}

int palindrome(int num)
{

    int rem, rev_num=0, temp;
    temp = num;
      while(num>0)
        {
            rem= num%10;
            rev_num= rev_num*10+rem;
            num=num/10;
        }

        if(rev_num == temp)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    return 0;
}
int primenum(int n)
{
    int i=2,flag,j,c=1;
    while(c<=n)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1; break;
            }
        }

    if(flag==0)
    {
        printf("%d\n",i);
        c++;
    }
    i++;
    }
}
int seriessum(int n)
{
    int i;
    long sum=0;
    long int t=1;
    for(i=1;i<=n;i++)
    {
        printf("%ld",t);
        if(i<n)
        {
            printf("+");

        }
        sum=sum+t;
        t=(t*10)+1;
    }
    return sum;
}
int armstrongnum(int num)
{
    int orgnum,rem,n=0;
    int res=0;
    orgnum=num;
    for(orgnum=num;orgnum!=0;++n)
    {
        orgnum/=10;
    }

    for(orgnum=num;orgnum!=0;orgnum/=10)
        {
        rem=orgnum%10;
        res=res+pow(rem,n);

        }
        if((int)(res)==num)
            return 1;
        else
            return 2;
return 0;
}
int Calci(int num1,int num2)
{
  int opt;

    printf("\nInput your option :\n");
    printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n");
    scanf("%d",&opt);
    switch(opt) {
        case 1:
        printf("The Addition of  %d and %d is: %d\n",num1,num2,num1+num2);
        break;

      case 2:
        printf("The Substraction of %d  and %d is: %d\n",num1,num2,num1-num2);
        break;

      case 3:
        printf("The Multiplication of %d  and %d is: %d\n",num1,num2,num1*num2);
        break;

      case 4:
        if(num2==0) {
          printf("The second integer is zero. Devide by zero.\n");
        } else {
          printf("The Division of %d  and %d is : %d\n",num1,num2,num1/num2);
        }
        break;

      case 5:
        break;

      default:
        printf("Input correct option\n");
        break;
    }
}
void Shapes()
{
  int opt;

    printf("\nInput your option :\n");
    printf("1-Cube.\n2-Cuboid.\n3-Sphere.\n4-Cylinder.\n5-Cone.\n6-Cone");
    scanf("%d",&opt);
    switch(opt) {
         float vol,a,r,h,l,w;

        case 1:


              printf("\n enter a");
              scanf("%f",&a);
              vol=a*a*a;
              printf("Volume of cube is %f  \n",vol);



        break;

      case 2:

              printf("\n enter l w h");
              scanf("%f %f %f",&l,&w,&h);

              vol=l*w*h;
              printf("Volume of cube is %f  \n",vol );


        break;

      case 3:

          printf("\n enter r");
              scanf("%f  ",&r);

              vol=(4/3)* PI * r*r*r;
              printf("Volume of Sphere is %f  \n",vol);


        break;

      case 4:

         printf("\n enter rh");
              scanf("%f %f",&r,&h);

        vol= PI* r*r*h;
        printf("Volume of Cylinder is %f  \n",vol );


        break;
          case 5:

                printf("\n enter r h");
              scanf("%f %f",&r,&h);


        vol= PI* r*r*(h/3);
        printf("Volume of Cone is %f  \n",vol );


        break;

      case 6:
        break;

      default:
        printf("Input correct option\n");
        break;
    }
}
void bill()
{
    float unit,charge;
    printf("Enter unit\n");
    scanf("%f",&unit);
    if  (unit<=200)
        {
       charge=unit*1;
         printf("Below 200=%f\n",charge);

    }
    if(unit>200&&unit<=300)
    {
        charge=(200*1)+((unit-200)*1.5);
    printf("Above 200 below 300=%f\n",charge);
    }

    if(unit>300)
    {
      charge=(200*1)+(100*1.5)+((unit-300)*2);
    printf("Above 300 b=%f\n",charge);
    }
}
//Day 3 and 4
int binary_to_decimal(int binary_input)
{
    int i=0;
    int decimal_output=0;
    int reminder;


    while(binary_input!=0)
    {
        reminder = binary_input%10;
        decimal_output= decimal_output+reminder*pow(2,i);
        i++;
        binary_input= binary_input/10;
    }

printf("\nDecimal output is %d\n", decimal_output);
return decimal_output;
}
int decimal_to_binary(int decimal_input)
{
    int i=0;
    int reminder;
    int binary_output=0;

    while(decimal_input!=0)
    {
        reminder= decimal_input%2;
        binary_output= binary_output + reminder*pow(10,i);
        i++;
        decimal_input= decimal_input/2;
    }
    printf("\n%d\n",binary_output);

}
int sumofprevdigit(int si)
{
    int i, n[si];
      n[0]=0;
      n[1]=0;
      n[2]=1;
      printf("%d, %d, %d", n[0], n[1], n[2]);
    for(i=3;i<=n;i++)
    {
        n[i]=n[i-3]+n[i-2]+n[i-1];
        printf(", %d",n[i]);

    }

}
int sketch(int s)
{
    int row=0,col=0;
    for(row=s;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
           printf("* " );
        }
    printf("\n");
    }
}
int sketchcol(int s)
{
    int row=0,col=0;
    for(row=col;row<=s;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
int multipleofseven(int n)
{
    int r1,r2;
    r1=n%10;
    n=n/10;
    r2=n;
    if((r1+r2)%7==0)
    {
        return 0;
    }
}
int power(int b,int i)
{
    int res;
    res=pow(b,i);
   // printf("%d", res);
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return (n*fact(n-1));
}
float evaluate_func(int x, int n)

{
    float result;
    result = ( x + ((pow(x,((2*n)-1)))/(fact((2*n)-1))));
    printf("%f\n", result);
    return 0;
}
int display_math_func(int choice)
{

    float x;
    float n;
    printf("Select the choice of the operation:\n");
    printf(" 1- square root\n 2- natural log\n 3- log10x\n 4- power(x,n)\n 5-Cos(x)\n");
    printf("Enter the choice of the operation:\n");
    scanf("%d", &choice);
    printf("Enter the value of number:\n");
    scanf("%f", &x);

    if (choice==4)
{
    printf("Enter the value of exponent:\n");
    scanf("%f", &n);
}

    switch (choice)
{

case 1 :
    printf("Square root of number is :%f\n",sqrt(x));
    break;

case 2 :
    printf("Natural log of number is :%f\n", log(x));
    break; // natural log id "log"

case 3 :
    printf("log of number is :%f\n", log10(x));
    break; // log to the base 10 is log10

case 4 :
    printf("Power of number to the power %d is :%f\n", n,pow(x,n));
    break;

case 5 :
    printf("Cosine of the number is: %f\n",cos(x));
    break;

default:
    printf("Enter the valid choice!!\n");
    break;
}
return 0;
}
/*====================================================================================================================*/











