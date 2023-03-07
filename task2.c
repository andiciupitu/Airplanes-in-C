#include "./utils.h"

void EscapeTheMatrix(char **mat, int i, int j, unsigned char dir, char type) {
switch (type) {
    // avion de tipul 1
    case '1':
        switch (dir) {
            // orientat catre nord
            case 'N':
                mat[i][j] = '*';
                mat[i + 1][j] = '*';
                mat[i + 1][j + 1] = '*';
                mat[i + 1][j + 2] = '*';
                mat[i + 1][j - 1] = '*';
                mat[i + 1][j - 2] = '*';
                mat[i + 2][j] = '*';
                mat[i + 3][j - 1] = '*';
                mat[i + 3][j + 1] = '*';
                mat[i + 3][j] = '*';
                break;
            // orientat catre sud
            case 'S':
                mat[i][j] = '*';
                mat[i - 1][j] = '*';
                mat[i - 1][j + 1] = '*';
                mat[i - 1][j + 2] = '*';
                mat[i - 1][j - 1] = '*';
                mat[i - 1][j - 2] = '*';
                mat[i - 2][j] = '*';
                mat[i - 3][j - 1] = '*';
                mat[i - 3][j + 1] = '*';
                mat[i - 3][j] = '*';
                break;
            // orientat catre vest
            case 'W':
                mat[i][j] = '*';
                mat[i][j + 1] = '*';
                mat[i + 1][j + 1] = '*';
                mat[i + 2][j + 1] = '*';
                mat[i - 1][j + 1] = '*';
                mat[i - 2][j + 1] = '*';
                mat[i][j + 2] = '*';
                mat[i - 1][j + 3] = '*';
                mat[i + 1][j + 3] = '*';
                mat[i][j + 3] = '*';
                break;
            // orientat catre est
            case 'E':
                mat[i][j] = '*';
                mat[i][j - 1] = '*';
                mat[i + 1][j - 1] = '*';
                mat[i + 2][j - 1] = '*';
                mat[i - 1][j - 1] = '*';
                mat[i - 2][j - 1] = '*';
                mat[i][j - 2] = '*';
                mat[i - 1][j - 3] = '*';
                mat[i + 1][j - 3] = '*';
                mat[i][j - 3] = '*';
                break;
        }
        break;
    // avion de tipul 2
    case '2':
        switch (dir) {
            // orientat catre nord
            case 'N':
                mat[i][j] = '*';
                // linia 1
                mat[i + 1][j - 1] = '*';
                mat[i + 1][j] = '*';
                mat[i + 1][j + 1] = '*';
                // linia 2
                mat[i + 2][j] = '*';
                mat[i + 2][j + 3] = '*';
                mat[i + 2][j + 2] = '*';
                mat[i + 2][j + 1] = '*';
                mat[i + 2][j - 1] = '*';
                mat[i + 2][j - 2] = '*';
                mat[i + 2][j - 3] = '*';
                // linia 3
                mat[i + 3][j] = '*';
                // linia 4
                mat[i + 4][j] = '*';
                mat[i + 4][j + 2] = '*';
                mat[i + 4][j + 1] = '*';
                mat[i + 4][j - 1] = '*';
                mat[i + 4][j - 2] = '*';
                break;
            // orientat catre sud
            case 'S':
                mat[i][j] = '*';
                // linia 1
                mat[i - 1][j - 1] = '*';
                mat[i - 1][j] = '*';
                mat[i - 1][j + 1] = '*';
                // linia 2
                mat[i - 2][j] = '*';
                mat[i - 2][j + 3] = '*';
                mat[i - 2][j + 2] = '*';
                mat[i - 2][j + 1] = '*';
                mat[i - 2][j - 1] = '*';
                mat[i - 2][j - 2] = '*';
                mat[i - 2][j - 3] = '*';
                // linia 3
                mat[i - 3][j] = '*';
                // linia 4
                mat[i - 4][j] = '*';
                mat[i - 4][j + 2] = '*';
                mat[i - 4][j + 1] = '*';
                mat[i - 4][j - 1] = '*';
                mat[i - 4][j - 2] = '*';
                break;
            // orientat catre est
            case 'E':
                mat[i][j] = '*';
                // coloana 1
                mat[i - 1][j - 1] = '*';
                mat[i][j - 1] = '*';
                mat[i + 1][j - 1] = '*';
                // coloana 2
                mat[i][j - 2] = '*';
                mat[i + 1][j - 2] = '*';
                mat[i + 2][j - 2] = '*';
                mat[i + 3][j - 2] = '*';
                mat[i - 1][j - 2] = '*';
                mat[i - 2][j - 2] = '*';
                mat[i - 3][j - 2] = '*';
                // coloana 3
                mat[i][j - 3] = '*';
                // coloana 4
                mat[i + 1][j - 4] = '*';
                mat[i + 2][j - 4] = '*';
                mat[i][j - 4] = '*';
                mat[i - 1][j - 4] = '*';
                mat[i - 2][j - 4] = '*';
                break;
            // orientat catre vest
            case 'W':
                mat[i][j] = '*';
                // coloana 1
                mat[i - 1][j + 1] = '*';
                mat[i][j + 1] = '*';
                mat[i + 1][j + 1] = '*';
                // coloana 2
                mat[i][j + 2] = '*';
                mat[i + 1][j + 2] = '*';
                mat[i + 2][j + 2] = '*';
                mat[i + 3][j + 2] = '*';
                mat[i - 1][j + 2] = '*';
                mat[i - 2][j + 2] = '*';
                mat[i - 3][j + 2] = '*';
                // coloana 3
                mat[i][j + 3] = '*';
                // coloana 4
                mat[i + 1][j + 4] = '*';
                mat[i + 2][j + 4] = '*';
                mat[i][j + 4] = '*';
                mat[i - 1][j + 4] = '*';
                mat[i - 2][j + 4] = '*';
                break;
        }
        break;
    }
}

void SolveTask2(void *info, int nr_avioane, int N, char **mat) {
    int len = 0;
    unsigned short x = 0, y = 0;
    unsigned int v = 0;
    unsigned char dir = 0, cod[4];
    char type = 0;
    for (int k = 0; k < nr_avioane; k++) {
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
        type = (char)cod[0];
        // functia de creeare de avion
        EscapeTheMatrix(mat, x, y, dir, type);
    }
    // afisarea matricei
    for (int i = 0; i < N; i++) {
        for (int j =0; j < N; j++) {
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }
}
