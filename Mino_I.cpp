#include "Mino_I.h"
char I_arr [2][4][4] = {{{'0','0','1','0'},
                         {'0','0','1','0'},
                         {'0','0','1','0'},
                         {'0','0','1','0'}},
                         {{'0','0','0','0'},
                         {'0','0','0','0'},
                         {'1','1','1','1'},
                         {'0','0','0','0'}}};

Mino_I::Mino_I():Mino(1){}
void Mino_I::paint()
{
    for(int i=0;i<4;++i) {
        for(int j=0;j<4;++j)
            cout << I_arr[rotate_index][i][j];
        cout << endl;
    }
}
