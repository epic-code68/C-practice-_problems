#include "Day1.h"
#include<assert.h>
int main()
{
   //Day 1 programs
   assert(Uppertolower('A') == 'a');
   printf("AOC=%f \n", Areaofcircle(2));
   printf("SI=%f \n", SI(2,2,3));
   printf("CI=%f \n", CI(1200,2,5.4));
   printf("C_F=%0.2f\n",C_F(100));
   printf("F_C=%0.2f\n",F_C(54));
   assert(Evenorodd(1)== 0);
   assert(Leap(2000)== 1);
   //Day 2 programs
    assert(sumoffivedgt(1)==1);
   // assert(reverseanum(123)==321);
   // assert(occurence(3233,3)==3);
    assert(palindrome(121)==1);
    primenum(5);
    assert(seriessum(2)==12);
    assert(armstrongnum(1634)==1);
      // Calci(2,2);
   // Shapes();
   // bill();
   // bill();
   // bill();
    binary_to_decimal(0000);
    //assert(decimal_to_binary(2)==10);
    decimal_to_binary(8);
    //sumofprevdigit(5);
    sketch(4);
    sketchcol(5);
    assert(multipleofseven(34)==0);
    assert(power(11,0)==1);
    assert(fact(3)==6);
    evaluate_func(2,3);
    assert(CONCATENATE(2,3)==23);
    //assert(SQUARE(2)==2);
    //display_math_func(1);

    return 0;


}
