#include <stdbool.h>
#include "./utils.h"
void EscapeTheMatrix2(char **mat, int i, int j, unsigned char dir, char type) {
switch (type) {
    case '1':
        switch (dir) {
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
    case '2':
        switch (dir) {
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

void SolveTask4(void *info, int nr_avioane, int nr_obstacole, int *a, int *b, int N) {
    int len = 0, nr = 0;
    unsigned short x = 0, y = 0;
    unsigned int v = 0;
    unsigned char dir = 0, cod[4];
    char type = 0;
    char **mat = calloc(N, sizeof(char*));
    bool ok = true;
    // indexam matricea cu "."
    for (int i = 0; i < N; i++) {
        mat[i] = calloc(N, sizeof(char));
        for (int j = 0; j < N; j++) {
            mat[i][j] = '.';
        }
    }
    for (int k = 0; k < nr_avioane; k++) {
        memcpy(&x, info + len, sizeof(unsigned short));
        len += sizeof(unsigned short);
        memcpy(&y, info + len, sizeof(unsigned short));
        len += sizeof(unsigned short);
        memcpy(&dir, info + len, sizeof(unsigned char));
        len += sizeof(unsigned char);
        memcpy(&cod, info + len, 4 * sizeof(unsigned char));
        len += 4 * sizeof(unsigned char);
        memcpy(&v, info + len, sizeof(unsigned int));
        len += sizeof(unsigned int);
        type = (char)cod[0];
        // adaugam avionul curent in matrice
        EscapeTheMatrix2(mat, x, y, dir, type);
        // adaugam in matrice obstacolele
        for (int i = 0; i < nr_obstacole; i++) {
            mat[a[i]][b[i]] = '@';
        }
        // consideram ca avionul nu are niciun obstacol in fata
        ok = true;
        /* daca in drumul avionul spre iesire (matricea specifica 
        in functie de caz ) se gaseste un caracter '@' inseamna ca
        avionul va lovi acel obstacol si nu putem lua in calcul 
        acel avion*/
        switch (type) {
            case '1':
                switch (dir) {
                    case 'N':
                        for (int i = 0; i <= x + 1 && ok; i++) {
                            for (int j = y - 2; j <= y + 2 && ok; j++) {
                                if (mat[i][j] == '@') {
                                    ok = false;
                                }
                            }
                        }
                        break;
                    case 'S':
                        for (int i = x - 1; i < N && ok; i++) {
                            for (int j = y - 2; j <= y + 2 && ok; j++) {
                                if (mat[i][j] == '@') {
                                    ok = false;
                                }
                            }
                        }
                        break;
                    case 'E':
                         for (int i = y - 2; i <= y + 2 && ok; i++) {
                            for (int j = x - 1 ; j < N && ok; j++) {
                                if (mat[i][j] == '@') {
                                    ok = false;
                                }
                            }
                        }
                        break;
                    case 'W':
                        for (int i = y - 2; i <= y + 2 && ok; i++) {
                            for (int j = 0 ; j < x + 1 && ok; j++) {
                                if (mat[i][j] == '@') {
                                    ok = false;
                                }
                            }
                        }
                        break;
                }
                break;
            case '2':
            switch (dir) {
                    case 'N':
                        for (int i = 0; i <= x + 2 && ok; i++) {
                                for (int j = y - 3; j <= y + 3 && ok; j++) {
                                    if (mat[i][j] == '@') {
                                        ok = false;
                                    }
                                }
                            }
                        break;
                    case 'S':
                        for (int i = x - 1; i < N && ok; i++) {
                                for (int j = y - 2; j <= y + 2 && ok; j++) {
                                    if (mat[i][j] == '@') {
                                        ok = false;
                                    }
                                }
                            }
                        break;
                    case 'E':
                        for (int i = y - 3; i <= y + 3 && ok; i++) {
                            for (int j = x - 2 ; j < N && ok; j++) {
                                if (mat[i][j] == '@') {
                                    ok = false;
                                }
                            }
                        }
                        break;
                    case 'W':
                        for (int i = y - 3; i <= y + 3 && ok; i++) {
                            for (int j = 0 ; j < x + 2 && ok; j++) {
                                if (mat[i][j] == '@') {
                                    ok = false;
                                }
                            }
                        }
                        break;
                }
                break;
        }
        // daca avionul nu atinge niciun obstacol, il innumaram
        if (ok == true) {
            nr++;
        }
    }
    printf("%d\n", nr);
}
