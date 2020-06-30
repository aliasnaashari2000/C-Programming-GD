#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
typedef struct
{
    float real;
    float imag;
}Complex;

// Function Prototype
Complex read();
Complex add(Complex a,Complex b);
Complex* mul(const Complex *first,const Complex *second);
void write(Complex c);

int main() {

    Complex a,b,c,d;
    a = read();
    b = read();

    c = add(a,b);
    write(c);

//    d = c; // copy info byte byte

    Complex first,second;
    first = read();
    second = read();

    Complex *result = mul(&first,&second);
    write(*result);

    free(result);

    return 0;
}

Complex read()
{
    Complex pa;
    scanf("%f %f",&pa.real,&pa.imag);
    return pa;
}

Complex add(Complex a,Complex b)
{
    Complex res;
    res.real = a.real + b.real;
    res.imag = a.imag + b.imag;
    return res;
}

Complex* mul(const Complex *first,const Complex *second)
{
    Complex* res = (Complex*)malloc(sizeof(Complex));
    res->real = (*first).real * (*second).real - (*first).imag * (*second).imag;
    res->imag = first->real * second->imag + first->imag * second->real;

    return res;
}


void write(Complex c)
{
    printf("(%.2f)+(%.2f)i",c.real,c.imag);
}
*/


/*

#define maxCol 100

typedef struct
{
    int row,col;
}Pair;

// Function Prototype
Pair fill_arr(int arr[][maxCol]);
void write_arr(int arr[][maxCol],Pair nArr);

int main()
{
    Pair nArr;
    int matrix[100][maxCol];
    nArr = fill_arr(matrix);
    write_arr(matrix,nArr);

    return 0;
}

Pair fill_arr(int arr[][maxCol])
{
    Pair len;
    scanf("%d %d",&len.row,&len.col);
    for (int i = 0; i < len.row; ++i) {
        for (int j = 0; j < len.col; ++j) {
            scanf("%d",&arr[i][j]);
        }
    }
    return len;
}

void write_arr(int arr[][maxCol],Pair nArr)
{
    for (int i = 0; i <nArr.row ; ++i) {
        for (int j = 0; j <nArr.col ; ++j) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

*/

/*
typedef struct
{
    int stdNo;
    float avg;

}Student;

// Function Prototype
int fill_arr(Student class[]);
void write_Arr(Student class[],int len);
int cmp(const void* pa,const void* pb);



int main()
{
    Student class[100];
    int len;
    len = fill_arr(class);
    write_Arr(class,len);
    qsort(class,len,sizeof(Student),cmp);
    write_Arr(class,len);

    return 0;
}


int fill_arr(Student class[])
{
    int nArr;
    printf("PLease Enter Number of Student:");
    scanf("%d",&nArr);
    for (int i = 0; i < nArr; ++i) {
        printf("Student%d:\n",i+1);
        printf("StdNo: ");
        scanf("%d",&class[i].stdNo);
        printf("Average: ");
        scanf("%f",&class[i].avg);
    }
    return nArr;
}

void write_Arr(Student class[],int len)
{
    printf("StudentNumber\t\t\t\tAverage\n");
    for (int i = 0; i < len; ++i) {
        printf("%d\t\t\t\t\t%.2f\n",class[i].stdNo,class[i].avg);
    }
    printf("\n********************************\n\n");
}

int cmp(const void* pa,const void* pb)
{
    Student first = *(Student*)pa;
    Student second = *(Student*)pb;
    return second.avg - first.avg;
}

*/


/*

typedef struct
{
    float x,y;
}Point;

//Function Prototype
int readPoly(Point points[]);
float Area(Point points[],int nPoly);


int main()
{
    Point polygon[100];
    int nPoly;
   nPoly = readPoly(polygon);

    float res = Area(polygon,nPoly);
    printf("Area is:%.2f",res);
}

int readPoly(Point points[])
{
    int len;
    printf("Number Of Points:");
    scanf("%d",&len);

    for (int i = 0; i <len ; ++i) {
        printf("points%d:\n",i+1);
        scanf("%f %f",&points[i].x,&points[i].y);
    }

    return len;
}

float Area(Point points[],int nPoly)
{
    float sum = 0;
    int p,q;
    for (p = nPoly-1,q = 0; q < nPoly; p = q++) {
        sum += sqrt( pow((points[p].x-points[q].x),2) + pow( (points[p].y-points[q].y),2) );
    }
    
    return sum;
}

 */
































