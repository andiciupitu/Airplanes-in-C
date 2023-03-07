#include "./utils.h"
/*
sortare crescator dupa tip
    pentru tipuri egale, descrescator dupa Codul Aeroportului
        pentru coduri egale, crescator dupa viteza
*/
#define FIVE 5
int compare(const void* a, const void* b) {
    int size = 2 * sizeof(unsigned short) + FIVE * sizeof(unsigned char);
    // accesam tipul primului vector
    char arg1 = *((const char*)a + 2 * sizeof(unsigned short) +  sizeof(unsigned char));
    // accesam tipul celui de al doilea vector
    char arg2 = *((const char*)b + 2 * sizeof(unsigned short) +  sizeof(unsigned char));
    // daca tipul primului avion < tipul celui de al doilea
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    // parcurgem fiecare caracter al codului
    for (int i = 2 * sizeof(unsigned short) +  sizeof(unsigned char); i < size; i++) {
        arg1 = *((const char*)a + i);
        arg2 = *((const char*)b + i);
        // sortam descrescator in functie de litere
        if (arg1 > arg2) return -1;
        if (arg1 < arg2) return 1;
    }
    // salvam viteza avioanelor
    int x =  *((const char*)a + 2 * sizeof(unsigned short) + FIVE * sizeof(unsigned char));
    int y =  *((const char*)b + 2 * sizeof(unsigned short) + FIVE * sizeof(unsigned char));
    // ordonam crescator dupa viteza
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}
void SolveTask3(void *info, int nr_avioane) {
     int len = 0;
    unsigned short x = 0, y = 0;
    unsigned int v = 0;
    unsigned char dir = 0, cod[4];
    int size = 2 * sizeof(unsigned short) + FIVE * sizeof(unsigned char) + sizeof(unsigned int);
    // apelare functie qSort
    qsort(info, nr_avioane, size, compare);
    for (int i = 0; i < nr_avioane; i++) {
        // extrag coordonata x
        memcpy(&x, info + len, sizeof(unsigned short));
        len += sizeof(unsigned short);
        // extrag coordonata y
        memcpy(&y, info + len, sizeof(unsigned short));
        len += sizeof(unsigned short);
        // directia de mers a avionului
        memcpy(&dir, info + len, sizeof(unsigned char));
        len += sizeof(unsigned char);
        // codul avionului
        memcpy(&cod, info + len, 4 * sizeof(unsigned char));
        len += 4 * sizeof(unsigned char);
        // viteza cu care se deplaseaza
        memcpy(&v, info + len, sizeof(unsigned int));
        len += sizeof(unsigned int);
        printf("(%u, %u)\n", x, y);
        printf("%c\n", dir);
        printf("%s\n", cod);
        printf("%d\n\n", v);
    }
}
