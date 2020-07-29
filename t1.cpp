#include <iostream>
#include <new>
using namespace std;
int main(){
    double *ptr[100000];
    try{
        for(int i = 0; i < 100000; ++i){
            ptr[i] = new double[500000000];
            cout << "ptr[" << i << "] new success\n";
        }
    }catch(bad_alloc &memoryAlloc){
        cerr << "Exception: " << memoryAlloc.what() << endl;
    }
}
