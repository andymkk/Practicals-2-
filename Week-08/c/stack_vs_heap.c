// Week 8 - Activity 2: Stack vs heap structs (C version).
// Stack structs clean up automatically; heap structs need malloc and free.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char model[50];
};

// Plays the role of a constructor
void initCar(struct Car *c, const char *modelName) {
    strcpy(c->model, modelName);
    printf("Car created: %s\n", c->model);
}

// Plays the role of a destructor (must be called by us in C)
void destroyCar(struct Car *c) {
    printf("Car destroyed: %s\n", c->model);
}

int main() {
    printf("--- Creating Stack Struct ---\n");
    struct Car stackCar;               // memory managed automatically
    initCar(&stackCar, "Toyota");

    printf("\n--- Creating Heap Struct ---\n");
    struct Car *heapCar = (struct Car *)malloc(sizeof(struct Car));   // we must free it
    if (heapCar == NULL) return 1;
    initCar(heapCar, "Honda");
    printf("Heap car model: %s\n", heapCar->model);   // -> for pointers

    printf("\n--- End of main function ---\n");
    destroyCar(heapCar);
    free(heapCar);                     // give the heap memory back
    destroyCar(&stackCar);

    return 0;
}
