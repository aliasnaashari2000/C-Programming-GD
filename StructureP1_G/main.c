#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Similarly structure is another user defined data type , that allows to combine data items of different kinds.*/
struct Books
{
    int book_id;
    char author[50];
    char title[50];
    char subject[50];
};

typedef struct
{
    int std_num;
    char FirstName[50];
    char LastName[50];
}Student;

struct Movie
{
    int movie_id;
    char name[21];
}mv1;

struct Employee
{
    char ename[21];
    int salary;
};

/* Function ProtoType */
void print_struct(struct Books book);
void print_struct_student(Student std);
void ask(void);

int main() {

    /*
    struct [structure_tag]
    {
        //member variable 1
        //member variable 2
        //member variable 3
        ...
    }[structure_variables];
    */

    /*   "typedef" --> C Keyword
    typedef struct
    {
        type member1;
        type member2;
        type member3;
    } type_name;

     type_name t1, t2;
    */

    /*   "typedef"
    typedef unsigned long ulong;
    ulong i,j;
    */

    struct Books book1;  /* Declare Book1 of type Book */

    // size of
   // printf("size of book1 is:%d\n",sizeof(book1));

    /* book 1 specification */
    /*
    book1.book_id = 1;
    strcpy(book1.title,"K&R");
    strcpy(book1.author,"Dennis Ritchie");
    strcpy(book1.subject,"C Programming Language");
    */

    /* book 2 specification */
    struct Books book2 = {2,"Boof kor","Hedayat","society"};

    /* student 1 specification */
    /*
    Student std1;
    std1.std_num = 1;
    strcpy(std1.FirstName,"ALI");
    strcpy(std1.LastName,"Foladi");
    */

    /* Movie 1 specification */
    /*
    scanf("%d\n",&mv1.movie_id);
    gets(mv1.name);

    printf("movie_id:%d\n",mv1.movie_id);
    printf("movie name:%s\n",mv1.name);
    */

    /* Structures as Function Arguments */
    // We can pass a structure as a function argument just like we pass any other variable or an array as a function argument.
    /*
    printf("Print Struct:\n");
    print_struct(book2);

    printf("Print Struct Student:\n");
    print_struct_student(std1);
    */


    // Part Two --> Array of Structure
    // in which each element of the array will represent a structure variable.
    // ask();
    // example two
    /*
      struct car{
      int carnum_1;
      int carnum_2;
        };
        int main()
        {
          struct car numbers[2] = {{22,34},{54,88}};
        }
        numbers[0].carnum_1:22
        numbers[0].carnum_2:34
        numbers[1].carnum_1:54
        numbers[1].carnum_2:88
     */

    // Nested Structure
    // one structure has another stucture as member variable.
    /*
    struct Student
    {
        char[30] name;
        int age;
        // here Address is a structure
        struct Address
        {
            char[50] locality;
            char[50] city;
            int pincode;
        }addr;
    };
    */



    return 0;
}

void print_struct(struct Books book)
{
    printf( "Book book_id : %d\n", book.book_id);  //Dot Operator
    printf( "Book title : %s\n", book.title);
    printf( "Book author : %s\n", book.author);
    printf( "Book subject : %s\n", book.subject);
    printf("**************************************\n");
}


void print_struct_student(Student std)
{
    printf( "student_id : %d\n", std.std_num); //Dot Operator
    printf( "Student FirstName : %s\n", std.FirstName);
    printf( "Student LastName : %s\n", std.LastName);
    printf("**************************************\n");
}

void ask(void)
{
    struct Employee emp[5];
    for(int i = 0;i<3;i++)
    {
        printf("\nEnter %dst Employee record:\n", i+1);
        printf("\nEmployee name:\t");
        scanf("%s", emp[i].ename);
        printf("\nEnter Salary:\t");
        scanf("%d", &emp[i].salary);
    }
    printf("\nDisplaying Employee record:\n");
    for(int i = 0; i < 3; i++)
    {
        printf("\nEmployee name is %s", emp[i].ename);
        printf("\nSlary is %d", emp[i].salary);
    }

}
