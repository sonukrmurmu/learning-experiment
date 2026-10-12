#include <stdio.h>
typedef int integer;
struct{
    char *name;
    int age;
    int salary;
}emp1,emp2;
typedef struct car{
    char name[10];
    int ORP;
    int mileage;
}car;
typedef struct cars{
    char name[10];
    int ORP;
    int mileage;
}cars;
//car[array]can be used to create and automate mutliple struct
//pointer is simply used to access the struct with address
//normal as variable and function passing memory address

int manager(int agee){
    struct{
        char *name;
        int age;
        int salary;
    }manager;
    manager.age = agee;
    if(manager.age>30){
        manager.salary = 600000;
    }else{
        manager.salary = 300000;
    }
    return manager.salary;
}
int main()
{
    integer var = 100;
    integer agee;
    printf(" %d\n",var);
    printf("Enter the salary of employ 1\n");
    scanf(" %d",&emp1.salary);
    printf("Enter the salary of second emoloyee\n");
    scanf(" %d",&emp2.salary);
    printf("Enter the age of the MAnager\n");
    scanf(" %d",&agee);
    printf("Salary of employee 1 is %d\n",emp1.salary);
    printf("The salary of employee 2 is %d\n",emp2.salary);
    printf("THe salary of manager is %d",manager(agee));
    car c1 = {"buggati",1000000,10};
    car c2 = {"mercedes",100000000,10};
    cars c3 = {"bmw",102030,5};
    cars c4 = {"harley",300000,45};
    car c5 = {.name = "hii",.mileage = 10 , .ORP = 1000000};
    car c6 = {.name = "random",.mileage= 100, .ORP = 10000000};
    printf("%s %d %d",c1.name,c1.ORP,c1.mileage);
    printf("%s %d %d",c2.name,c2.ORP,c2.mileage);
    printf("%s %d %d",c3.name,c3.ORP,c3.mileage);
    printf("%s %d %d",c4.name,c4.ORP,c4.mileage);
    printf("%s %d %d",c5.name,c5.ORP,c5.mileage);
    printf("%s %d %d",c6.name,c6.ORP,c6.mileage);
    return 0;
}