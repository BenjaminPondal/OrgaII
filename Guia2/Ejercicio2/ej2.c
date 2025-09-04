#include <stdio.h>

typedef struct {
    char* nombre;
    int vida;
    double ataque;
    double defensa;
} monster_t;

void printMonstruo(monster_t monstruo) {
    printf("%s stats:\n", monstruo.nombre);
    printf("- Vida: %d\n", monstruo.vida);
    printf("- Ataque: %f\n", monstruo.ataque);
    printf("- Defensa: %f\n", monstruo.defensa);
    printf("------------\n");
}

monster_t evolucion(monster_t monstruo) {
    monstruo.ataque += 10;
    monstruo.defensa += 10;
    return monstruo;
}

int main() {
    monster_t monstruos[] = {
        {"Creeper", 10, 5.1, 6.5},
        {"Zombie", 6, 8.9, 0.1},
        {"Sans", 1, 99.9, 99.9}
    };

    for (size_t i = 0; i < 3; i++) {
        printMonstruo(monstruos[i]);
    }

    printMonstruo(evolucion(monstruos[2]));

    return 0;
}
