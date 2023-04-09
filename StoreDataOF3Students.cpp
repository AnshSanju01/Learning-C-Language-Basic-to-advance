#include<stdio.h>
#include<string.h>

struct StoreDataOF3Students
{   
    char name[100];
    int roll;
    float cgpa;
};

int main(){

    struct StoreDataOF3Students s1;
    //  s1.name = "Sanju";
    s1.roll = 1600;
    s1.cgpa = 9.8;

    strcpy(s1.name, "Sanjeev Rao");

    printf("Name of first student is %s \n", s1.name);
    printf("Roll no. of first student is %d \n", s1.roll);
    printf("CGPA of first student is %f \n", s1.cgpa);

    printf("\n");


    struct StoreDataOF3Students s2;
    //  s1.name = "Sanju";
    s2.roll = 1700;
    s2.cgpa = 10.0;

    strcpy(s2.name, "Avneet Kaur");

    printf("Name of second student is %s \n", s2.name);
    printf("Roll no. of second student is %d \n", s2.roll);
    printf("CGPA of second student is %f \n", s2.cgpa);


    printf("\n");

    struct StoreDataOF3Students s3;
    //  s1.name = "Sanju";
    s3.roll = 1800;
    s3.cgpa = 9.2;

    strcpy(s3.name, "Mishra Ji");

    printf("Name of third student is %s \n", s3.name);
    printf("Roll no. of third student is %d \n", s3.roll);
    printf("CGPA of third student is %f \n", s3.cgpa);

    return 0;
}
