#include    "defs.h"

int square120toSquare64[BRD_SQ_NUM];
int square64toSquare120[64];

void initSquare120To64() {

    int index = 0;
    int file = FILE_A;
    int rank = RANK_1;
    int square = A1;
    int square64 = 0;
    for(index = 0; index < BRD_SQ_NUM; ++index) {
        square120toSquare64[index] = 65;
    }

    for(index = 0; index < 64; ++index) {
        square64toSquare120[index] = 120;
    }

    for( rank = RANK_1 ; rank <= RANK_8 ; ++rank ) {
        for( file = FILE_A ; file <= FILE_H ; ++file ) {
            square = FILE_RANK_TO_SQAURE(file,rank);
            square64toSquare120[square64] = square;
            square120toSquare64[square] = square64;
            square64++;
        }
        
    }
}
    

void allInit() {
    initSquare120To64();
}
