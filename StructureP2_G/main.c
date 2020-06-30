#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    char name[10];
    int price;
};

typedef  struct
{
    int stdnum;
    char name[21];
    int age;
}Student;

// Function Prototype
void print_struct_pointer(Student *std);

int main() {

    /*
    struct Book a = {"K&R",1200};      //Single structure variable
    struct Book* ptr;   //Pointer of Structure type
    ptr = &a;

    printf("Name: %s\n", ptr->name);  // ptr->name == (*ptr).name
    printf("Price: %d\n", ptr->price);


    struct Book b[10];  //Array of structure variables
    struct Book* p;     //Pointer of Structure type
    p = &b;
    */


    /*
    Student std1;
    printf("Please Enter Your Student Number:\n");
    scanf("%d",&std1.stdnum);
    printf("Please Enter Your Name:\n");
    scanf("%s",std1.name);
    printf("Please Enter Your Age:\n");
    scanf("%d",&std1.age);
    printf("Print Struct With Pointer:\n");
    print_struct_pointer(&std1);
     */

    // Pointer To Structure
    Student *ptr;
    //allocating memory at run time
    ptr = (Student*)malloc(sizeof(Student));
    if(!ptr) // ptr == NULL
    {
        printf("Unable to Allocate Memory");
        exit(0);
    }


    return 0;
}

void print_struct_pointer(Student *std)
{
    printf("Student number:%d\n",std->stdnum);   // -> Arrow Operator
    printf("Student Name:%s\n",(*std).name);
    printf("Student Age:%d\n",std->age);

}

