void swap(int *,int *); // swap two numbers
void sort_ascend(int a[],int );  // sort the given array in ascending
void sort_descend(int a[],int );  // sort the given array in descending order.
int find_max_min(int a[], int b, int *max, int *min); //find minimum and maximum elements in a given array
int *set_union(int a[],int b[],int la,int lb,int *new_size);//find union of two set
int *set_intersection(int a[],int b[],int la,int lb,int *new_size);
int *set_difference(int a[],int b[],int la,int lb,int *new_size);
int * rmv_duplicate(int a[],int *b); // Remove the duplicate entries in the array.
int linear_search(int a[],int b,int s); //search for a given integer in an array using the linear search technique.
int binary_search(int a[],int b,int s); //search for a given integer in an array using the binary search technique
int sop_aar(int a[],int b);  //reads list of n integer and print sum of product of consecutive numbers
int ln_string(char a[]); //read a string from the user and find the length of string.(without using string.h header file)
void disp_date();//input date, month and year from the user, and using switch case, display in worded format
char *str_uppercase(char a[]);//function that will scan a character string passed as an argument and convert all lower-case characters into their upper-case equivalents.
char *str_reverse(char a[]); //read a string from the user and reverse the string.( Note: Do not use string.h header file)
//construct 5 * 5 matrix and display the contents. Use functions for construction and display of matrix.
void construct_matrix(int a[5][5],int r,int c);
void display_matrix(int a[5][5],int r,int c);
void **sum_matrix(int a[5][5],int b[5][5],int r,int c); // sum of two matrices
int equal_matrix(int a[][5],int b[][5],int r,int c);  //check whether 2 matrixes are same
int sparse_matrix(int a[][5],int r,int c); //check if given matrix is a sparse matrix
