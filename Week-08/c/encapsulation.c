// Week 8 - Activity 1: Simulating encapsulation (C version).
// C has no private members, so we use a struct plus functions that validate the data.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
};

// Setter: only accepts a sensible age. A pointer lets us change the original struct.
void setAge(struct Student *s, int newAge) {
    if (newAge > 0 && newAge < 120) {
        s->age = newAge;   // -> accesses a member through a pointer
    } else {
        printf("Error: Invalid age! Age must be between 1 and 119.\n");
        s->age = 0;
    }
}

int getAge(struct Student *s) {
    return s->age;
}

// Plays the role of a constructor
void initStudent(struct Student *s, const char *name, int age) {
    strcpy(s->name, name);
    setAge(s, age);
}

int main() {
    struct Student s1;
    initStudent(&s1, "Alice", 20);

    printf("Student Name: %s\n", s1.name);
    printf("Student Age: %d\n", getAge(&s1));

    printf("\nAttempting to change age to 25...\n");
    setAge(&s1, 25);
    printf("New Age: %d\n", getAge(&s1));

    printf("\nAttempting to change age to -5...\n");
    setAge(&s1, -5);   // rejected by the validation
    printf("Age after invalid attempt: %d\n", getAge(&s1));

    return 0;
}
