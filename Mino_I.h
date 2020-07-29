#ifndef MINO_I_H
#define MINO_I_H
#include <iostream>
#include "Mino.h"
using namespace std;
class Mino_I: public Mino{
    public:
        Mino_I();
        virtual void paint();
};
#endif
