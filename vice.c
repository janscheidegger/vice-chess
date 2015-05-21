#include "stdio.h"
#include "defs.h"
#include "bitboards.h"

int main() {
    allInit();

    u64 playBitBoard = 0ULL;

    playBitBoard |= (1ULL << square120toSquare64[D2]);
    playBitBoard |= (1ULL << square120toSquare64[G2]);

    printf("Start:\n");
    printBitBoard(playBitBoard);

    
    return 0;
}

