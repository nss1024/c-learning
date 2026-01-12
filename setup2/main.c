#include <stdio.h>

struct person {
    int age;
    char name[20];
};

void updateAge(struct person* p) {
    p->age = 30;  // Change the age
}

int main(void) {
    
    struct person p1;
    p1.age = 20;
    strncpy(p1.name, "Sam",sizeof p1.name);

    struct person* pers = &p1;
    
    printf("Age: %d\n", p1.age);

    updateAge(&p1);
   
    printf("Age: %d\n", pers->age);
    printf("Name %s\n", pers->name);
    

}


