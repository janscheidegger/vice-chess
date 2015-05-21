#ifndef DEFS_H
#define DEFS_H

typedef unsigned long long u64;

#define     NAME            "VICE 1.0"
#define     BRD_SQ_NUM      120

#define     MAX_GAME_MOVES  2048

enum { EMPTY, wP, wN, wB, wR, wQ, wK, bP, bN, bB, bR, bQ, bK };
enum { FILE_A, FILE_B,FILE_C,FILE_D,FILE_E,FILE_F,FILE_G,FILE_H, FILE_NONE };
enum { RANK_1, RANK_2, RANK_3, RANK_4, RANK_5, RANK_6, RANK_7, RANK_8, RANK_NONE };

enum { WHITE, BLACK, BOTH }; 

enum {
    A1 = 21,B1, C1, D1, E1, G1, H1,
    A2 = 31,B2, C2, D2, E2, G2, H2,
    A3 = 41,B3, C3, D3, E3, G3, H3,
    A4 = 51,B4, C4, D4, E4, G4, H4,
    A5 = 61,B5, C5, D5, E5, G5, H5,
    A6 = 71,B6, C6, D6, E6, G6, H6,
    A7 = 81,B7, C7, D7, E7, G7, H7,
    A8 = 91,B8, C8, D8, E8, G8, H8, NO_SQ
};

enum { FALSE, TRUE };

enum { WHITE_KING_CASTLING = 1, WHITE_QUEEN_CASTLING = 2, BLACK_KING_CASTLING = 4, BLACK_QUEEN_CASTLING = 8 }; // Rochade ! 

typedef struct {
    int move;
    int castlePermission;
    int enPas;
    int fiftyMoveCounter;
    u64 positionKey;

} Undo;

typedef struct {

    int pieces[BRD_SQ_NUM];
    u64 pawns[3];

    int kingSquare[2];

    int side;
    int enPas;
    int fiftyMoveCounter;

    int ply;
    int historyPly;

    int castlePermission;

    u64 positionKey;

    int pieceNumber[13];
    int bigPieces[3];
    int majorPieces[3];
    int minorPieces[3];

    Undo history[MAX_GAME_MOVES];
    
} Board;



/* Globals */

extern int square120toSquare64[BRD_SQ_NUM];
extern int square64toSquare120[64];

/* Makros */
#define FILE_RANK_TO_SQAURE(f,r)    ( (21 + (f) ) +  ( (r) * 10 ) )

extern void allInit();

#endif
