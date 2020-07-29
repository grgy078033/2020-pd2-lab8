#include <iostream>
#include <cstdlib>
#include <ctime>
#include <new>
#include "genMino.h"
using namespace std;
int main() {
    Mino * mino_ptr[50];
    try{
        for(int i=0;i<50;++i){
            mino_ptr[i] = genMino();
            cout << "mino_ptr[" << i << "] new success\n";
        }
    }catch(bad_alloc &memoryAlloc){
        cerr << "Exception: " << memoryAlloc.what() << endl;
    }
}
