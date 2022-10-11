
typedef struct _student_ Student;
typedef struct _comp_ Complex;
typedef struct _bill_ Bill;
typedef struct _game_ Game;


struct _student_
 {
  int rol_no;
  char name[20];
  int age;
  int mark;
 };

 struct _comp_
  {
   float real;
   float img;
  };

  struct _bill_
   {
    char item[10];
    int qty;
    int price;
    float subt;
   };


   struct _game_
   {
    int n;
    char player;
    int snake;
    int lad;
   };


//program to store and print the roll no., name, age and marks of 10 students using structures.

//Student read_student(int ,char a[20],int ,int );
//void disp_student(Student s[],int);


//add, subtract and multiply two complex numbers using structures.

Complex add_complex(Complex ,Complex );
Complex sub_complex(Complex ,Complex );
Complex mult_complex(Complex ,Complex );


//functions for billing program
Bill read_item(char a[20],int rs,int qt);
void subtotal(Bill a[],int n);
int total(Bill a[],int n);
float discount(int );
float grand_total(int ,float );
