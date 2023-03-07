#include "./utils.h"

void SolveTask1(void *info, int nr_avioane) {
    int len = 0;
    unsigned short x = 0, y = 0;
    unsigned int v = 0;
    unsigned char dir = 0, cod[4];
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
