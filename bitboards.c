#include    "stdio.h"
#include    "defs.h"

void printBitBoard(u64 bitBoard) {
    u64 shiftMe = 1ULL;

    int rank = 0;
    int file = 0;
    int square = 0;
    int square64 = 0;

    printf("\n");

    for(rank = RANK_8; rank >= RANK_1; --rank) {
        for( file = FILE_A ; file <= FILE_H ; ++file )
        {
            square = FILE_RANK_TO_SQAURE(file, rank);
            square64 = square120toSquare64[square];

            if( (shiftMe << square64) & bitBoard )
            {
               printf("x"); 
            }
            else {
                printf("-");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
