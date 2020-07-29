#include <iostream>
#include <cstdlib>
#include "genMino.h"
#include <new>
#define NUM_MINO 4
#define MINO_S 0
#define MINO_I 1
#define MINO_J 2
#define MINO_L 3
Mino * genMino()
{
    int mino_type;
    Mino * ptr;

    mino_type = rand()&NUM_MINO;
    switch(mino_type) {
        case MINO_S:
            ptr = new Mino_S[500000000];
            break;
        case MINO_I:
            ptr = new Mino_I[500000000];
            break;
        case MINO_J:
            ptr = new Mino_J[500000000];
            break;
        case MINO_L:
            ptr = new Mino_L[500000000];
            break;
    }
    return ptr;
}
