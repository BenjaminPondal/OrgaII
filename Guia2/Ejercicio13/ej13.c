#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct {
    char* name;
    uint32_t age;
} person_t;


person_t* createPerson(char* name, uint32_t age) {
    person_t* person = malloc(sizeof(person_t));
    if (person == NULL) return NULL;

    person->name = name;
    person->age = age;
    return person;
}

void deletePerson(person_t* person) {
    free(person);
}

int main() {
    person_t* p1 = createPerson("Juan", 15);

    printf("%s tiene %u años.\n", p1->name, p1->age);

    free(p1);
}