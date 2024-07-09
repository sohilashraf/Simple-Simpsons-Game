#include <iostream>
#include <conio.h>

using namespace std;


void FillBounceGame(char B[][211]) {
    int c, r;
    for (r = 0; r < 1000; r++) {
        for (c = 0; c < 211; c++) {
            B[r][c] = ' ';
        }
    }


    for (c = 0; c < 211; c++) {
        B[999][c] = '~';
    }

    for (r = 0; r < 1000; r++) {
        B[r][0] = '|';
        B[r][210] = '|';
    }

    for (c = 1; c < 210; c++) {
        B[10][c] = 219;
    }
    for (c = 0; c < 100; c++) {
        B[950][c] = 219;
        B[949][c] = 219;
    }
    for (c = 140; c < 211; c++) {
        B[950][c] = 219;
        B[949][c] = 219;
    }

    for (c = 0; c < 80; c++) {
        B[970][c] = 219;
        B[969][c] = 219;
    }
    for (c = 120; c < 211; c++) {
        B[970][c] = 219;
        B[969][c] = 219;
    }
    for (c = 0; c < 150; c++) {
        B[900][c] = 219;
        B[899][c] = 219;
    }
    for (c = 190; c < 211; c++) {
        B[900][c] = 219;
        B[899][c] = 219;
    }

    for (c = 0; c < 50; c++) {
        B[870][c] = 219;
        B[869][c] = 219;
    }

    for (c = 90; c < 150; c++) {
        B[870][c] = 219;
        B[869][c] = 219;
    }

    for (c = 190; c < 211; c++) {
        B[870][c] = 219;
        B[869][c] = 219;
    }

    for (c = 0; c < 100; c++) {
        B[820][c] = 219;
        B[819][c] = 219;
    }

    for (c = 140; c < 211; c++) {
        B[820][c] = 219;
        B[819][c] = 219;
    }


    for (c = 0; c < 80; c++) {
        B[800][c] = 219;
        B[799][c] = 219;
    }

    for (c = 120; c < 211; c++) {
        B[800][c] = 219;
        B[799][c] = 219;
    }

    for (c = 0; c < 110; c++) {
        B[780][c] = 219;
        B[779][c] = 219;
    }

    for (c = 150; c < 211; c++) {
        B[780][c] = 219;
        B[779][c] = 219;
    }

    for (c = 0; c < 90; c++) {
        B[750][c] = 219;
        B[749][c] = 219;
    }

    for (c = 130; c < 211; c++) {
        B[750][c] = 219;
        B[749][c] = 219;
    }


}

void key(char b[][211], int r, int c) {
    b[r][c] = '.';
    b[r][c + 1] = '-';
    b[r][c + 2] = '-';
    b[r][c + 3] = '-';
    b[r][c + 4] = '.';
    b[r + 1][c + 4] = '|';
    b[r + 2][c + 4] = '|';
    b[r + 3][c + 4] = '|';
    b[r + 4][c + 4] = 39;

    b[r + 4][c + 3] = '-';
    b[r + 4][c + 2] = '-';
    b[r + 4][c + 1] = '-';
    b[r + 4][c] = '`';
    b[r + 3][c - 1] = '\\';
    b[r + 2][c - 1] = 'O';
    b[r + 1][c - 1] = '//';
    b[r + 2][c] = '(';
    b[r + 2][c + 1] = ')';

    b[r + 1][c + 5] = '\\';
    b[r + 1][c + 6] = '_';
    b[r + 1][c + 7] = '_';
    b[r + 1][c + 8] = '_';
    b[r + 1][c + 9] = '_';
    b[r + 1][c + 10] = '_';
    b[r + 1][c + 11] = '_';
    b[r + 1][c + 12] = '_';
    b[r + 1][c + 13] = '_';
    b[r + 1][c + 14] = '_';
    b[r + 1][c + 15] = '_';
    b[r + 2][c + 16] = ')';

    b[r + 3][c + 5] = '/';
    b[r + 2][c + 6] = '_';
    b[r + 2][c + 7] = '_';
    b[r + 2][c + 8] = '_';
    b[r + 2][c + 9] = '_';

    b[r + 3][c + 10] = '|';
    b[r + 4][c + 10] = '"';
    b[r + 3][c + 12] = '|';
    b[r + 4][c + 12] = '"';
    b[r + 4][c + 11] = '-';


    b[r + 2][c + 12] = '_';
    b[r + 3][c + 13] = '|';
    b[r + 4][c + 13] = '|';
    b[r + 4][c + 14] = '_';

    b[r + 4][c + 15] = '|';
    b[r + 3][c + 15] = '|';


}

void spiderB(char x[][211], int RS, int CS) {

    x[RS][CS] = '|';
    x[RS + 1][CS] = '|';
    x[RS + 2][CS] = '|';
    x[RS + 3][CS] = '|';
    x[RS + 4][CS] = '|';
    x[RS + 4][CS - 1] = '(';
    x[RS + 4][CS - 2] = '\\';
    x[RS + 4][CS + 1] = ')';
    x[RS + 4][CS + 2] = '/';
    x[RS + 5][CS] = '"';
    x[RS + 5][CS - 1] = '(';
    x[RS + 5][CS + 1] = ')';
    x[RS + 5][CS - 2] = '-';
    x[RS + 5][CS - 3] = '-';
    x[RS + 5][CS + 2] = '-';
    x[RS + 5][CS + 3] = '-';
    x[RS + 6][CS + 1] = '/';
    x[RS + 6][CS - 1] = '\\';


}

void pumpkin2(char x[][211], int RP, int CP) {
    x[RP][CP] = '\\';
    x[RP][CP + 1] = '\\';
    x[RP + 1][CP + 1] = '^';
    x[RP + 1][CP + 2] = 96;
    x[RP + 1][CP + 3] = 96;
    x[RP + 1][CP + 4] = 96;
    x[RP + 1][CP + 4] = '-';
    x[RP + 2][CP + 5] = '\\';
    x[RP + 3][CP + 5] = '/';
    x[RP + 4][CP + 4] = 96;
    x[RP + 4][CP + 3] = '.';
    x[RP + 4][CP + 2] = '.';
    x[RP + 4][CP + 1] = '.';
    x[RP + 4][CP] = '.';
    x[RP + 4][CP - 1] = '.';
    x[RP + 3][CP + 1] = 'W';
    x[RP + 4][CP - 2] = 96;
    x[RP + 2][CP - 3] = '/';
    x[RP + 3][CP - 1] = '"';
    x[RP + 3][CP - 3] = '\\';
    x[RP + 1][CP - 1] = '-';
    x[RP + 1][CP - 2] = '-';
    x[RP + 1][CP - 1] = 96;
    x[RP + 1][CP] = 96;
    x[RP + 2][CP - 1] = '/';
    x[RP + 3][CP + 3] = '"';
    x[RP + 2][CP] = '\\';
    x[RP + 2][CP + 3] = '\\';
    x[RP + 2][CP + 2] = '/';
}

void fire(char b[][211], int RF, int CF) {
    b[RF][CF] = '{';
    b[RF][CF + 1] = ',';
    b[RF][CF + 2] = '}';
    b[RF - 1][CF + 1] = '/';
    b[RF - 1][CF + 2] = '(';
    b[RF - 2][CF + 2] = ')';

}

void movefire(int& CF) {
    if (CF > 0 && CF - 10 > 0) {
        CF -= 10;
    }
    else {
        CF = 175;
    }
}

void RIP(char b[][211], int r, int c) {
    b[r][c] = '_';
    b[r + 1][c - 1] = 39;
    b[r + 1][c + 1] = 39;
    b[r + 1][c - 2] = ',';
    b[r + 1][c + 2] = ',';
    b[r + 2][c - 2] = '|';
    b[r + 2][c + 2] = '|';
    b[r + 2][c - 1] = 'R';
    b[r + 2][c] = 'I';
    b[r + 2][c + 1] = 'P';
    b[r + 2][c - 3] = ',';
    b[r + 2][c - 4] = ',';
    b[r + 2][c + 3] = ',';
    b[r + 2][c + 4] = '.';
}

void Bat(char B[][211], int RB, int CB) {
    B[RB][CB] = ',';
    B[RB + 1][CB] = '(';
    B[RB + 1][CB - 1] = '/';
    B[RB + 1][CB - 2] = '.';
    B[RB + 2][CB - 2] = ')';
    B[RB + 3][CB - 2] = 96;
    B[RB + 3][CB - 1] = ')';
    B[RB + 4][CB - 1] = 96;
    B[RB + 4][CB] = ')';
    B[RB + 4][CB + 1] = ',';
    B[RB + 4][CB + 2] = '-';
    B[RB + 4][CB + 3] = '(';
    B[RB + 4][CB + 4] = 126;
    B[RB + 4][CB + 5] = ')';
    B[RB + 5][CB + 3] = 39;
    B[RB + 5][CB + 4] = '"';
    B[RB + 5][CB + 5] = 39;
    B[RB + 4][CB + 6] = '-';
    B[RB + 4][CB + 7] = ',';
    B[RB + 4][CB + 8] = '(';
    B[RB + 4][CB + 9] = 96;
    B[RB + 3][CB + 9] = '(';
    B[RB + 3][CB + 10] = 39;
    B[RB + 2][CB + 10] = '(';
    B[RB + 1][CB + 10] = '.';
    B[RB + 1][CB + 9] = '\\';
    B[RB + 1][CB + 8] = ')';
    B[RB][CB + 8] = ',';
    B[RB + 2][CB + 7] = '/';
    B[RB + 2][CB + 6] = '\\';
    B[RB + 2][CB + 5] = '/';
    B[RB + 2][CB + 4] = '_';
    B[RB + 2][CB + 3] = '\\';
    B[RB + 2][CB + 2] = '/';
    B[RB + 2][CB + 1] = '\\';
    B[RB + 3][CB + 6] = ')';
    B[RB + 3][CB + 5] = '^';
    B[RB + 3][CB + 4] = 'Y';
    B[RB + 3][CB + 3] = '^';
    B[RB + 3][CB + 2] = '(';

}

void MoveBat(int& CB, int& dirB) {
    if (dirB == 1) {
        if (CB + 20 < 211)
            CB += 20;
        else
            dirB = -1;
    }
    else {
        if (CB - 20 > 0)
            CB -= 20;
        else
            dirB = 1;

    }
}

void star(char b[][211], int RS, int CS) {
    b[RS][CS] = ',';
    b[RS + 1][CS - 1] = '/';
    b[RS + 1][CS - 2] = '_';
    b[RS + 1][CS - 3] = '_';
    b[RS + 2][CS - 3] = '\\';
    b[RS + 3][CS - 3] = '/';
    b[RS + 3][CS - 2] = '_';
    b[RS + 4][CS - 1] = '\\';
    b[RS + 5][CS] = '*';
    b[RS + 4][CS + 1] = '/';
    b[RS + 3][CS + 2] = '_';
    b[RS + 3][CS + 3] = '\\';
    b[RS + 2][CS + 3] = '/';
    b[RS + 1][CS + 3] = '_';
    b[RS + 1][CS + 2] = '_';
    b[RS + 1][CS + 1] = '\\';
}

void DispToscreen2(char X[][211], int st, int end) {

    system("cls");

    for (int r = st; r < end; r++) {
        for (int c = 0; c < 211; c++) {
            cout << X[r][c];
        }
    }
}

void DrawHero2(char X[][211], int RH, int CH) {
    X[RH][CH] = '^';
    X[RH][CH + 1] = '^';
    X[RH][CH + 2] = '^';
    X[RH][CH + 3] = '^';
    X[RH][CH + 4] = '^';
    X[RH + 1][CH] = '|';
    X[RH + 2][CH] = '|';
    X[RH + 3][CH - 1] = '(';
    X[RH + 3][CH] = 'c';
    X[RH + 1][CH + 5] = '|';
    X[RH + 2][CH + 2] = '(';
    X[RH + 2][CH + 3] = 'o';
    X[RH + 2][CH + 4] = ')';
    X[RH + 2][CH + 5] = 'o';
    X[RH + 2][CH + 6] = ')';
    X[RH + 3][CH + 6] = '_';
    X[RH + 3][CH + 7] = ')';
    X[RH + 4][CH + 6] = ')';
    X[RH + 4][CH + 5] = '_';
    X[RH + 4][CH + 4] = '_';
    X[RH + 4][CH] = '|';
    X[RH + 5][CH] = 'L';
    X[RH + 4][CH] = '|';
    X[RH + 5][CH + 5] = '/';
    X[RH + 5][CH + 1] = '_';
    X[RH + 5][CH + 2] = '_';
    X[RH + 5][CH + 3] = '_';
    X[RH + 5][CH + 4] = '_';
    X[RH + 6][CH] = '/';
    X[RH + 6][CH + 5] = '\\';


    X[RH + 5][CH + 6] = '-';
    X[RH + 5][CH + 7] = '-';
    X[RH + 5][CH + 8] = 39;
    X[RH + 5][CH + 9] = 96;
    X[RH + 4][CH + 10] = '_';
    X[RH + 4][CH + 11] = '_';
    X[RH + 4][CH + 12] = ')';
    X[RH + 5][CH + 12] = '\\';
    X[RH + 6][CH + 13] = '\\';
    X[RH + 7][CH + 14] = '\\';
    X[RH + 7][CH + 13] = '.';
    X[RH + 7][CH + 12] = '-';
    X[RH + 7][CH + 11] = 39;
    X[RH + 6][CH + 10] = '_';
    X[RH + 6][CH + 9] = ',';
    X[RH + 6][CH + 8] = '-';
    X[RH + 6][CH + 7] = '-';
    X[RH + 6][CH + 6] = 39;


    X[RH + 5][CH - 1] = '-';
    X[RH + 5][CH - 2] = '-';
    X[RH + 5][CH - 3] = 39;
    X[RH + 5][CH - 4] = 96;
    X[RH + 4][CH - 5] = '_';
    X[RH + 4][CH - 6] = '_';
    X[RH + 4][CH - 7] = '(';
    X[RH + 5][CH - 7] = '/';
    X[RH + 6][CH - 8] = '/';
    X[RH + 7][CH - 9] = '/';
    X[RH + 7][CH - 8] = '.';
    X[RH + 7][CH - 7] = '-';
    X[RH + 7][CH - 6] = 39;
    X[RH + 6][CH - 5] = '_';
    X[RH + 6][CH - 4] = ',';
    X[RH + 6][CH - 3] = '-';
    X[RH + 6][CH - 2] = '-';
    X[RH + 6][CH - 1] = 39;


}

void MoveHero2(int& RH2, int& CH2, int& st2, int& end2, char ch, int& rl, int& rs) {
    if (ch == 'a' && CH2 - 6 > 0) {
        CH2 -= 5;
    }
    if (ch == 'd' && CH2 + 5 < 210) {
        CH2 += 5;
    }
    if (ch == 'w') {
        RH2 -= 2;
        st2 -= 2;
        end2 -= 2;
        rl -= 2;
        rs -= 2;
    }
}

void GhostLeft(char B[][211], int RG, int CG) {
    B[RG][CG + 1] = '_';
    B[RG + 1][CG + 1] = '"';
    B[RG + 1][CG + 2] = ')';
    B[RG + 1][CG] = '(';
    B[RG + 2][CG] = 39;
    B[RG + 2][CG + 2] = 39;
    B[RG + 2][CG + 3] = ')';
    B[RG + 2][CG - 1] = '(';
    B[RG + 3][CG + 3] = '\\';
    B[RG + 3][CG - 1] = '\\';
    B[RG + 4][CG + 2] = '^';
    B[RG + 4][CG + 1] = '^';
    B[RG + 4][CG] = '^';
    B[RG + 4][CG + 3] = '^';
}

void witch(char b[][211], int r, int c) {
    b[r][c] = '*';
    b[r + 1][c + 1] = '\\';
    b[r + 2][c + 2] = '\\';
    b[r + 2][c + 3] = '_';
    b[r + 2][c + 4] = '_';
    b[r + 3][c + 3] = '|';
    b[r + 4][c + 3] = '|';
    b[r + 4][c + 4] = '_';
    b[r + 4][c + 5] = '_';
    b[r + 5][c + 6] = '\\';
    b[r + 6][c + 7] = '\\';
    b[r + 7][c + 8] = '\\';
    b[r + 1][c - 1] = '/';
    b[r + 2][c - 2] = '/';
    b[r + 2][c - 3] = '_';
    b[r + 2][c - 4] = '_';
    b[r + 2][c - 1] = '_';
    b[r + 2][c] = '_';
    b[r + 2][c + 1] = '_';
    b[r + 3][c - 2] = '(';
    b[r + 3][c - 1] = 'O';
    b[r + 3][c] = ')';
    b[r + 4][c + 1] = '?';
    b[r + 4][c - 3] = '<';
    b[r + 5][c - 2] = '\\';
    b[r + 5][c - 1] = '@';
    b[r + 6][c - 2] = '/';
    b[r + 6][c - 1] = '/';
    b[r + 7][c - 3] = '/';
    b[r + 7][c - 2] = '/';
    b[r + 8][c - 3] = 'M';
    b[r + 8][c - 4] = '=';
    b[r + 8][c - 5] = '=';
    b[r + 8][c - 6] = '=';
    b[r + 8][c - 7] = '=';
    b[r + 8][c - 2] = '=';
    b[r + 8][c - 1] = '=';
    b[r + 8][c] = '=';
    b[r + 8][c + 1] = 'M';
    b[r + 8][c + 2] = '=';
    b[r + 8][c + 3] = '=';
    b[r + 8][c + 4] = '=';
    b[r + 7][c] = '|';
    b[r + 6][c] = '_';
    b[r + 6][c + 1] = '_';
    b[r + 7][c + 1] = '|';
    b[r + 7][c + 2] = '\\';
    b[r + 7][c + 3] = '_';
    b[r + 7][c + 4] = '_';
    b[r + 8][c + 5] = '|';
    b[r + 9][c + 5] = '\\';
    b[r + 10][c + 5] = '<';
    b[r + 10][c + 6] = '_';
    b[r + 10][c + 7] = '_';
    b[r + 10][c + 8] = '|';
    b[r + 9][c + 8] = '\\';
    b[r + 10][c + 9] = '_';
    b[r + 10][c + 10] = '|';
    b[r + 9][c + 10] = '\\';
    b[r + 8][c + 8] = '|';
    b[r + 8][c + 9] = '=';
    b[r + 8][c + 10] = '=';
    b[r + 8][c + 11] = '=';
    b[r + 8][c + 12] = '=';
    b[r + 8][c + 13] = '=';
    b[r + 7][c + 14] = '|';
    b[r + 8][c + 14] = '|';
    b[r + 9][c + 14] = '|';
    b[r + 7][c + 15] = '~';
    b[r + 7][c + 16] = '~';
    b[r + 7][c + 17] = '~';
    b[r + 7][c + 18] = '~';
    b[r + 7][c + 19] = '~';
    b[r + 7][c + 20] = '~';
    b[r + 8][c + 15] = '~';
    b[r + 8][c + 16] = '~';
    b[r + 8][c + 17] = '~';
    b[r + 8][c + 18] = '~';
    b[r + 8][c + 19] = '~';
    b[r + 8][c + 20] = '~';
    b[r + 9][c + 15] = '~';
    b[r + 9][c + 16] = '~';
    b[r + 9][c + 17] = '~';
    b[r + 9][c + 18] = '~';
    b[r + 9][c + 19] = '~';
    b[r + 9][c + 20] = '~';
    b[r + 10][c + 15] = '~';
    b[r + 10][c + 16] = '~';
    b[r + 10][c + 17] = '~';
    b[r + 10][c + 18] = '~';
    b[r + 10][c + 19] = '~';
    b[r + 10][c + 20] = '~';


}

void MoveGhhostL(int& CG, int& dirg) {
    if (dirg == 1) {
        if (CG + 10 < 90)
            CG += 10;
        else
            dirg = -1;
    }
    else {
        if (CG - 10 > 0)
            CG -= 10;
        else
            dirg = 1;

    }
}

void health2(char x[][211], int cs, int ce, int r) {

    for (cs; cs < ce; cs++) {
        x[r][cs] = 3;
    }

}

void checkHealth(char b[][211], int RH, int CH, int& FH) {
    //if (b[RM-1][CH] !=' '  || b[RM+7][CH +14] != ' ' || b[RM+7][CH - 9] != ' ' )
    //{
    //FH = 0;
    //}

    int k = 0;
    for (k; k < 8; k++) {
        for (int i = -9; i < 15; i++) {
            if (b[RH + k][CH + i] != ' ') {
                FH = 0;
            }
        }
    }
    if (RH < 750) {
        FH = 2;
    }


}

void loseHealth(int& cle, int& RH2, int& CH2, int& st2, int& end2, int& rs) {
    cle--;
    RH2 += 10;
    st2 += 10;
    end2 += 10;
    rs += 10;
}

void checkstar(char b[][211], int RH, int CH, int& FS, int& FH) {
    int k = 0;
    for (k; k < 8; k++) {
        for (int i = -9; i < 15; i++) {
            if (b[RH + k][CH + i] == '*') {
                FS = 1;
                FH = 1;
            }
        }
    }

}

void drawstars(char b[][211], int ss, int se, int r) {
    for (ss; ss < se; ss++) {
        b[r][ss] = 4;
    }
}

void collectstar(int& FS, int& se) {
    FS = 2;
    se++;
}


void FillMatrxiByMyBackGround(char X[][2000]) {
    int r = 0;
    int c = 0;
    int flagdoormet3ala2 = 1;
    for (r = 0; r < 50; r++) {
        for (c = 0; c < 2000; c++) {
            X[r][c] = ' ';
        }
    }
    for (r = 45; r < 46; r++) {
        for (c = 0; c < 2000; c++) {
            if (c >= 430 && c <= 580) {
                flagdoormet3ala2 = 0;
            }
            else {
                flagdoormet3ala2 = 1;
            }


            if (flagdoormet3ala2 != 0) {
                X[r][c] = 205;
            }
        }
    }


    for (int c = 0; c < 2000; c++) {
        X[0][c] = '~';
        X[49][c] = '~';
    }

    for (int r = 0; r < 50; r++) {
        X[r][0] = '|';
        X[r][1999] = '|';
    }
    /*for (c = 685; c < 700; c++)
    {
        X[40][c] = 219;
    }

    for (c = 700; c < 715; c++)
    {
        X[30][c] = 219;
    }
    */

    //before here don't touch


    //sohila's door
/*
    int rd = 34, cd = 400;
    X[rd][cd + 1] = '_';
    X[rd][cd + 2] = '_';
    X[rd][cd + 3] = '_';
    X[rd][cd + 4] = '_';
    X[rd][cd + 5] = '_';
    X[rd][cd + 6] = '_';
    X[rd][cd + 7] = '_';
    X[rd][cd + 8] = '_';
    X[rd][cd + 9] = '_';
    X[rd][cd + 10] = '_';
    X[rd][cd + 11] = '_';
    X[rd][cd + 12] = '_';
    X[rd][cd + 13] = '_';

    X[rd + 1][cd] = '|';
    X[rd + 2][cd] = '|';
    X[rd + 3][cd] = '|';
    X[rd + 4][cd] = '|';
    X[rd + 5][cd] = '|';
    X[rd + 6][cd] = '|';
    X[rd + 7][cd] = '|';
    X[rd + 8][cd] = '|';
    X[rd + 9][cd] = '|';
    X[rd + 10][cd] = '|';
    X[rd + 11][cd] = '|';


    X[rd + 1][cd + 3] = '_';
    X[rd + 1][cd + 4] = '_';
    X[rd + 1][cd + 5] = '_';


    X[rd + 2][cd + 2] = '|';
    X[rd + 3][cd + 2] = '|';
    X[rd + 4][cd + 2] = '|';
    X[rd + 4][cd + 3] = '_';
    X[rd + 4][cd + 4] = '_';
    X[rd + 4][cd + 5] = '_';

    X[rd + 5][cd + 3] = '_';
    X[rd + 5][cd + 4] = '_';
    X[rd + 5][cd + 5] = '_';

    X[rd + 6][cd + 2] = '|';
    X[rd + 7][cd + 2] = '|';
    X[rd + 8][cd + 2] = '|';
    X[rd + 9][cd + 2] = '|';
    X[rd + 10][cd + 2] = '|';
    X[rd + 10][cd + 3] = '_';
    X[rd + 10][cd + 4] = '_';
    X[rd + 10][cd + 5] = '_';

    X[rd + 6][cd + 6] = '|';
    X[rd + 7][cd + 6] = '|';
    X[rd + 8][cd + 6] = '|';
    X[rd + 9][cd + 6] = '|';
    X[rd + 10][cd + 6] = '|';




    X[rd + 2][cd + 6] = '|';
    X[rd + 3][cd + 6] = '|';
    X[rd + 4][cd + 6] = '|';


    X[rd + 1][cd + 14] = '|';
    X[rd + 2][cd + 14] = '|';
    X[rd + 3][cd + 14] = '|';
    X[rd + 4][cd + 14] = '|';
    X[rd + 5][cd + 14] = '|';
    X[rd + 6][cd + 14] = '|';
    X[rd + 7][cd + 14] = '|';
    X[rd + 8][cd + 14] = '|';
    X[rd + 9][cd + 14] = '|';
    X[rd + 10][cd + 14] = '|';
    X[rd + 11][cd + 14] = '|';

    X[rd + 2][cd + 12] = '|';
    X[rd + 3][cd + 12] = '|';
    X[rd + 4][cd + 12] = '|';

    X[rd + 1][cd + 9] = '_';
    X[rd + 1][cd + 10] = '_';
    X[rd + 1][cd + 11] = '_';

    X[rd + 2][cd + 8] = '|';
    X[rd + 3][cd + 8] = '|';
    X[rd + 4][cd + 8] = '|';


    X[rd + 4][cd + 10] = '_';
    X[rd + 4][cd + 11] = '_';
    X[rd + 4][cd + 9] = '_';


    X[rd + 5][cd + 13] = 'O';

    X[rd + 5][cd + 9] = '_';
    X[rd + 5][cd + 10] = '_';
    X[rd + 5][cd + 11] = '_';
    X[rd + 6][cd + 8] = '|';
    X[rd + 7][cd + 8] = '|';
    X[rd + 8][cd + 8] = '|';
    X[rd + 9][cd + 8] = '|';
    X[rd + 10][cd + 8] = '|';
    X[rd + 10][cd + 9] = '_';
    X[rd + 10][cd + 10] = '_';
    X[rd + 10][cd + 11] = '_';
    X[rd + 6][cd + 12] = '|';
    X[rd + 7][cd + 12] = '|';
    X[rd + 8][cd + 12] = '|';
    X[rd + 9][cd + 12] = '|';
    X[rd + 10][cd + 12] = '|';



    X[rd + 11][cd + 1] = '_';
    X[rd + 11][cd + 2] = '_';
    X[rd + 11][cd + 3] = '_';
    X[rd + 11][cd + 4] = '_';
    X[rd + 11][cd + 5] = '_';
    X[rd + 11][cd + 6] = '_';
    X[rd + 11][cd + 7] = '_';
    X[rd + 11][cd + 8] = '_';
    X[rd + 11][cd + 9] = '_';
    X[rd + 11][cd + 10] = '_';
    X[rd + 11][cd + 11] = '_';
    X[rd + 11][cd + 12] = '_';
    X[rd + 11][cd + 13] = '_';


    */







    ////////////fayrouz's code


    for (int r = 45; r > 25; r--) {

        X[r][170] = 186;
    }


    for (int r = 45; r > 25; r--) {

        X[r][180] = 186;
    }
    for (int c = 171; c < 180; c++) {
        X[43][c] = 205;
        X[40][c] = 205;
        X[37][c] = 205;
        X[34][c] = 205;
        X[31][c] = 205;
        X[28][c] = 205;

    }


    for (int c = 170; c < 270; c++) {
        X[25][c] = 220;
    }


    for (int r = 45; r > 25; r--) {

        X[r][170] = 186;
    }

    for (int r = 45; r > 25; r--) {

        X[r][180] = 186;
    }


    for (int c = 171; c < 180; c++) {
        X[43][c] = 205;
        X[40][c] = 205;
        X[37][c] = 205;
        X[34][c] = 205;
        X[31][c] = 205;
        X[28][c] = 205;

    }

    for (int c = 170; c < 270; c++) {
        X[25][c] = 220;
    }




    /*
    r = 25;
    X[r][220] = 'P'; X[r][221] = 'R'; X[r][222] = 'E'; X[r][223] = 'S'; X[r][224] = 'S'; X[r][225] = ' '; X[r][226] = 'G';
    X[r][227] = ' '; X[r][228] = 'T'; X[r][229] = 'O';   X[r][230] = ' '; X[r][231] = 'E'; X[r][232] = 'N'; X[r][233] = 'T';
    X[r][234] = 'E'; X[r][235] = 'R'; X[r][236] = ' '; X[r][237] = 'R'; X[r][238] = 'O'; X[r][239] = 'O'; X[r][240] = 'M';

*/

//X[44][20] = 1; idk whats this
    r = 30;
    int k = 430;
    int j = 450;
    //for (int i = 0; i < 3; i++)  //drawing steps
    {
        for (c = k; c < j; c++) {
            X[r][c] = 220;
        }
        //k += 100;
        //j += 100;
    }
    //for (int i = 0; i < 3; i++)  //drawing steps
    {
        r = 40;
        k = 410;
        j = 430;
        for (c = k; c < j; c++) {
            X[r][c] = 220;
        }
    }
    k = 580;
    j = 600;
    r = 30;
    for (c = k; c < j; c++) {
        X[r][c] = 220;
    }
    /*
    r = 35;
    for (c = 35; c < 50; c++)  //drawing steps
    {
        X[r][c] = 220;
    }
    r = 30;
    for (c = 50; c < 65; c++)  //drawing steps
    {
        X[r][c] = 220;
    }

    */
    /*
    for (c = 170; c < 185; c++)
    {
        X[4][c] = 3;
    }


    r = 30;
    c = 150;
    /*for (r = 30; r < 45; r++)
    {
        X[r][c] = 222;
    }

    c = 160;

    for (r = 30; r < 45; r++)
    {
        X[r][c] = 222;
    }


    for (r = 31; r < 44; r += 2)
    {
        for (c = 151; c < 160; c++)
        {
            X[r][c] = 22;
        }
    }

    r = 30;
        for (c = 161; c < 211; c++)
        {
            X[r][c] = 219;
        }


    r = 40;
    for (c = 70; c < 135; c++)
    {
        X[r][c] = 219;
    }

    c = 135;
    for (r = 40; r > 34; r--)
    {
        X[r][c] = 219;
    }
    r = 34;
    for (c = 135; c < 145; c++)
    {
        X[r][c] = 219;
    }

        */
}

void pumpkin(char x[][2000], int RP, int CP) {
    x[RP][CP] = '\\';
    x[RP][CP + 1] = '\\';
    x[RP + 1][CP + 1] = '^';
    x[RP + 1][CP + 2] = 96;
    x[RP + 1][CP + 3] = 96;
    x[RP + 1][CP + 4] = 96;
    x[RP + 1][CP + 4] = '-';
    x[RP + 2][CP + 5] = '\\';
    x[RP + 3][CP + 5] = '/';
    x[RP + 4][CP + 4] = 96;
    x[RP + 4][CP + 3] = '.';
    x[RP + 4][CP + 2] = '.';
    x[RP + 4][CP + 1] = '.';
    x[RP + 4][CP] = '.';
    x[RP + 4][CP - 1] = '.';
    x[RP + 3][CP + 1] = 'W';
    x[RP + 4][CP - 2] = 96;
    x[RP + 2][CP - 3] = '/';
    x[RP + 3][CP - 1] = '"';
    x[RP + 3][CP - 3] = '\\';
    x[RP + 1][CP - 1] = '-';
    x[RP + 1][CP - 2] = '-';
    x[RP + 1][CP - 1] = 96;
    x[RP + 1][CP] = 96;
    x[RP + 2][CP - 1] = '/';
    x[RP + 3][CP + 3] = '"';
    x[RP + 2][CP] = '\\';
    x[RP + 2][CP + 3] = '\\';
    x[RP + 2][CP + 2] = '/';
}

void MovePumpkin(char x[][2000], int& RP, int& CP, int& dirm) {
    if (dirm == 1) {
        if (CP < 265)
            CP += 10;
        else
            dirm = -1;
    }
    else {
        if (CP > 180)
            CP -= 10;
        else
            dirm = 1;

    }
}

// EDIT
void drawMeteor(char X[][2000], int RM, int CM)
{
    X[RM + 1][CM - 1] = ':';
    X[RM][CM] = '_';
    X[RM][CM + 1] = '_';
    X[RM + 1][CM + 2] = ':';
    X[RM + 1][CM + 1] = 78;
    X[RM + 2][CM + 2] = ':';
    X[RM + 2][CM + 1] = 65;
    X[RM + 2][CM - 1] = ':';
    X[RM + 3][CM + 2] = ':';
    X[RM + 3][CM + 1] = 83;
    X[RM + 3][CM - 1] = ':';
    X[RM + 4][CM + 2] = ':';
    X[RM + 4][CM + 1] = 65;
    X[RM + 4][CM - 1] = ':';
    X[RM + 4][CM + 0] = '_';
    X[RM + 5][CM + 0] = ':';
    X[RM + 5][CM + 1] = ':';
    X[RM + 6][CM + 0] = '\\';
    X[RM + 6][CM + 1] = '/';
    X[RM + 7][CM + 0] = '"';

}

void MoveMeteor(char X[][2000], int& RM, int& CM) {
    if (X[RM + 13][CM] == ' ' && X[RM + 13][CM - 1] == ' ' && X[RM + 13][CM + 1] == ' ' &&
        X[RM + 13][CM + 2] == ' ' &&
        X[RM + 13][CM + 3] == ' ' && X[RM + 13][CM + 4] == ' ' && X[RM + 13][CM - 1] != 205 &&
        X[RM + 13][CM] != 205 &&
        X[RM + 13][CM + 1] != 205 && X[RM + 13][CM + 2] != 205
        && X[RM + 14][CM] == ' ' && X[RM + 14][CM - 1] == ' ' && X[RM + 14][CM + 1] == ' ' &&
        X[RM + 14][CM + 2] == ' ' &&
        X[RM + 14][CM + 3] == ' ' && X[RM + 14][CM + 4] == ' ' && X[RM + 14][CM - 1] != 205 &&
        X[RM + 14][CM] != 205 &&
        X[RM + 14][CM + 1] != 205 && X[RM + 14][CM + 2] != 205) {
        RM += 2;
    }
    else {
        RM = 1;
    }
}

// EDIT
void drawPlanet(char X[][2000], int RP, int CP) {
    X[RP][CP] = '"';
    X[RP][CP + 1] = '"';
    X[RP][CP + 2] = '"';
    X[RP][CP + 3] = '"';
    X[RP][CP + 4] = '"';
    X[RP][CP + 5] = '"';
    X[RP][CP + 6] = '"';
    X[RP + 1][CP - 2] = '"';
    X[RP + 1][CP - 1] = '"';
    X[RP + 1][CP - 0] = '"';
    X[RP + 1][CP + 1] = '"';
    X[RP + 1][CP + 2] = '"';
    X[RP + 1][CP + 3] = '"';
    X[RP + 1][CP + 4] = '"';
    X[RP + 1][CP + 5] = '"';
    X[RP + 1][CP + 6] = '"';
    X[RP + 1][CP + 7] = '"';
    X[RP + 1][CP + 8] = '"';
    X[RP + 2][CP - 3] = '"';
    X[RP + 2][CP - 2] = '"';
    X[RP + 2][CP - 1] = '"';
    X[RP + 2][CP + 0] = '"';
    X[RP + 2][CP + 1] = '"';
    X[RP + 2][CP + 2] = '"';
    X[RP + 2][CP + 3] = '"';
    X[RP + 2][CP + 4] = '"';
    X[RP + 2][CP + 5] = '"';
    X[RP + 2][CP + 6] = '"';
    X[RP + 2][CP + 7] = '"';
    X[RP + 2][CP + 8] = '"';
    X[RP + 2][CP + 9] = '"';
    X[RP + 2][CP - 4] = 39;
    X[RP + 2][CP - 5] = 39;
    X[RP + 2][CP - 6] = 39;
    X[RP + 2][CP - 6] = ':';
    X[RP + 2][CP - 7] = ':';
    X[RP + 2][CP - 8] = '.';
    X[RP + 2][CP - 8] = ':';
    X[RP + 2][CP - 9] = ':';
    X[RP + 3][CP - 9] = 39;
    X[RP + 3][CP - 8] = ':';
    X[RP + 3][CP - 7] = ':';
    X[RP + 3][CP - 6] = '.';
    X[RP + 3][CP - 5] = '.';
    X[RP + 3][CP - 4] = '.';
    X[RP + 3][CP - 3] = '.';
    X[RP + 4][CP - 2] = 39;
    X[RP + 4][CP - 4] = 39;
    X[RP + 4][CP - 5] = 39;
    X[RP + 3][CP - 3] = '"';
    X[RP + 3][CP - 2] = '"';
    X[RP + 3][CP - 1] = '"';
    X[RP + 3][CP + 0] = '"';
    X[RP + 3][CP + 1] = '"';
    X[RP + 3][CP + 2] = '"';
    X[RP + 3][CP + 3] = '"';
    X[RP + 3][CP + 4] = '"';
    X[RP + 3][CP + 5] = '"';
    X[RP + 3][CP + 6] = '"';
    X[RP + 3][CP + 7] = '"';
    X[RP + 3][CP + 8] = '"';
    X[RP + 3][CP + 9] = '"';
    X[RP + 4][CP - 2] = '"';
    X[RP + 4][CP - 1] = '"';
    X[RP + 4][CP - 0] = '"';
    X[RP + 4][CP + 1] = '"';
    X[RP + 4][CP + 2] = '"';
    X[RP + 4][CP + 3] = '"';
    X[RP + 4][CP + 4] = '"';
    X[RP + 4][CP + 5] = '"';
    X[RP + 4][CP + 6] = '"';
    X[RP + 4][CP + 7] = '"';
    X[RP + 4][CP + 8] = '"';
    X[RP + 5][CP] = '"';
    X[RP + 5][CP + 1] = '"';
    X[RP + 5][CP + 2] = '"';
    X[RP + 5][CP + 3] = '"';
    X[RP + 5][CP + 4] = '"';
    X[RP + 5][CP + 5] = '"';
    X[RP + 5][CP + 6] = '"';
    X[RP + 2][CP + 10] = 39;
    X[RP + 2][CP + 11] = 39;
    X[RP + 2][CP + 12] = 39;
    X[RP + 2][CP + 12] = ':';
    X[RP + 2][CP + 13] = ':';
    X[RP + 2][CP + 14] = '.';
    X[RP + 2][CP + 14] = ':';
    X[RP + 2][CP + 15] = ':';
    X[RP + 3][CP + 16] = 39;
    X[RP + 3][CP + 15] = ':';
    X[RP + 3][CP + 14] = ':';
    X[RP + 3][CP + 13] = '.';
    X[RP + 3][CP + 12] = '.';
    X[RP + 3][CP + 11] = '.';
    X[RP + 3][CP + 10] = '.';
    X[RP + 4][CP + 10] = 39;
    X[RP + 4][CP + 11] = 39;

}

void spider(char x[][2000], int RS, int CS) {

    x[RS][CS] = '|';
    x[RS + 1][CS] = '|';
    x[RS + 2][CS] = '|';
    x[RS + 3][CS] = '|';
    x[RS + 4][CS] = '|';
    x[RS + 4][CS - 1] = '(';
    x[RS + 4][CS - 2] = '\\';
    x[RS + 4][CS + 1] = ')';
    x[RS + 4][CS + 2] = '/';
    x[RS + 5][CS] = '"';
    x[RS + 5][CS - 1] = '(';
    x[RS + 5][CS + 1] = ')';
    x[RS + 5][CS - 2] = '-';
    x[RS + 5][CS - 3] = '-';
    x[RS + 5][CS + 2] = '-';
    x[RS + 5][CS + 3] = '-';
    x[RS + 6][CS + 1] = '/';
    x[RS + 6][CS - 1] = '\\';
}

void MoveSpider(int& RS, int& CS, int& dirS) {
    if (dirS == 1) {
        if (CS < 269)
            CS += 10;
        else dirS = -1;
    }
    else {
        if (CS > 190)
            CS -= 10;
        else
            dirS = 1;

    }
}

void DispToscreen(char X[][2000], int st, int end) {

    system("cls");

    for (int r = 0; r < 50; r++) {
        for (int c = st; c < end; c++) {
            cout << X[r][c];
        }
    }
}


void losehealthBG(char X[][2000], int CH, int RH, int ctH, int& fg) {
    /*
    int r, c;
    for (r = RM; r < RM + 13; r++)
    {
        for (c = CH - 2; c < CH + 15; c++)
        {
            if (X[r][c] == '$')
            {
                ctH--;
                fg = 0;
            }
        }
    }
    */

}

void DrawSee(char X[][2000], int RS, int CS) {
    X[RS][CS + 1] = 205;
    X[RS][CS + 2] = 205;
    X[RS][CS + 3] = 205;
    X[RS][CS + 4] = 205;
    X[RS][CS + 5] = 205;
    X[RS][CS + 6] = 205;
    X[RS][CS + 7] = 205;
    X[RS][CS + 8] = 205;
    X[RS][CS + 9] = 205;
    X[RS][CS + 10] = 205;
    X[RS + 1][CS + 11] = 96;
    X[RS + 1][CS + 12] = 126;
    X[RS + 1][CS + 13] = '^';

    int k;
    for (int i = 14; i < 150; i += 4) {
        X[RS + 1][CS + i] = 126;
    }

    for (int i = 15; i < 149; i += 4) {
        X[RS + 1][CS + i] = ' ';
    }

    for (int i = 16; i < 148; i += 4) {
        X[RS + 1][CS + i] = '^';
    }

    for (int i = 17; i < 147; i += 4) {
        X[RS + 1][CS + i] = ' ';
    }

    for (int i = 18; i < 146; i += 4) {
        X[RS + 2][CS + i] = 126;
    }

    for (int i = 19; i < 145; i += 4) {
        X[RS + 2][CS + i] = ' ';
    }

    for (int i = 20; i < 144; i += 4) {
        X[RS + 2][CS + i] = '^';
    }

    for (int i = 21; i < 143; i += 4) {
        X[RS + 2][CS + i] = ' ';
    }


    for (int i = 22; i < 142; i += 4) {
        X[RS + 3][CS + i] = 126;
    }

    for (int i = 23; i < 141; i += 4) {
        X[RS + 3][CS + i] = ' ';
    }

    for (int i = 24; i < 140; i += 4) {
        X[RS + 3][CS + i] = '^';
    }

    for (int i = 25; i < 139; i += 4) {
        X[RS + 3][CS + i] = ' ';
    }

    X[RS][CS + 150] = 205;
    X[RS][CS + 151] = 205;
    X[RS][CS + 152] = 205;
    X[RS][CS + 153] = 205;
    X[RS][CS + 154] = 205;
    X[RS][CS + 155] = 205;
    X[RS][CS + 156] = 205;
    X[RS][CS + 157] = 205;
    X[RS][CS + 158] = 205;

}

void drawhealth(char X[][2000], int CLFS, int CLFE) {
    for (CLFS; CLFS < CLFE; CLFS++) {
        X[3][CLFS] = 3;
    }

}


// EDIT
void checkhealthSpace(char x[][2000], int RH, int CH, int& st, int& end, int& CLFS, int& CLFE, int& flh) {
    int k = 0;
    for (k = 0; k < 9; k++) {
        for (int i = -14; i < 17; i++) {
            if (x[RH + k][CH + i] == 'W' || x[RH + k][CH + i] == ':' || x[RH + k][CH + i] == '"' ||
                x[RH + k][CH + i] == 22 || x[RH + k][CH + i] == '$' || x[RH + k][CH + i] == '*') {
                flh = 0;
            }
        }
    }
}

void checkhealth(char x[][2000], int RH, int CH, int& st, int& end, int& CLFS, int& CLFE, int& flh) {
    if (CH > 770 && CH < 1500) return checkhealthSpace(x, RH, CH, st, end, CLFS, CLFE, flh);
    int k = 0;
    for (k = 0; k < 15; k++) {
        for (int i = -1; i < 8; i++) {
            if (x[RH + k][CH + i] == 'W' || x[RH + k][CH + i] == ':' || x[RH + k][CH + i] == '"' ||
                x[RH + k][CH + i] == 22 || x[RH + k][CH + i] == '$') {

                flh = 0;


            }
        }
    }
}


void DrawShip(char X[][2000], int RSH, int CSH) {
    X[RSH][CSH] = '\\';
    X[RSH][CSH + 1] = '-';
    X[RSH][CSH + 2] = '-';
    X[RSH][CSH + 3] = '-';
    X[RSH][CSH + 4] = '-';
    X[RSH][CSH + 5] = '-';
    X[RSH][CSH + 6] = '-';
    X[RSH][CSH + 7] = '-';
    X[RSH][CSH + 8] = '-';
    X[RSH][CSH + 9] = '-';
    X[RSH][CSH + 10] = '-';
    X[RSH][CSH + 11] = '-';
    X[RSH][CSH + 12] = '-';
    X[RSH][CSH + 13] = '-';
    X[RSH][CSH + 14] = '-';
    X[RSH][CSH + 15] = '-';
    X[RSH][CSH + 16] = '-';
    X[RSH][CSH + 17] = '-';
    X[RSH][CSH + 18] = '-';
    X[RSH][CSH + 19] = '-';
    X[RSH][CSH + 20] = '-';
    X[RSH][CSH + 21] = '-';
    X[RSH][CSH + 22] = '-';

    X[RSH][CSH + 23] = '/';
    X[RSH - 1][CSH + 5] = '_';
    X[RSH - 1][CSH + 6] = '_';
    X[RSH - 1][CSH + 7] = '_';
    X[RSH - 1][CSH + 8] = '_';
    X[RSH - 1][CSH + 9] = '_';
    X[RSH - 1][CSH + 10] = '_';
    X[RSH - 1][CSH + 11] = '_';

    X[RSH - 1][CSH + 12] = '|';
    X[RSH - 2][CSH + 12] = '|';
    X[RSH - 3][CSH + 12] = '|';
    X[RSH - 4][CSH + 12] = '|';
    X[RSH - 5][CSH + 12] = '|';
    X[RSH - 6][CSH + 12] = '|';
    X[RSH - 7][CSH + 12] = '|';
    X[RSH - 8][CSH + 12] = '|';

    X[RSH - 1][CSH + 4] = '/';
    X[RSH - 2][CSH + 5] = '/';
    X[RSH - 3][CSH + 6] = '/';
    X[RSH - 4][CSH + 7] = '/';
    X[RSH - 5][CSH + 8] = '/';
    X[RSH - 6][CSH + 9] = '/';
    X[RSH - 7][CSH + 10] = '/';
    X[RSH - 8][CSH + 11] = '/';

    X[RSH - 1][CSH + 13] = '_';
    X[RSH - 1][CSH + 14] = '_';
    X[RSH - 1][CSH + 15] = '_';
    X[RSH - 1][CSH + 16] = '_';
    X[RSH - 1][CSH + 17] = '_';
    X[RSH - 1][CSH + 18] = '_';
    X[RSH - 1][CSH + 19] = '_';


    X[RSH - 10][CSH + 10] = 'V';
    X[RSH - 12][CSH + 8] = 'V';
    X[RSH - 8][CSH + 4] = 'V';
    X[RSH - 7][CSH + 1] = 'V';
    X[RSH - 12][CSH + 0] = 'V';
    X[RSH - 11][CSH - 14] = 'V';
    X[RSH - 7][CSH + 22] = 'V';
    X[RSH - 10][CSH + 6] = 'V';
    X[RSH - 11][CSH - 6] = 'V';
    X[RSH - 10][CSH - 7] = 'V';
    X[RSH - 9][CSH - 11] = 'V';
    X[RSH - 8][CSH - 13] = 'V';

    X[RSH - 10][CSH + 20] = 'V';
    X[RSH - 12][CSH + 25] = 'V';
    X[RSH - 9][CSH + 25] = 'V';
    X[RSH - 8][CSH + 30] = 'V';
    X[RSH - 7][CSH + 40] = 'V';
    X[RSH - 12][CSH + 45] = 'V';
    X[RSH - 11][CSH + 30] = 'V';
    X[RSH - 7][CSH + 45] = 'V';
    X[RSH - 10][CSH + 45] = 'V';
    X[RSH - 12][CSH + 50] = 'V';
    X[RSH - 11][CSH + 66] = 'V';
    X[RSH - 10][CSH + 75] = 'V';
    X[RSH - 9][CSH + 71] = 'V';
    X[RSH - 8][CSH + 60] = 'V';

}


void drawroom(char X[][2000]) {
    int r = 2;
    int c = 300;


    for (c = 300; c <= 370; c++) {
        X[r][c] = '8';
    }
    c = 300;

    X[r + 1][c + 0] = '8';
    X[r + 1][c + 1] = '8';

    X[r + 1][c + 2] = '.';
    X[r + 1][c + 3] = '.';
    X[r + 1][c + 4] = '_';
    X[r + 1][c + 5] = '|';
    X[r + 1][c + 12] = '|';
    X[r + 1][c + 14] = 96;
    X[r + 1][c + 15] = '-';
    X[r + 1][c + 16] = '.';
    X[r + 1][c + 19] = '|';
    X[r + 1][c + 21] = 96;
    X[r + 1][c + 22] = '.';
    X[r + 1][c + 25] = '-';
    X[r + 1][c + 26] = '_';
    X[r + 1][c + 27] = '-';
    X[r + 1][c + 28] = ' ';
    X[r + 1][c + 30] = ' ';
    X[r + 1][c + 31] = '-';
    X[r + 1][c + 32] = ' ';
    X[r + 1][c + 35] = ' ';
    X[r + 1][c + 36] = '-';
    X[r + 1][c + 39] = '_';
    X[r + 1][c + 40] = '-';
    X[r + 1][c + 42] = '-';
    X[r + 1][c + 43] = '_';
    X[r + 1][c + 45] = '-';
    X[r + 1][c + 48] = '.';
    X[r + 1][c + 49] = 39;
    X[r + 1][c + 50] = ' | ';
    X[r + 1][c + 54] = ' | ';
    X[r + 1][c + 55] = '.';
    X[r + 1][c + 56] = 39;
    X[r + 1][c + 57] = ' | ';
    X[r + 1][c + 63] = '|';
    X[r + 1][c + 66] = '_';
    X[r + 1][c + 67] = '.';
    X[r + 1][c + 68] = '.';
    X[r + 1][c + 69] = '8';
    X[r + 1][c + 70] = '8';
    X[r + 2][c + 0] = '8';
    X[r + 2][c + 1] = '8';
    X[r + 2][c + 5] = 96;
    X[r + 2][c + 6] = '-';
    X[r + 2][c + 7] = '.';
    X[r + 2][c + 8] = '.';
    X[r + 2][c + 9] = '_';
    X[r + 2][c + 12] = '|';
    X[r + 2][c + 17] = '|';
    X[r + 2][c + 18] = 96;
    X[r + 2][c + 19] = '!';
    X[r + 2][c + 22] = '|';
    X[r + 2][c + 23] = 96;
    X[r + 2][c + 24] = '.';
    X[r + 2][c + 27] = '-';
    X[r + 2][c + 28] = ' ';
    X[r + 2][c + 30] = '-';
    X[r + 2][c + 31] = ' ';
    X[r + 2][c + 32] = ' ';
    X[r + 2][c + 34] = '-';
    X[r + 2][c + 35] = ' ';
    X[r + 2][c + 37] = ' ';
    X[r + 2][c + 38] = '-';
    X[r + 2][c + 40] = ' ';
    X[r + 2][c + 41] = '-';
    X[r + 2][c + 42] = '_';
    X[r + 2][c + 43] = '-';
    X[r + 2][c + 46] = '.';
    X[r + 2][c + 47] = 39;
    X[r + 2][c + 50] = ' | ';
    X[r + 2][c + 51] = '.';
    X[r + 2][c + 52] = ';';
    X[r + 2][c + 53] = 39;
    X[r + 2][c + 57] = '|';
    X[r + 2][c + 61] = '_';
    X[r + 2][c + 62] = '.';
    X[r + 2][c + 63] = '!';
    X[r + 2][c + 64] = '-';
    X[r + 2][c + 65] = 39;
    X[r + 2][c + 66] = '|';
    X[r + 2][c + 69] = '8';
    X[r + 2][c + 70] = '8';
    X[r + 3][c + 0] = '8';
    X[r + 3][c + 1] = '8';
    X[r + 3][c + 8] = '|';
    X[r + 3][c + 10] = 96;
    X[r + 3][c + 11] = '-';
    X[r + 3][c + 12] = '!';
    X[r + 3][c + 13] = '.';
    X[r + 3][c + 14] = '_';
    X[r + 3][c + 17] = '|';
    X[r + 3][c + 20] = 96;
    X[r + 3][c + 21] = ';';
    X[r + 3][c + 22] = '!';
    X[r + 3][c + 25] = ';';
    X[r + 3][c + 26] = '.';
    X[r + 3][c + 28] = '_';
    X[r + 3][c + 29] = ' ';
    X[r + 3][c + 30] = ' ';
    X[r + 3][c + 31] = '_';
    X[r + 3][c + 32] = ' ';
    X[r + 3][c + 33] = ' ';
    X[r + 3][c + 34] = '_';
    X[r + 3][c + 35] = ' ';
    X[r + 3][c + 36] = ' ';
    X[r + 3][c + 37] = '_';
    X[r + 3][c + 38] = ' ';
    X[r + 3][c + 39] = ' ';
    X[r + 3][c + 40] = '_';
    X[r + 3][c + 41] = ' ';
    X[r + 3][c + 42] = ' ';
    X[r + 3][c + 44] = ',';
    X[r + 3][c + 45] = 39;
    X[r + 3][c + 46] = ' | ';
    X[r + 3][c + 48] = '.';
    X[r + 3][c + 49] = '-';
    X[r + 3][c + 50] = 39;
    X[r + 3][c + 52] = ' | ';
    X[r + 3][c + 56] = '_';
    X[r + 3][c + 57] = '!';
    X[r + 3][c + 58] = '.';
    X[r + 3][c + 59] = 'i';
    X[r + 3][c + 60] = 39;
    X[r + 3][c + 66] = ' | ';
    X[r + 3][c + 69] = '8';
    X[r + 3][c + 70] = '8';
    X[r + 4][c + 0] = '8';
    X[r + 4][c + 1] = '8';
    X[r + 4][c + 2] = '.';
    X[r + 4][c + 3] = '.';
    X[r + 4][c + 4] = ' ';
    X[r + 4][c + 5] = ' ';
    X[r + 4][c + 8] = '|';
    X[r + 4][c + 14] = '|';
    X[r + 4][c + 15] = 96;
    X[r + 4][c + 16] = '-';
    X[r + 4][c + 17] = '!';
    X[r + 4][c + 18] = '.';
    X[r + 4][c + 19] = '_';
    X[r + 4][c + 21] = '|';
    X[r + 4][c + 23] = 96;
    X[r + 4][c + 24] = '.';
    X[r + 4][c + 25] = '|';
    X[r + 4][c + 27] = '|';
    X[r + 4][c + 28] = '_';
    X[r + 4][c + 29] = ' ';
    X[r + 4][c + 30] = ' ';
    X[r + 4][c + 31] = '_';
    X[r + 4][c + 32] = ' ';
    X[r + 4][c + 33] = ' ';
    X[r + 4][c + 34] = '_';
    X[r + 4][c + 35] = ' ';
    X[r + 4][c + 36] = ' ';
    X[r + 4][c + 37] = '_';
    X[r + 4][c + 38] = ' ';
    X[r + 4][c + 39] = ' ';
    X[r + 4][c + 40] = '_';
    X[r + 4][c + 41] = ' ';
    X[r + 4][c + 42] = ' ';
    X[r + 4][c + 43] = '|';
    X[r + 4][c + 44] = '|';
    X[r + 4][c + 45] = '.';
    X[r + 4][c + 46] = '"';
    X[r + 4][c + 47] = 39;
    X[r + 4][c + 48] = ' | ';
    X[r + 4][c + 51] = '_';
    X[r + 4][c + 52] = '!';
    X[r + 4][c + 53] = '.';
    X[r + 4][c + 54] = ';';
    X[r + 4][c + 55] = 39;
    X[r + 4][c + 59] = ' | ';
    X[r + 4][c + 65] = '_';
    X[r + 4][c + 66] = '|';
    X[r + 4][c + 67] = '.';
    X[r + 4][c + 68] = '.';
    X[r + 4][c + 69] = '8';
    X[r + 4][c + 70] = '8';
    X[r + 5][c + 0] = '8';
    X[r + 5][c + 1] = '8';
    X[r + 5][c + 5] = '|';
    X[r + 5][c + 6] = 96;
    X[r + 5][c + 7] = 96;
    X[r + 5][c + 8] = '"';
    X[r + 5][c + 9] = '.';
    X[r + 5][c + 10] = '.';
    X[r + 5][c + 11] = ' ';
    X[r + 5][c + 12] = ' ';
    X[r + 5][c + 14] = '|';
    X[r + 5][c + 19] = '|';
    X[r + 5][c + 20] = 96;
    X[r + 5][c + 21] = '"';
    X[r + 5][c + 22] = ';';
    X[r + 5][c + 23] = '.';
    X[r + 5][c + 24] = '|';
    X[r + 5][c + 26] = 'i';
    X[r + 5][c + 27] = '|';
    X[r + 5][c + 28] = '_';
    X[r + 5][c + 29] = '|';
    X[r + 5][c + 30] = 'M';
    X[r + 5][c + 31] = 'M';
    X[r + 5][c + 32] = 'M';
    X[r + 5][c + 33] = 'M';
    X[r + 5][c + 34] = 'M';
    X[r + 5][c + 35] = 'M';
    X[r + 5][c + 36] = 'M';
    X[r + 5][c + 37] = 'M';
    X[r + 5][c + 38] = 'M';
    X[r + 5][c + 39] = 'M';
    X[r + 5][c + 40] = 'M';
    X[r + 5][c + 41] = '|';
    X[r + 5][c + 42] = '_';
    X[r + 5][c + 43] = '|';
    X[r + 5][c + 44] = 39;
    X[r + 5][c + 45] = ' | ';
    X[r + 5][c + 47] = '_';
    X[r + 5][c + 48] = '!';
    X[r + 5][c + 49] = '-';
    X[r + 5][c + 50] = '|';
    X[r + 5][c + 54] = '|';
    X[r + 5][c + 58] = '_';
    X[r + 5][c + 59] = '|';
    X[r + 5][c + 60] = '.';
    X[r + 5][c + 61] = '.';
    X[r + 5][c + 62] = '-';
    X[r + 5][c + 63] = '|';
    X[r + 5][c + 64] = 39;
    X[r + 5][c + 69] = '8';
    X[r + 5][c + 70] = '8';
    X[r + 6][c + 0] = '8';
    X[r + 6][c + 1] = '8';
    X[r + 6][c + 5] = '|';
    X[r + 6][c + 12] = '|';
    X[r + 6][c + 13] = 96;
    X[r + 6][c + 14] = 96;
    X[r + 6][c + 15] = '-';
    X[r + 6][c + 16] = '-';
    X[r + 6][c + 17] = '.';
    X[r + 6][c + 18] = '.';
    X[r + 6][c + 19] = '|';
    X[r + 6][c + 20] = '_';
    X[r + 6][c + 22] = '|';
    X[r + 6][c + 24] = 96;
    X[r + 6][c + 25] = ';';
    X[r + 6][c + 26] = '!';
    X[r + 6][c + 27] = '|';
    X[r + 6][c + 28] = 'l';
    X[r + 6][c + 29] = '|';
    X[r + 6][c + 30] = 'M';
    X[r + 6][c + 31] = 'M';
    X[r + 6][c + 32] = 'o';
    X[r + 6][c + 33] = 'M';
    X[r + 6][c + 34] = 'M';
    X[r + 6][c + 35] = 'M';
    X[r + 6][c + 36] = 'M';
    X[r + 6][c + 37] = 'o';
    X[r + 6][c + 38] = 'M';
    X[r + 6][c + 39] = 'M';
    X[r + 6][c + 40] = 'M';
    X[r + 6][c + 41] = '|';
    X[r + 6][c + 42] = '1';
    X[r + 6][c + 43] = '|';
    X[r + 6][c + 44] = '.';
    X[r + 6][c + 45] = 39;
    X[r + 6][c + 46] = 'j';
    X[r + 6][c + 50] = ' | ';
    X[r + 6][c + 51] = '_';
    X[r + 6][c + 52] = '.';
    X[r + 6][c + 53] = '.';
    X[r + 6][c + 54] = '!';
    X[r + 6][c + 55] = '-';
    X[r + 6][c + 56] = 39;
    X[r + 6][c + 57] = '|';
    X[r + 6][c + 63] = '|';
    X[r + 6][c + 69] = '8';
    X[r + 6][c + 70] = '8';
    X[r + 7][c + 0] = '8';
    X[r + 7][c + 1] = '8';
    X[r + 7][c + 5] = '|';
    X[r + 7][c + 12] = '|';
    X[r + 7][c + 17] = '|';
    X[r + 7][c + 21] = '|';
    X[r + 7][c + 22] = 96;
    X[r + 7][c + 23] = '-';
    X[r + 7][c + 24] = ',';
    X[r + 7][c + 25] = '!';
    X[r + 7][c + 26] = '_';
    X[r + 7][c + 27] = '|';
    X[r + 7][c + 28] = '_';
    X[r + 7][c + 29] = '|';
    X[r + 7][c + 30] = 'M';
    X[r + 7][c + 31] = 'M';
    X[r + 7][c + 32] = 'M';
    X[r + 7][c + 33] = 'M';
    X[r + 7][c + 34] = 'P';
    X[r + 7][c + 35] = 39;
    X[r + 7][c + 36] = 'Y';
    X[r + 7][c + 37] = 'M';
    X[r + 7][c + 38] = 'M';
    X[r + 7][c + 39] = 'M';
    X[r + 7][c + 40] = 'M';
    X[r + 7][c + 41] = '|';
    X[r + 7][c + 42] = '_';
    X[r + 7][c + 43] = '|';
    X[r + 7][c + 44] = '|';
    X[r + 7][c + 45] = '.';
    X[r + 7][c + 46] = '!';
    X[r + 7][c + 47] = '-';
    X[r + 7][c + 48] = ';';
    X[r + 7][c + 49] = 39;
    X[r + 7][c + 52] = ' | ';
    X[r + 7][c + 57] = '|';
    X[r + 7][c + 63] = '|';
    X[r + 7][c + 69] = '8';
    X[r + 7][c + 70] = '8';
    X[r + 8][c + 0] = '8';
    X[r + 8][c + 1] = '8';
    X[r + 8][c + 2] = ' ';
    X[r + 8][c + 3] = ' ';
    X[r + 8][c + 4] = '_';
    X[r + 8][c + 5] = '|';
    X[r + 8][c + 6] = ' ';
    X[r + 8][c + 7] = ' ';
    X[r + 8][c + 8] = ' ';
    X[r + 8][c + 9] = ' ';
    X[r + 8][c + 10] = '_';
    X[r + 8][c + 11] = ' ';
    X[r + 8][c + 12] = '|';
    X[r + 8][c + 13] = ' ';
    X[r + 8][c + 14] = ' ';
    X[r + 8][c + 15] = ' ';
    X[r + 8][c + 16] = '_';
    X[r + 8][c + 17] = '!';
    X[r + 8][c + 18] = '.';
    X[r + 8][c + 19] = ',';
    X[r + 8][c + 20] = '.';
    X[r + 8][c + 21] = '!';
    X[r + 8][c + 22] = ',';
    X[r + 8][c + 23] = '.';
    X[r + 8][c + 24] = '!';
    X[r + 8][c + 25] = ',';
    X[r + 8][c + 26] = '!';
    X[r + 8][c + 27] = '|';
    X[r + 8][c + 28] = 'd';
    X[r + 8][c + 29] = '|';
    X[r + 8][c + 30] = 'M';
    X[r + 8][c + 31] = 'M';
    X[r + 8][c + 32] = 'M';
    X[r + 8][c + 33] = 'o';
    X[r + 8][c + 35] = '*';
    X[r + 8][c + 37] = 'l';
    X[r + 8][c + 38] = 'o';
    X[r + 8][c + 39] = 'M';
    X[r + 8][c + 40] = 'M';
    X[r + 8][c + 41] = '|';
    X[r + 8][c + 42] = 'p';
    X[r + 8][c + 43] = '|';
    X[r + 8][c + 44] = ',';
    X[r + 8][c + 45] = '!';
    X[r + 8][c + 46] = ',';
    X[r + 8][c + 47] = '.';
    X[r + 8][c + 48] = '!';
    X[r + 8][c + 49] = '.';
    X[r + 8][c + 50] = ',';
    X[r + 8][c + 51] = '.';
    X[r + 8][c + 52] = '!';
    X[r + 8][c + 53] = '.';
    X[r + 8][c + 54] = '.';
    X[r + 8][c + 55] = ' ';
    X[r + 8][c + 56] = ' ';
    X[r + 8][c + 57] = '|';
    X[r + 8][c + 58] = ' ';
    X[r + 8][c + 59] = ' ';
    X[r + 8][c + 60] = '_';
    X[r + 8][c + 61] = ' ';
    X[r + 8][c + 62] = ' ';
    X[r + 8][c + 63] = '|';
    X[r + 8][c + 64] = ' ';
    X[r + 8][c + 65] = ' ';
    X[r + 8][c + 66] = '_';
    X[r + 8][c + 67] = ' ';
    X[r + 8][c + 68] = ' ';
    X[r + 8][c + 69] = '8';
    X[r + 8][c + 70] = '8';
    X[r + 9][c + 0] = '8';
    X[r + 9][c + 1] = '8';
    X[r + 9][c + 8] = '|';
    X[r + 9][c + 14] = '|';
    X[r + 9][c + 19] = '|';
    X[r + 9][c + 22] = '|';
    X[r + 9][c + 25] = '|';
    X[r + 9][c + 27] = '|';
    X[r + 9][c + 28] = '_';
    X[r + 9][c + 29] = '|';
    X[r + 9][c + 30] = 'M';
    X[r + 9][c + 31] = 'M';
    X[r + 9][c + 32] = 'M';
    X[r + 9][c + 33] = 'M';
    X[r + 9][c + 34] = 'b';
    X[r + 9][c + 35] = ',';
    X[r + 9][c + 36] = 'd';
    X[r + 9][c + 37] = 'M';
    X[r + 9][c + 38] = 'M';
    X[r + 9][c + 39] = 'M';
    X[r + 9][c + 40] = 'M';
    X[r + 9][c + 41] = '|';
    X[r + 9][c + 42] = '_';
    X[r + 9][c + 43] = '|';
    X[r + 9][c + 44] = '|';
    X[r + 9][c + 46] = '|';
    X[r + 9][c + 50] = '|';
    X[r + 9][c + 54] = '|';
    X[r + 9][c + 59] = '|';
    X[r + 9][c + 66] = '|';
    X[r + 9][c + 69] = '8';
    X[r + 9][c + 70] = '8';
    X[r + 10][c + 0] = '8';
    X[r + 10][c + 1] = '8';
    X[r + 10][c + 8] = '|';
    X[r + 10][c + 14] = '|';
    X[r + 10][c + 19] = '|';
    X[r + 10][c + 20] = '.';
    X[r + 10][c + 21] = '.';
    X[r + 10][c + 22] = '!';
    X[r + 10][c + 23] = '-';
    X[r + 10][c + 24] = ';';
    X[r + 10][c + 25] = 39;
    X[r + 10][c + 26] = 'i';
    X[r + 10][c + 27] = '|';
    X[r + 10][c + 28] = 'r';
    X[r + 10][c + 29] = '|';
    X[r + 10][c + 30] = 'M';
    X[r + 10][c + 31] = 'P';
    X[r + 10][c + 32] = 'Y';
    X[r + 10][c + 33] = 'M';
    X[r + 10][c + 34] = 'o';
    X[r + 10][c + 35] = 'M';
    X[r + 10][c + 36] = 'M';
    X[r + 10][c + 37] = 'M';
    X[r + 10][c + 38] = 'M';
    X[r + 10][c + 39] = 'o';
    X[r + 10][c + 40] = 'M';
    X[r + 10][c + 41] = '|';
    X[r + 10][c + 42] = 'r';
    X[r + 10][c + 43] = '|';
    X[r + 10][c + 45] = '|';
    X[r + 10][c + 46] = 96;
    X[r + 10][c + 47] = '-';
    X[r + 10][c + 48] = '.';
    X[r + 10][c + 49] = '.';
    X[r + 10][c + 50] = '|';
    X[r + 10][c + 54] = '|';
    X[r + 10][c + 59] = '|';
    X[r + 10][c + 66] = '|';
    X[r + 10][c + 69] = '8';
    X[r + 10][c + 70] = '8';
    X[r + 11][c + 0] = '8';
    X[r + 11][c + 1] = '8';
    X[r + 11][c + 8] = '|';
    X[r + 11][c + 13] = '_';
    X[r + 11][c + 14] = '!';
    X[r + 11][c + 15] = '.';
    X[r + 11][c + 16] = '-';
    X[r + 11][c + 17] = 'j';
    X[r + 11][c + 18] = 39;
    X[r + 11][c + 21] = ' | ';
    X[r + 11][c + 23] = '_';
    X[r + 11][c + 24] = '!';
    X[r + 11][c + 25] = ',';
    X[r + 11][c + 26] = 'N';
    X[r + 11][c + 27] = '|';
    X[r + 11][c + 28] = '_';
    X[r + 11][c + 29] = '|';
    X[r + 11][c + 30] = 'M';
    X[r + 11][c + 31] = '<';
    X[r + 11][c + 32] = '>';
    X[r + 11][c + 33] = 'M';
    X[r + 11][c + 34] = 'M';
    X[r + 11][c + 35] = 'M';
    X[r + 11][c + 36] = 'M';
    X[r + 11][c + 37] = 'o';
    X[r + 11][c + 38] = 'M';
    X[r + 11][c + 39] = 'M';
    X[r + 11][c + 40] = 'M';
    X[r + 11][c + 41] = '|';
    X[r + 11][c + 42] = '_';
    X[r + 11][c + 43] = '|';
    X[r + 11][c + 44] = '|';
    X[r + 11][c + 45] = '!';
    X[r + 11][c + 46] = '.';
    X[r + 11][c + 47] = '_';
    X[r + 11][c + 48] = '|';
    X[r + 11][c + 51] = 96;
    X[r + 11][c + 52] = 'i';
    X[r + 11][c + 53] = '-';
    X[r + 11][c + 54] = '!';
    X[r + 11][c + 55] = '.';
    X[r + 11][c + 56] = '.';
    X[r + 11][c + 57] = '_';
    X[r + 11][c + 59] = '|';
    X[r + 11][c + 66] = '|';
    X[r + 11][c + 69] = '8';
    X[r + 11][c + 70] = '8';
    X[r + 12][c + 0] = '8';
    X[r + 12][c + 1] = '8';
    X[r + 12][c + 7] = '_';
    X[r + 12][c + 8] = '!';
    X[r + 12][c + 9] = '.';
    X[r + 12][c + 10] = '-';
    X[r + 12][c + 11] = 39;
    X[r + 12][c + 12] = ' | ';
    X[r + 12][c + 17] = ' | ';
    X[r + 12][c + 19] = '_';
    X[r + 12][c + 20] = '.';
    X[r + 12][c + 21] = '"';
    X[r + 12][c + 22] = '|';
    X[r + 12][c + 25] = '!';
    X[r + 12][c + 26] = ';';
    X[r + 12][c + 27] = '|';
    X[r + 12][c + 28] = '1';
    X[r + 12][c + 29] = '|';
    X[r + 12][c + 30] = 'M';
    X[r + 12][c + 31] = 'b';
    X[r + 12][c + 32] = 'd';
    X[r + 12][c + 33] = 'M';
    X[r + 12][c + 34] = 'M';
    X[r + 12][c + 35] = 'o';
    X[r + 12][c + 36] = 'M';
    X[r + 12][c + 37] = 'M';
    X[r + 12][c + 38] = 'M';
    X[r + 12][c + 39] = 'M';
    X[r + 12][c + 40] = 'M';
    X[r + 12][c + 41] = '|';
    X[r + 12][c + 42] = 'l';
    X[r + 12][c + 43] = '|';
    X[r + 12][c + 44] = 96;
    X[r + 12][c + 45] = '.';
    X[r + 12][c + 46] = '|';
    X[r + 12][c + 48] = 96;
    X[r + 12][c + 49] = '-';
    X[r + 12][c + 50] = '.';
    X[r + 12][c + 51] = '_';
    X[r + 12][c + 52] = '|';
    X[r + 12][c + 57] = '|';
    X[r + 12][c + 58] = 96;
    X[r + 12][c + 59] = 96;
    X[r + 12][c + 60] = '-';
    X[r + 12][c + 61] = '.';
    X[r + 12][c + 62] = '.';
    X[r + 12][c + 63] = '_';
    X[r + 12][c + 66] = '|';
    X[r + 12][c + 69] = '8';
    X[r + 12][c + 70] = '8';
    X[r + 13][c + 0] = '8';
    X[r + 13][c + 1] = '8';
    X[r + 13][c + 2] = '.';
    X[r + 13][c + 3] = '.';
    X[r + 13][c + 4] = '-';
    X[r + 13][c + 5] = 'i';
    X[r + 13][c + 6] = 39;
    X[r + 13][c + 12] = '|';
    X[r + 13][c + 15] = '_';
    X[r + 13][c + 16] = '.';
    X[r + 13][c + 17] = 39;
    X[r + 13][c + 18] = 39;
    X[r + 13][c + 19] = '|';
    X[r + 13][c + 22] = '!';
    X[r + 13][c + 23] = '-';
    X[r + 13][c + 24] = '|';
    X[r + 13][c + 26] = '!';
    X[r + 13][c + 27] = '|';
    X[r + 13][c + 28] = '_';
    X[r + 13][c + 29] = '|';
    X[r + 13][c + 30] = 'M';
    X[r + 13][c + 31] = 'M';
    X[r + 13][c + 32] = 'M';
    X[r + 13][c + 33] = 'o';
    X[r + 13][c + 34] = 'M';
    X[r + 13][c + 35] = 'M';
    X[r + 13][c + 36] = 'M';
    X[r + 13][c + 37] = 'M';
    X[r + 13][c + 38] = 'o';
    X[r + 13][c + 39] = 'M';
    X[r + 13][c + 40] = 'M';
    X[r + 13][c + 41] = '|';
    X[r + 13][c + 42] = '_';
    X[r + 13][c + 43] = '|';
    X[r + 13][c + 44] = '.';
    X[r + 13][c + 45] = '|';
    X[r + 13][c + 46] = 96;
    X[r + 13][c + 47] = '-';
    X[r + 13][c + 48] = '.';
    X[r + 13][c + 50] = '|';
    X[r + 13][c + 52] = 96;
    X[r + 13][c + 53] = 96;
    X[r + 13][c + 54] = '.';
    X[r + 13][c + 55] = '_';
    X[r + 13][c + 57] = '|';
    X[r + 13][c + 63] = '|';
    X[r + 13][c + 64] = 96;
    X[r + 13][c + 65] = 96;
    X[r + 13][c + 66] = '"';
    X[r + 13][c + 67] = '.';
    X[r + 13][c + 68] = '.';
    X[r + 13][c + 69] = '8';
    X[r + 13][c + 70] = '8';
    X[r + 14][c + 0] = '8';
    X[r + 14][c + 1] = '8';
    X[r + 14][c + 5] = '|';
    X[r + 14][c + 12] = '|';
    X[r + 14][c + 13] = '.';
    X[r + 14][c + 14] = '|';
    X[r + 14][c + 19] = '|';
    X[r + 14][c + 20] = '.';
    X[r + 14][c + 21] = '|';
    X[r + 14][c + 24] = '!';
    X[r + 14][c + 25] = '|';
    X[r + 14][c + 27] = '|';
    X[r + 14][c + 28] = 'u';
    X[r + 14][c + 29] = '|';
    X[r + 14][c + 30] = 'M';
    X[r + 14][c + 31] = 'o';
    X[r + 14][c + 32] = 'M';
    X[r + 14][c + 33] = 'M';
    X[r + 14][c + 34] = 'M';
    X[r + 14][c + 35] = 'M';
    X[r + 14][c + 36] = 'o';
    X[r + 14][c + 37] = 'M';
    X[r + 14][c + 38] = 'M';
    X[r + 14][c + 39] = 'M';
    X[r + 14][c + 40] = 'M';
    X[r + 14][c + 41] = '|';
    X[r + 14][c + 42] = 'n';
    X[r + 14][c + 43] = '|';
    X[r + 14][c + 44] = '|';
    X[r + 14][c + 45] = 96;
    X[r + 14][c + 46] = '.';
    X[r + 14][c + 48] = '|';
    X[r + 14][c + 49] = 96;
    X[r + 14][c + 50] = '!';
    X[r + 14][c + 54] = '|';
    X[r + 14][c + 56] = 96;
    X[r + 14][c + 57] = '"';
    X[r + 14][c + 58] = '.';
    X[r + 14][c + 63] = '|';
    X[r + 14][c + 69] = '8';
    X[r + 14][c + 70] = '8';
    X[r + 15][c + 0] = '8';
    X[r + 15][c + 1] = '8';
    X[r + 15][c + 5] = '|';
    X[r + 15][c + 8] = '_';
    X[r + 15][c + 9] = '.';
    X[r + 15][c + 10] = '-';
    X[r + 15][c + 11] = 39;
    X[r + 15][c + 14] = ' | ';
    X[r + 15][c + 17] = '.';
    X[r + 15][c + 18] = 39;
    X[r + 15][c + 21] = ' | ';
    X[r + 15][c + 22] = '.';
    X[r + 15][c + 23] = 39;
    X[r + 15][c + 25] = ' | ';
    X[r + 15][c + 26] = ' / ';
    X[r + 15][c + 27] = '|';
    X[r + 15][c + 28] = '_';
    X[r + 15][c + 29] = '|';
    X[r + 15][c + 30] = 'M';
    X[r + 15][c + 31] = 'M';
    X[r + 15][c + 32] = 'M';
    X[r + 15][c + 33] = 'M';
    X[r + 15][c + 34] = 'o';
    X[r + 15][c + 35] = 'M';
    X[r + 15][c + 36] = 'M';
    X[r + 15][c + 37] = 'M';
    X[r + 15][c + 38] = 'M';
    X[r + 15][c + 39] = 'o';
    X[r + 15][c + 40] = 'M';
    X[r + 15][c + 41] = '|';
    X[r + 15][c + 42] = '_';
    X[r + 15][c + 43] = '|';
    X[r + 15][c + 44] = '!';
    X[r + 15][c + 46] = '|';
    X[r + 15][c + 47] = 96;
    X[r + 15][c + 48] = '!';
    X[r + 15][c + 51] = 96;
    X[r + 15][c + 52] = ',';
    X[r + 15][c + 53] = '.';
    X[r + 15][c + 54] = '|';
    X[r + 15][c + 59] = '|';
    X[r + 15][c + 60] = '-';
    X[r + 15][c + 61] = '.';
    X[r + 15][c + 62] = '_';
    X[r + 15][c + 63] = '|';
    X[r + 15][c + 69] = '8';
    X[r + 15][c + 70] = '8';
    X[r + 16][c + 0] = '8';
    X[r + 16][c + 1] = '8';
    X[r + 16][c + 4] = '_';
    X[r + 16][c + 5] = '!';
    X[r + 16][c + 6] = '"';
    X[r + 16][c + 7] = 39;
    X[r + 16][c + 8] = ' | ';
    X[r + 16][c + 14] = '!';
    X[r + 16][c + 15] = '.';
    X[r + 16][c + 16] = 39;
    X[r + 16][c + 17] = '|';
    X[r + 16][c + 20] = '.';
    X[r + 16][c + 21] = 39;
    X[r + 16][c + 22] = '|';
    X[r + 16][c + 24] = '.';
    X[r + 16][c + 25] = 39;
    X[r + 16][c + 26] = '|';
    X[r + 16][c + 27] = '[';
    X[r + 16][c + 28] = '@';
    X[r + 16][c + 29] = ']';
    X[r + 16][c + 30] = 'M';
    X[r + 16][c + 31] = 'M';
    X[r + 16][c + 32] = 'M';
    X[r + 16][c + 33] = 'M';
    X[r + 16][c + 34] = 'M';
    X[r + 16][c + 35] = 'M';
    X[r + 16][c + 36] = 'M';
    X[r + 16][c + 37] = 'M';
    X[r + 16][c + 38] = 'M';
    X[r + 16][c + 39] = 'M';
    X[r + 16][c + 40] = 'M';
    X[r + 16][c + 41] = '[';
    X[r + 16][c + 42] = '@';
    X[r + 16][c + 43] = ']';
    X[r + 16][c + 45] = '\\';
    X[r + 16][c + 46] = ' | ';
    X[r + 16][c + 49] = 96;
    X[r + 16][c + 50] = '.';
    X[r + 16][c + 52] = '|';
    X[r + 16][c + 54] = 96;
    X[r + 16][c + 55] = '.';
    X[r + 16][c + 56] = '_';
    X[r + 16][c + 59] = '|';
    X[r + 16][c + 63] = 96;
    X[r + 16][c + 64] = '-';
    X[r + 16][c + 65] = '.';
    X[r + 16][c + 66] = '_';
    X[r + 16][c + 69] = '8';
    X[r + 16][c + 70] = '8';
    X[r + 17][c + 0] = '8';
    X[r + 17][c + 1] = '8';
    X[r + 17][c + 2] = '-';
    X[r + 17][c + 3] = 39;
    X[r + 17][c + 8] = ' | ';
    X[r + 17][c + 12] = '.';
    X[r + 17][c + 13] = 39;
    X[r + 17][c + 17] = ' | ';
    X[r + 17][c + 18] = '.';
    X[r + 17][c + 19] = '|';
    X[r + 17][c + 22] = '|';
    X[r + 17][c + 23] = '/';
    X[r + 17][c + 24] = '|';
    X[r + 17][c + 26] = '/';
    X[r + 17][c + 44] = '\\';
    X[r + 17][c + 45] = '|';
    X[r + 17][c + 46] = 96;
    X[r + 17][c + 47] = '.';
    X[r + 17][c + 50] = '|';
    X[r + 17][c + 51] = 96;
    X[r + 17][c + 52] = '!';
    X[r + 17][c + 57] = '|';
    X[r + 17][c + 58] = '.';
    X[r + 17][c + 59] = '|';
    X[r + 17][c + 66] = '|';
    X[r + 17][c + 67] = 96;
    X[r + 17][c + 68] = '-';
    X[r + 17][c + 69] = '8';
    X[r + 17][c + 70] = '8';
    X[r + 18][c + 0] = '8';
    X[r + 18][c + 1] = '8';
    X[r + 18][c + 8] = '|';
    X[r + 18][c + 9] = '_';
    X[r + 18][c + 10] = '.';
    X[r + 18][c + 11] = 39;
    X[r + 18][c + 12] = ' | ';
    X[r + 18][c + 16] = '.';
    X[r + 18][c + 17] = 39;
    X[r + 18][c + 19] = ' | ';
    X[r + 18][c + 21] = '.';
    X[r + 18][c + 22] = 39;
    X[r + 18][c + 24] = ' | ';
    X[r + 18][c + 25] = '/';
    X[r + 18][c + 45] = '\\';
    X[r + 18][c + 48] = '\\';
    X[r + 18][c + 50] = '|';
    X[r + 18][c + 53] = 96;
    X[r + 18][c + 54] = '.';
    X[r + 18][c + 57] = '|';
    X[r + 18][c + 59] = 96;
    X[r + 18][c + 60] = '.';
    X[r + 18][c + 61] = '_';
    X[r + 18][c + 62] = '-';
    X[r + 18][c + 63] = 'L';
    X[r + 18][c + 64] = 'e';
    X[r + 18][c + 65] = 'e';
    X[r + 18][c + 66] = '|';
    X[r + 18][c + 69] = '8';
    X[r + 18][c + 70] = '8';
    X[r + 19][c + 0] = '8';
    X[r + 19][c + 1] = '8';
    X[r + 19][c + 7] = '.';
    X[r + 19][c + 8] = 39;
    X[r + 19][c + 12] = '|';
    X[r + 19][c + 14] = '.';
    X[r + 19][c + 15] = 39;
    X[r + 19][c + 19] = '|';
    X[r + 19][c + 20] = '/';
    X[r + 19][c + 21] = '|';
    X[r + 19][c + 24] = '/';
    X[r + 19][c + 46] = '\\';
    X[r + 19][c + 48] = ' | ';
    X[r + 19][c + 49] = 96;
    X[r + 19][c + 50] = '!';
    X[r + 19][c + 54] = '|';
    X[r + 19][c + 55] = 96;
    X[r + 19][c + 56] = '.';
    X[r + 19][c + 57] = '|';
    X[r + 19][c + 62] = 96;
    X[r + 19][c + 63] = '.';
    X[r + 19][c + 66] = '|';
    X[r + 19][c + 69] = '8';
    X[r + 19][c + 70] = '8';
    X[r + 20][c + 0] = '8';
    X[r + 20][c + 1] = '8';
    X[r + 20][c + 4] = '_';
    X[r + 20][c + 5] = '.';
    X[r + 20][c + 6] = 39;
    X[r + 20][c + 12] = '!';
    X[r + 20][c + 13] = ' ';
    X[r + 20][c + 14] = '|';
    X[r + 20][c + 18] = '.';
    X[r + 20][c + 19] = 39;
    X[r + 20][c + 21] = '|';
    X[r + 20][c + 23] = '/';
    X[r + 20][c + 47] = '\\';
    X[r + 20][c + 48] = '|';
    X[r + 20][c + 51] = 96;
    X[r + 20][c + 54] = '|';
    X[r + 20][c + 57] = 96;
    X[r + 20][c + 58] = '.';
    X[r + 20][c + 63] = '|';
    X[r + 20][c + 64] = 96;
    X[r + 20][c + 65] = '.';
    X[r + 20][c + 66] = '|';
    X[r + 20][c + 69] = '8';
    X[r + 20][c + 70] = '8';
    X[r + 21][c + 0] = '8';
    X[r + 21][c + 1] = '8';
    X[r + 21][c + 3] = '8';
    X[r + 21][c + 4] = '8';
    X[r + 21][c + 5] = '8';
    X[r + 21][c + 6] = '8';
    X[r + 21][c + 7] = '8';
    X[r + 21][c + 8] = '8';
    X[r + 21][c + 9] = '8';
    X[r + 21][c + 10] = '8';
    X[r + 21][c + 11] = '8';
    X[r + 21][c + 12] = '8';
    X[r + 21][c + 13] = '8';
    X[r + 21][c + 14] = '8';
    X[r + 21][c + 15] = '8';
    X[r + 21][c + 16] = '8';
    X[r + 21][c + 17] = '8';
    X[r + 21][c + 19] = '8';
    X[r + 21][c + 20] = '8';
    X[r + 21][c + 21] = '8';
    X[r + 21][c + 22] = '8';
    X[r + 21][c + 49] = '8';
    X[r + 21][c + 50] = '8';
    X[r + 21][c + 51] = '8';
    X[r + 21][c + 52] = '8';
    X[r + 21][c + 53] = '8';
    X[r + 21][c + 54] = '8';
    X[r + 21][c + 55] = '8';
    X[r + 21][c + 56] = '8';
    X[r + 21][c + 57] = '8';
    X[r + 21][c + 58] = '8';
    X[r + 21][c + 59] = '8';
    X[r + 21][c + 60] = '8';
    X[r + 21][c + 61] = '8';
    X[r + 21][c + 62] = '8';
    X[r + 21][c + 63] = '8';
    X[r + 21][c + 64] = '(';
    X[r + 21][c + 65] = 'F';
    X[r + 21][c + 66] = 'L';
    X[r + 21][c + 67] = ')';
    X[r + 21][c + 68] = '8';
    X[r + 21][c + 69] = '8';
    X[r + 21][c + 70] = '8';
}


void door(char X[][2000], int rd, int CH) {
    /*CH = 260; RM = 30;
    for (int i = 0; i < 10; i++)
    {
        CH++;
        FillMatrxiByMyBackGround(X);
        drawroom(X);
        //DrawHero(X, RM, CH);
        DispToscreen(X, 211, 211 * 2);


    }
    */
}

void fayrouzgame(char B[][211], int& st2, int& end2, int& RH2, int& CH2, int& RG, int& CG, int& dirg, int& RB, int& CB,
    int& dirB, int& cls, int& cle, int& rl, int& rs, int& ss, int& se, int& FH, int& FS1, int& FS2,
    int& FS3, int& FS4, int& FS5, int& cts, int cts1, int cts3, int cts4, int cts5, int RF, int CF) {
    char ch;
    while (1) {
        if (RH2 < 745 || RH2 == 745) {
            break;
        }
        while (!_kbhit()) {
            RH2 -= 2;
            st2 -= 2;
            end2 -= 2;
            rl -= 2;
            rs -= 2;

            FillBounceGame(B);
            Bat(B, RB, CB);
            if (FS1 == 0) {

                star(B, 947, 120);

            }
            else if (FS1 == 1 && cts == 0) {
                collectstar(FS1, se);
                cts++;
            }
            if (FS2 == 0) {

                star(B, 898, 170);

            }
            else if (FS2 == 1 && cts1 == 0) {
                collectstar(FS2, se);
                cts1++;
            }


            if (FS3 == 0) {

                star(B, 868, 70);

            }
            else if (FS3 == 1 && cts3 == 0) {
                collectstar(FS3, se);
                cts3++;
            }

            if (FS4 == 0) {

                star(B, 845, 70);

            }
            else if (FS4 == 1 && cts4 == 0) {
                collectstar(FS4, se);
                cts4++;
            }

            if (FS5 == 0) {

                star(B, 798, 100);

            }
            else if (FS5 == 1 && cts5 == 0) {
                collectstar(FS5, se);
                cts5++;
            }

            fire(B, RF, CF);
            movefire(CF);
            drawstars(B, ss, se, rs);
            pumpkin2(B, 944, 180);
            spiderB(B, 750, 170);
            spiderB(B, 750, 40);
            MoveBat(CB, dirB);
            witch(B, 840, 188);
            RIP(B, 866, 115);
            key(B, 745, 100);
            RIP(B, 866, 123);
            GhostLeft(B, RG, CG);
            MoveGhhostL(CG, dirg);
            checkHealth(B, RH2, CH2, FH);
            checkstar(B, RH2, CH2, FS1, FH);
            if (RH2 > 880 && RH2 < 900) {
                checkstar(B, RH2, CH2, FS2, FH);
            }
            if (RH2 > 865 && RH2 < 870) {
                checkstar(B, RH2, CH2, FS3, FH);
            }
            if (RH2 > 840 && RH2 < 860) {
                checkstar(B, RH2, CH2, FS4, FH);
            }
            if (RH2 > 780 && RH2 < 800) {
                checkstar(B, RH2, CH2, FS5, FH);
            }


            if (FH == 0) {
                loseHealth(cle, RH2, CH2, st2, end2, rs);
                FH = 1;
                rl += 10;

            }

            DrawHero2(B, RH2, CH2);
            health2(B, cls, cle, rl);
            DispToscreen2(B, st2, end2);


        }
        ch = _getch();
        MoveHero2(RH2, CH2, st2, end2, ch, rl, rs);
        if (cle == 3 || cle < 3) {
            break;
        }

    }


}


//fayrouz game function


void DrawGameOver(char x[][2000]) {

    int r = 0;
    int c = 0;
    for (r = 0; r < 50; r++) {
        for (c = 0; c < 2000; c++) {
            x[r][c] = ' ';
        }
    }
    for (r = 45; r < 46; r++) {
        for (c = 0; c < 2000; c++) {
            x[r][c] = 205;
        }
    }


    for (int c = 0; c < 2000; c++) {
        x[0][c] = '~';
        x[49][c] = '~';
    }

    for (int r = 0; r < 50; r++) {
        x[r][0] = '|';
        x[r][1999] = '|';
    }


    r = 10;
    c = 85;
    x[r + 1][c] = 219;
    x[r + 1][c + 1] = 219;
    x[r + 1][c + 2] = 219;
    x[r + 1][c + 3] = 223;
    x[r + 1][c + 4] = 223;
    x[r + 1][c + 5] = 223;
    x[r + 1][c + 6] = 219;
    x[r + 1][c + 7] = 219;
    x[r + 1][c + 9] = 219;
    x[r + 1][c + 10] = 219;
    x[r + 1][c + 11] = 219;
    x[r + 1][c + 12] = 223;
    x[r + 1][c + 13] = 223;
    x[r + 1][c + 14] = 223;
    x[r + 1][c + 15] = 219;
    x[r + 1][c + 16] = 219;
    x[r + 1][c + 17] = 219;
    x[r + 1][c + 19] = 219;
    x[r + 1][c + 20] = 219;
    x[r + 1][c + 21] = 219;
    x[r + 1][c + 22] = 223;
    x[r + 1][c + 23] = 219;
    x[r + 1][c + 24] = 220;
    x[r + 1][c + 25] = 219;
    x[r + 1][c + 26] = 223;
    x[r + 1][c + 27] = 219;
    x[r + 1][c + 28] = 219;
    x[r + 1][c + 29] = 219;
    x[r + 1][c + 31] = 219;
    x[r + 1][c + 32] = 219;
    x[r + 1][c + 33] = 223;
    x[r + 1][c + 34] = 223;
    x[r + 1][c + 35] = 223;
    x[r + 2][c + 0] = 219;
    x[r + 2][c + 1] = 219;
    x[r + 2][c + 6] = 219;
    x[r + 2][c + 7] = 219;
    x[r + 2][c + 9] = 219;
    x[r + 2][c + 10] = 219;
    x[r + 2][c + 16] = 219;
    x[r + 2][c + 17] = 219;
    x[r + 2][c + 19] = 219;
    x[r + 2][c + 20] = 219;
    x[r + 2][c + 24] = 219;
    x[r + 2][c + 28] = 219;
    x[r + 2][c + 29] = 219;
    x[r + 2][c + 31] = 219;
    x[r + 2][c + 32] = 219;
    x[r + 3][c + 0] = 219;
    x[r + 3][c + 1] = 219;
    x[r + 3][c + 5] = 220;
    x[r + 3][c + 6] = 220;
    x[r + 3][c + 7] = 220;
    x[r + 3][c + 9] = 219;
    x[r + 3][c + 10] = 219;
    x[r + 3][c + 11] = 220;
    x[r + 3][c + 12] = 220;
    x[r + 3][c + 13] = 220;
    x[r + 3][c + 14] = 220;
    x[r + 3][c + 15] = 220;
    x[r + 3][c + 16] = 219;
    x[r + 3][c + 17] = 219;
    x[r + 3][c + 19] = 219;
    x[r + 3][c + 20] = 219;
    x[r + 3][c + 24] = 223;
    x[r + 3][c + 28] = 219;
    x[r + 3][c + 29] = 219;
    x[r + 3][c + 31] = 219;
    x[r + 3][c + 32] = 219;
    x[r + 3][c + 33] = 223;
    x[r + 3][c + 34] = 223;
    x[r + 3][c + 35] = 223;
    x[r + 4][c + 0] = 219;
    x[r + 4][c + 1] = 219;
    x[r + 4][c + 6] = 219;
    x[r + 4][c + 7] = 219;
    x[r + 4][c + 9] = 219;
    x[r + 4][c + 10] = 219;
    x[r + 4][c + 16] = 219;
    x[r + 4][c + 17] = 219;
    x[r + 4][c + 19] = 219;
    x[r + 4][c + 20] = 219;
    x[r + 4][c + 28] = 219;
    x[r + 4][c + 29] = 219;
    x[r + 4][c + 31] = 219;
    x[r + 4][c + 32] = 219;
    x[r + 5][c + 0] = 219;
    x[r + 5][c + 1] = 219;
    x[r + 5][c + 2] = 219;
    x[r + 5][c + 3] = 220;
    x[r + 5][c + 4] = 220;
    x[r + 5][c + 5] = 220;
    x[r + 5][c + 6] = 219;
    x[r + 5][c + 7] = 219;
    x[r + 5][c + 9] = 219;
    x[r + 5][c + 10] = 219;
    x[r + 5][c + 16] = 219;
    x[r + 5][c + 17] = 219;
    x[r + 5][c + 19] = 219;
    x[r + 5][c + 20] = 219;
    x[r + 5][c + 28] = 219;
    x[r + 5][c + 29] = 219;
    x[r + 5][c + 31] = 219;
    x[r + 5][c + 32] = 219;
    x[r + 5][c + 33] = 220;
    x[r + 5][c + 34] = 220;
    x[r + 5][c + 35] = 220;
    x[r + 7][c + 0] = 219;
    x[r + 7][c + 1] = 219;
    x[r + 7][c + 2] = 219;
    x[r + 7][c + 3] = 223;
    x[r + 7][c + 4] = 223;
    x[r + 7][c + 5] = 223;
    x[r + 7][c + 6] = 219;
    x[r + 7][c + 7] = 219;
    x[r + 7][c + 8] = 219;
    x[r + 7][c + 10] = 223;
    x[r + 7][c + 11] = 219;
    x[r + 7][c + 12] = 219;
    x[r + 7][c + 13] = 219;
    x[r + 7][c + 16] = 219;
    x[r + 7][c + 17] = 219;
    x[r + 7][c + 18] = 223;
    x[r + 7][c + 20] = 219;
    x[r + 7][c + 21] = 219;
    x[r + 7][c + 22] = 223;
    x[r + 7][c + 23] = 223;
    x[r + 7][c + 24] = 223;
    x[r + 7][c + 26] = 219;
    x[r + 7][c + 27] = 219;
    x[r + 7][c + 28] = 223;
    x[r + 7][c + 29] = 223;
    x[r + 7][c + 30] = 223;
    x[r + 7][c + 31] = 223;
    x[r + 7][c + 32] = 219;
    x[r + 7][c + 33] = 219;
    x[r + 7][c + 34] = 220;
    x[r + 8][c + 0] = 219;
    x[r + 8][c + 1] = 219;
    x[r + 8][c + 7] = 219;
    x[r + 8][c + 8] = 219;
    x[r + 8][c + 12] = 219;
    x[r + 8][c + 13] = 219;
    x[r + 8][c + 16] = 219;
    x[r + 8][c + 17] = 219;
    x[r + 8][c + 20] = 219;
    x[r + 8][c + 21] = 219;
    x[r + 8][c + 26] = 219;
    x[r + 8][c + 27] = 219;
    x[r + 8][c + 33] = 219;
    x[r + 8][c + 34] = 219;
    x[r + 9][c + 0] = 219;
    x[r + 9][c + 1] = 219;
    x[r + 9][c + 7] = 219;
    x[r + 9][c + 8] = 219;
    x[r + 9][c + 12] = 219;
    x[r + 9][c + 13] = 219;
    x[r + 9][c + 16] = 219;
    x[r + 9][c + 17] = 219;
    x[r + 9][c + 20] = 219;
    x[r + 9][c + 21] = 219;
    x[r + 9][c + 22] = 223;
    x[r + 9][c + 23] = 223;
    x[r + 9][c + 24] = 223;
    x[r + 9][c + 26] = 219;
    x[r + 9][c + 27] = 219;
    x[r + 9][c + 28] = 220;
    x[r + 9][c + 29] = 220;
    x[r + 9][c + 30] = 220;
    x[r + 9][c + 31] = 220;
    x[r + 9][c + 32] = 220;
    x[r + 9][c + 33] = 223;
    x[r + 9][c + 34] = 223;
    x[r + 10][c + 0] = 219;
    x[r + 10][c + 1] = 219;
    x[r + 10][c + 7] = 219;
    x[r + 10][c + 8] = 219;
    x[r + 10][c + 12] = 219;
    x[r + 10][c + 13] = 219;
    x[r + 10][c + 16] = 219;
    x[r + 10][c + 17] = 223;
    x[r + 10][c + 20] = 219;
    x[r + 10][c + 21] = 219;
    x[r + 10][c + 26] = 219;
    x[r + 10][c + 27] = 219;
    x[r + 10][c + 33] = 219;
    x[r + 10][c + 34] = 219;
    x[r + 11][c + 0] = 219;
    x[r + 11][c + 1] = 219;
    x[r + 11][c + 2] = 219;
    x[r + 11][c + 3] = 220;
    x[r + 11][c + 4] = 220;
    x[r + 11][c + 5] = 220;
    x[r + 11][c + 6] = 219;
    x[r + 11][c + 7] = 219;
    x[r + 11][c + 8] = 219;
    x[r + 11][c + 13] = 223;
    x[r + 11][c + 14] = 219;
    x[r + 11][c + 15] = 223;
    x[r + 11][c + 20] = 219;
    x[r + 11][c + 21] = 219;
    x[r + 11][c + 22] = 220;
    x[r + 11][c + 23] = 220;
    x[r + 11][c + 24] = 220;
    x[r + 11][c + 26] = 219;
    x[r + 11][c + 27] = 219;
    x[r + 11][c + 33] = 219;
    x[r + 11][c + 34] = 219;
    x[r + 11][c + 35] = 220;
    x[r + 13][c + 8] = 219;
    x[r + 13][c + 9] = 219;
    x[r + 13][c + 25] = 219;
    x[r + 13][c + 26] = 219;
    x[r + 14][c + 6] = 219;
    x[r + 14][c + 7] = 219;
    x[r + 14][c + 8] = 219;
    x[r + 14][c + 9] = 219;
    x[r + 14][c + 10] = 220;
    x[r + 14][c + 14] = 220;
    x[r + 14][c + 15] = 220;
    x[r + 14][c + 16] = 220;
    x[r + 14][c + 17] = 220;
    x[r + 14][c + 18] = 220;
    x[r + 14][c + 19] = 220;
    x[r + 14][c + 20] = 220;
    x[r + 14][c + 24] = 220;
    x[r + 14][c + 25] = 219;
    x[r + 14][c + 26] = 219;
    x[r + 14][c + 27] = 219;
    x[r + 14][c + 28] = 219;
    x[r + 15][c + 9] = 223;
    x[r + 15][c + 10] = 223;
    x[r + 15][c + 11] = 219;
    x[r + 15][c + 12] = 'h';
    x[r + 15][c + 13] = 219;
    x[r + 15][c + 14] = 219;
    x[r + 15][c + 15] = 219;
    x[r + 15][c + 16] = 219;
    x[r + 15][c + 17] = 219;
    x[r + 15][c + 18] = 219;
    x[r + 15][c + 19] = 219;
    x[r + 15][c + 20] = 219;
    x[r + 15][c + 21] = 219;
    x[r + 15][c + 22] = 220;
    x[r + 15][c + 23] = 219;
    x[r + 15][c + 24] = 223;
    x[r + 15][c + 25] = 223;
    x[r + 16][c + 11] = 219;
    x[r + 16][c + 12] = 219;
    x[r + 16][c + 13] = 219;
    x[r + 16][c + 14] = 219;
    x[r + 16][c + 15] = 219;
    x[r + 16][c + 16] = 219;
    x[r + 16][c + 17] = 219;
    x[r + 16][c + 18] = 219;
    x[r + 16][c + 19] = 219;
    x[r + 16][c + 20] = 219;
    x[r + 16][c + 21] = 219;
    x[r + 16][c + 22] = 219;
    x[r + 16][c + 23] = 219;
    x[r + 17][c + 11] = 219;
    x[r + 17][c + 12] = 219;
    x[r + 17][c + 13] = 223;
    x[r + 17][c + 14] = 223;
    x[r + 17][c + 15] = 223;
    x[r + 17][c + 16] = 219;
    x[r + 17][c + 17] = 219;
    x[r + 17][c + 18] = 219;
    x[r + 17][c + 19] = 223;
    x[r + 17][c + 20] = 223;
    x[r + 17][c + 21] = 223;
    x[r + 17][c + 22] = 219;
    x[r + 17][c + 23] = 219;
    x[r + 18][c + 11] = 219;
    x[r + 18][c + 12] = 219;
    x[r + 18][c + 16] = 219;
    x[r + 18][c + 17] = 219;
    x[r + 18][c + 18] = 219;
    x[r + 18][c + 22] = 219;
    x[r + 18][c + 23] = 219;
    x[r + 19][c + 11] = 219;
    x[r + 19][c + 12] = 219;
    x[r + 19][c + 13] = 219;
    x[r + 19][c + 14] = 219;
    x[r + 19][c + 15] = 219;
    x[r + 19][c + 16] = 223;
    x[r + 19][c + 17] = 220;
    x[r + 19][c + 18] = 223;
    x[r + 19][c + 19] = 219;
    x[r + 19][c + 20] = 219;
    x[r + 19][c + 21] = 219;
    x[r + 19][c + 22] = 219;
    x[r + 19][c + 23] = 219;
    x[r + 20][c + 12] = 219;
    x[r + 20][c + 13] = 219;
    x[r + 20][c + 14] = 219;
    x[r + 20][c + 15] = 219;
    x[r + 20][c + 16] = 219;
    x[r + 20][c + 17] = 219;
    x[r + 20][c + 18] = 219;
    x[r + 20][c + 19] = 219;
    x[r + 20][c + 20] = 219;
    x[r + 20][c + 21] = 219;
    x[r + 20][c + 22] = 219;
    x[r + 21][c + 8] = 220;
    x[r + 21][c + 9] = 220;
    x[r + 21][c + 10] = 220;
    x[r + 21][c + 11] = 219;
    x[r + 21][c + 12] = 219;
    x[r + 21][c + 15] = 219;
    x[r + 21][c + 16] = 223;
    x[r + 21][c + 17] = 219;
    x[r + 21][c + 18] = 223;
    x[r + 21][c + 19] = 219;
    x[r + 21][c + 22] = 219;
    x[r + 21][c + 23] = 219;
    x[r + 21][c + 24] = 220;
    x[r + 21][c + 25] = 220;
    x[r + 21][c + 26] = 220;
    x[r + 22][c + 8] = 223;
    x[r + 22][c + 9] = 223;
    x[r + 22][c + 10] = 219;
    x[r + 22][c + 11] = 219;
    x[r + 22][c + 23] = 219;
    x[r + 22][c + 24] = 219;
    x[r + 22][c + 25] = 223;
    x[r + 22][c + 26] = 223;
    x[r + 23][c + 10] = 223;
    x[r + 23][c + 11] = 223;
    x[r + 23][c + 23] = 223;
    x[r + 23][c + 24] = 223;


    for (r = 0; r < 50; r++) {
        for (c = 0; c < 211; c++) {
            cout << x[r][c];
        }
    }

}


void DrawStar(char X[][2000], int RH, int CH, char ch, int& flagStar, int RS, int CS) {

    //int RS = 39, CS = 22;
    int i, j;
    for (i = RS; i < RS + 6; i++) {
        for (j = CS - 6; j < CS + 6; j++) {
            if (X[i][j] == ')' || X[i][j] == '(') {
                flagStar = 1;

            }
        }
    }

    if (flagStar == 0) {
        X[RS][CS] = ',';
        X[RS + 1][CS - 1] = '/';
        X[RS + 1][CS - 2] = '_';
        X[RS + 1][CS - 3] = '_';
        X[RS + 1][CS - 4] = 218;
        X[RS + 2][CS - 3] = '\\';
        X[RS + 3][CS - 3] = '/';
        X[RS + 3][CS - 2] = '_';
        X[RS + 4][CS - 1] = '\\';
        X[RS + 5][CS] = 39;
        X[RS + 4][CS + 1] = '/';
        X[RS + 3][CS + 2] = '_';
        X[RS + 3][CS + 3] = '\\';
        X[RS + 2][CS + 3] = '/';
        X[RS + 1][CS + 3] = '_';
        X[RS + 1][CS + 2] = '_';
        X[RS + 1][CS + 1] = '\\';
    }


}


//sohila's function


void DrawDoor(char X[][2000], int RD, int CD) {
    X[RD - 3][CD + 5] = 205;
    X[RD - 3][CD + 6] = 205;
    X[RD - 3][CD + 7] = 205;
    X[RD - 3][CD + 8] = 205;
    X[RD - 3][CD + 9] = 205;
    X[RD - 3][CD + 10] = 205;
    X[RD - 3][CD + 4] = 201;
    X[RD - 2][CD + 3] = 205;
    X[RD - 2][CD + 2] = 201;
    X[RD - 1][CD + 1] = '/';
    X[RD - 1][CD + 0] = '/';
    X[RD][CD] = 185;
    X[RD + 1][CD] = 185;
    X[RD + 2][CD] = 185;
    X[RD + 3][CD] = 185;
    X[RD + 4][CD] = 185;
    X[RD + 5][CD] = 185;
    X[RD + 6][CD] = 185;
    X[RD + 7][CD] = 185;
    X[RD + 8][CD] = 185;
    X[RD + 9][CD] = 185;
    X[RD + 10][CD] = 185;
    X[RD + 11][CD] = 185;
    X[RD + 12][CD] = 185;
    X[RD + 13][CD] = 185;
    X[RD + 14][CD] = 185;
    X[RD + 15][CD] = 185;
    X[RD][CD - 1] = 186;
    X[RD + 1][CD - 1] = 186;
    X[RD + 2][CD - 1] = 186;
    X[RD + 3][CD - 1] = 186;
    X[RD + 4][CD - 1] = 186;
    X[RD + 5][CD - 1] = 186;
    X[RD + 6][CD - 1] = 186;
    X[RD + 7][CD - 1] = 186;
    X[RD + 8][CD - 1] = 186;
    X[RD + 9][CD - 1] = 186;
    X[RD + 10][CD - 1] = 186;
    X[RD + 11][CD - 1] = 186;
    X[RD + 12][CD - 1] = 186;
    X[RD + 13][CD - 1] = 186;
    X[RD + 14][CD - 1] = 186;
    X[RD + 15][CD - 1] = 186;
    X[RD + 15][CD + 0] = 205;
    X[RD + 15][CD + 1] = 205;
    X[RD + 15][CD + 2] = 205;
    X[RD + 15][CD + 3] = 205;
    X[RD + 15][CD + 4] = 205;
    X[RD + 15][CD + 5] = 205;
    X[RD + 15][CD + 6] = 205;
    X[RD + 15][CD + 7] = 205;
    X[RD + 15][CD + 8] = 205;
    X[RD + 15][CD + 9] = 205;
    X[RD + 15][CD + 10] = 205;
    X[RD + 15][CD + 11] = 205;
    X[RD + 15][CD + 12] = 205;
    X[RD + 15][CD + 13] = 205;
    X[RD + 15][CD + 14] = 205;
    X[RD + 15][CD + 15] = 205;
    X[RD + 15][CD + 16] = 205;
    X[RD + 15][CD + 17] = 205;
    X[RD + 15][CD + 18] = 205;
    X[RD + 15][CD + 19] = 205;
    X[RD - 3][CD + 13] = 205;
    X[RD - 3][CD + 12] = 205;
    X[RD - 3][CD + 11] = 205;
    X[RD - 3][CD + 10] = 205;


    X[RD - 4][CD + 9] = 222;   //daaaah



    X[RD - 3][CD + 9] = 'O';
    X[RD - 3][CD + 8] = 205;
    X[RD - 3][CD + 14] = 187;
    X[RD - 2][CD + 15] = 205;
    X[RD - 2][CD + 16] = 187;
    X[RD - 1][CD + 17] = '\\';
    X[RD - 1][CD + 18] = '\\';
    X[RD][CD + 18] = 185;
    X[RD + 1][CD + 18] = 185;
    X[RD + 2][CD + 18] = 185;
    X[RD + 3][CD + 18] = 185;
    X[RD + 4][CD + 18] = 185;
    X[RD + 5][CD + 18] = 185;
    X[RD + 6][CD + 18] = 185;
    X[RD + 7][CD + 18] = 185;
    X[RD + 8][CD + 18] = 185;
    X[RD + 9][CD + 18] = 185;
    X[RD + 10][CD + 18] = 185;
    X[RD + 11][CD + 18] = 185;
    X[RD + 12][CD + 18] = 185;
    X[RD + 13][CD + 18] = 185;
    X[RD + 14][CD + 18] = 185;
    X[RD][CD + 19] = 186;
    X[RD + 1][CD + 19] = 186;
    X[RD + 2][CD + 19] = 186;
    X[RD + 3][CD + 19] = 186;
    X[RD + 4][CD + 19] = 186;
    X[RD + 5][CD + 19] = 186;
    X[RD + 6][CD + 19] = 186;
    X[RD + 7][CD + 19] = 186;
    X[RD + 8][CD + 19] = 186;
    X[RD + 9][CD + 19] = 186;
    X[RD + 10][CD + 19] = 186;
    X[RD + 11][CD + 19] = 186;
    X[RD + 12][CD + 19] = 186;
    X[RD + 13][CD + 19] = 186;
    X[RD + 14][CD + 19] = 186;
    X[RD + 15][CD + 19] = 186;

}

void Drawline(char X[][2000], int Rli, int Cli) {
    for (int i = 8; i > -60; i--) {
        X[Rli - 5][Cli + i] = 202;
    }
    int k;
    for (k = 8; k > -60; k--) {
        X[Rli - 6][Cli + k] = '_';
    }
    X[Rli - 6][Cli + k] = 186;
    X[Rli - 7][Cli + k] = 186;
    X[Rli - 8][Cli + k] = 186;
    X[Rli - 9][Cli + k] = 186;
    X[Rli - 10][Cli + k] = 186;
    X[Rli - 11][Cli + k] = 186;

    for (int j = 10; j < 90; j++) {
        X[Rli - 5][Cli + j] = 202;
    }

    int L;
    for (L = 10; L < 90; L++) {
        X[Rli - 6][Cli + L] = '_';
    }

    X[Rli - 6][Cli + L] = 186;
    X[Rli - 7][Cli + L] = 186;
    X[Rli - 8][Cli + L] = 186;
    X[Rli - 9][Cli + L] = 186;
    X[Rli - 10][Cli + L] = 186;
    X[Rli - 11][Cli + L] = 186;
}


void DrawEnemy5(char X[][2000], int R5, int C5, int F5) {
    if (F5 == 1) {
        X[R5][C5] = '/';
        X[R5][C5 + 1] = '\\';
        X[R5 + 1][C5 - 1] = '/';
        X[R5 + 1][C5 + 2] = '\\';
        X[R5 + 2][C5 - 2] = '|';
        X[R5 + 2][C5 + 3] = '|';
        X[R5 + 2][C5 - 1] = '_';
        X[R5 + 2][C5 - 1] = '_';
        X[R5 + 2][C5 - 0] = '_';
        X[R5 + 2][C5 + 1] = '_';
        X[R5 + 2][C5 + 2] = '_';
        X[R5 + 3][C5 + 3] = ':';
        X[R5 + 4][C5 + 3] = ':';
        X[R5 + 4][C5 - 2] = ':';
        X[R5 + 3][C5 - 2] = ':';
        X[R5 + 3][C5 - 1] = '.';
        X[R5 + 3][C5 + 1] = '.';
        X[R5 + 4][C5 + 0] = '-';
        X[R5 + 5][C5 - 1] = ':';
        X[R5 + 5][C5 + 0] = '"';
        X[R5 + 5][C5 + 1] = '"';
        X[R5 + 5][C5 + 2] = ':';
        X[R5 + 5][C5 + 3] = '\\';
        X[R5 + 5][C5 + 4] = '_';
        X[R5 + 5][C5 + 5] = '_';
        X[R5 + 5][C5 + 6] = '_';
        X[R5 + 6][C5 + 7] = 39;
        X[R5 + 6][C5 + 8] = '.';
        X[R5 + 6][C5 + 9] = '_';
        X[R5 + 7][C5 + 10] = ':';
        X[R5 + 8][C5 + 11] = 39;
        X[R5 + 8][C5 + 10] = '.';
        X[R5 + 8][C5 + 9] = '_';
        X[R5 + 8][C5 + 8] = '.';
        X[R5 + 8][C5 + 7] = 39;
        X[R5 + 8][C5 + 6] = '/';
        X[R5 + 7][C5 + 5] = '\\';
        X[R5 + 9][C5 + 8] = '"';
        X[R5 + 9][C5 + 9] = '"';
        X[R5 + 5][C5 - 2] = '_';
        X[R5 + 6][C5 - 3] = 39;
        X[R5 + 6][C5 - 4] = '.';
        X[R5 + 6][C5 - 5] = '_';
        X[R5 + 6][C5 - 6] = '_';
        X[R5 + 6][C5 - 7] = '_';
        X[R5 + 7][C5 - 7] = ')';
        X[R5 + 7][C5 - 8] = '=';
        X[R5 + 7][C5 - 9] = '<';
        X[R5 + 7][C5 - 10] = '<';
        X[R5 + 7][C5 - 11] = '=';
        X[R5 + 7][C5 - 12] = '=';
        X[R5 + 7][C5 - 13] = '=';
        X[R5 + 7][C5 - 14] = '=';
        X[R5 + 7][C5 - 15] = '=';
        X[R5 + 7][C5 - 16] = '=';
        X[R5 + 7][C5 - 17] = '<';
        X[R5 + 7][C5 - 18] = '<';
        X[R5 + 8][C5 - 7] = 39;
        X[R5 + 8][C5 - 6] = '-';
        X[R5 + 8][C5 - 5] = 39;
        X[R5 + 8][C5 - 4] = '-';
        X[R5 + 8][C5 - 3] = 39;
        X[R5 + 8][C5 - 2] = '\\';
        X[R5 + 8][C5 - 1] = '_';
        X[R5 + 9][C5 - 0] = '\\';
        X[R5 + 9][C5 + 1] = '=';
        X[R5 + 9][C5 + 1] = '=';
        X[R5 + 9][C5 + 2] = '=';
        X[R5 + 9][C5 + 3] = '=';
        X[R5 + 9][C5 + 4] = '=';
        X[R5 + 9][C5 + 5] = ':';
        X[R5 + 9][C5 + 6] = '_';
        X[R5 + 10][C5 + 6] = '\\';
        X[R5 + 10][C5 + 7] = '\\';
        X[R5 + 11][C5 + 6] = ':';
        X[R5 + 12][C5 + 6] = '\\';
        X[R5 + 13][C5 + 7] = 39;
        X[R5 + 13][C5 + 8] = '.';
        X[R5 + 14][C5 + 8] = ':';
        X[R5 + 15][C5 + 8] = 39;
        X[R5 + 15][C5 + 7] = '-';
        X[R5 + 15][C5 + 6] = '-';
        X[R5 + 15][C5 + 5] = ';';
        X[R5 + 15][C5 + 4] = '.';
        X[R5 + 16][C5 + 4] = 39;
        X[R5 + 15][C5 + 3] = '_';
        X[R5 + 15][C5 + 2] = '_';
        X[R5 + 16][C5 + 2] = 39;
        X[R5 + 16][C5 + 3] = '-';
        X[R5 + 16][C5 + 4] = 39;
        X[R5 + 15][C5 + 1] = ':';
        X[R5 + 15][C5 + 0] = '-';
        X[R5 + 15][C5 - 1] = ':';
        X[R5 + 14][C5 + 1] = ':';
        X[R5 + 14][C5 - 1] = ':';
        X[R5 + 13][C5 + 0] = '.';
        X[R5 + 12][C5 + 1] = ':';
        X[R5 + 15][C5 - 0] = '-';
        X[R5 + 15][C5 - 2] = '_';
        X[R5 + 15][C5 - 3] = '_';
        X[R5 + 16][C5 - 2] = 39;
        X[R5 + 16][C5 - 3] = '-';
        X[R5 + 16][C5 - 4] = 39;
        X[R5 + 15][C5 - 4] = ':';
        X[R5 + 14][C5 - 4] = ':';
        X[R5 + 13][C5 - 4] = ':';
        X[R5 + 12][C5 - 3] = '/';
        X[R5 + 11][C5 - 2] = ':';
        X[R5 + 10][C5 - 1] = '.';
        X[R5 + 10][C5 - 0] = 39;
    }

}

void clearE5(char X[][2000], int R5, int C5, int& F5, int& ctE5) {

    int c; // = C5 - 20;
    for (int r = R5; r < R5 + 19; r++) {
        for (c = C5 - 15; c < C5 + 10; c++) {
            if (X[r][c] == 1) {
                ctE5++;
            }
        }
    }
    if (ctE5 >= 3) {
        F5 = 0;
    }

}

void movedoor(char X[][2000], int Rdoor, int& Cdoor, int& CH, int& dir, int& st, int& end, int& CLFS, int& CLFE) {

    int r, c, DoorFlag = 0;

    for (c = Cdoor - 5; c < Cdoor + 19; c++) {
        if (X[Rdoor + 14][c] == ')') {
            DoorFlag = 1;
        }


        if (dir == 1 && DoorFlag == 1) {
            if (Cdoor > 620) {
                dir = 0;
            }

            Cdoor += 2;
            CH += 2;
            st += 2;
            end += 2;
            CLFS += 2;
            CLFE += 2;

        }
        else if (dir == 0 && DoorFlag == 1) {
            Cdoor -= 2;
            CH -= 2;
            st -= 2;
            end -= 2;
            if (Cdoor < 450) {
                dir = 1;
                DoorFlag = 1;
            }
        }
    }

}


void mushroom(char X[][2000], int RM, int CM) {

    X[RM][CM] = ':';
    X[RM - 1][CM + 1] = '/';
    X[RM - 2][CM + 2] = '.';
    X[RM - 2][CM + 3] = '-';
    X[RM - 2][CM + 4] = '"';
    X[RM - 2][CM + 5] = '"';
    X[RM - 2][CM + 6] = '"';
    X[RM - 2][CM + 7] = '-';
    X[RM - 2][CM + 8] = '.';
    X[RM - 1][CM + 9] = '\\';
    X[RM][CM + 10] = ':';
    X[RM][CM + 1] = '_';
    X[RM][CM + 2] = '.';
    X[RM][CM + 3] = '-';
    X[RM][CM + 4] = ':';
    X[RM][CM + 6] = ':';
    X[RM][CM + 7] = '-';
    X[RM][CM + 8] = '.';
    X[RM][CM + 9] = '_';
    X[RM + 1][CM + 4] = '(';
    X[RM + 2][CM + 4] = '(';
    X[RM + 1][CM + 6] = ')';
    X[RM + 2][CM + 6] = ')';
    X[RM + 1][CM + 5] = '_';
    X[RM + 2][CM + 5] = '_';

}


void MoveEnmy1(int& RE1, int& CE1, int& dirE1) {
    if (dirE1 == 1) {
        if (CE1 < 110)
            CE1 += 15;
        else
            dirE1 = -1;
    }
    else {
        if (CE1 > 2)
            CE1 -= 15;
        else
            dirE1 = 1;

    }
}

void DrawEnmy1(char X[][2000], int RE1, int CE1) {
    X[RE1][CE1] = '/';
    X[RE1][CE1 + 1] = 39;
    X[RE1][CE1 + 2] = '{';
    X[RE1][CE1 + 3] = '>';
    X[RE1 + 1][CE1] = ')';
    X[RE1 + 1][CE1 + 1] = ' ';
    X[RE1 + 1][CE1 + 2] = '(';
    X[RE1 + 1][CE1 - 1] = '_';
    X[RE1 + 1][CE1 - 2] = '_';
    X[RE1 + 1][CE1 - 3] = '_';
    X[RE1 + 1][CE1 - 4] = '_';
    X[RE1 + 1][CE1 + 3] = '_';
    X[RE1 + 1][CE1 + 4] = '_';
    X[RE1 + 1][CE1 + 5] = '_';
    X[RE1 + 1][CE1 + 6] = '_';
    X[RE1 + 2][CE1 + 6] = '\\';
    X[RE1 + 2][CE1 + 7] = '\\';
    X[RE1 + 2][CE1 - 5] = '/';
    X[RE1 + 2][CE1 - 6] = '/';
    X[RE1 + 2][CE1 - 4] = 39;
    X[RE1 + 2][CE1 - 3] = '-';
    X[RE1 + 2][CE1 - 2] = '-';
    X[RE1 + 2][CE1 - 1] = ';';
    X[RE1 + 2][CE1 + 1] = ' ';
    X[RE1 + 2][CE1 + 2] = ' ';
    X[RE1 + 2][CE1 + 1] = ';';
    X[RE1 + 2][CE1 + 2] = '-';
    X[RE1 + 2][CE1 + 3] = '-';
    X[RE1 + 2][CE1 + 4] = 39;
    int i;
    int r = RE1 + 3;
    int c = CE1 - 1;
    for (; c > CE1 + 7; c++) {
        X[r][r] = '/';
    }
}

void drawsingleblt(char X[][2000], int FSB, int RH, int CH, int& r, int& c) {
    if (FSB == 1) {
        X[r][c] = 1;
    }

}

void movesingleblt(char X[][2000], int FSB, int RH, int CH, int& r, int& c) {
    for (int i = 0; i < 10; i++) {
        if (X[r][c + 1] == ' ' && FSB == 1) {
            c++;
        }
    }
    if (X[r][c + 1] != ' ') {
        FSB = 0;
        X[r][c] = ' ';

    }


}


void drawblt(char X[][2000], int RH, int CH, char ch, int& cblt, int& f) {
    /*
    if (ch == 'g')
    {
        if (X[RM + 8][cblt] == ' ')
        {
            f = 1;
            X[RM + 8][cblt] = 1;
        }
        else
        {
            f = 0;
        }
    }
    */
}

void moveblt(char X[][2000], int RH, int CH, char ch, int& cblt, int f) {/*
    cblt = CH + 12;
    if (f == 1)
    {
        cblt += 5;
    }
    */

}


void drawenemy2(char X[][2000], int& re2, int CE1) {
    int ce2 = CE1 + 3;
    X[re2][ce2] = '$';
}


void movenemy2(char X[][2000], int& re2) {
    re2 += 10;
    if (re2 > 44) {
        re2 = 6;
    }
}


// EDIT
void DrawHero3(char X[][2000], int RH, int CH)
{
    X[RH - 0][CH + 1] = 'O';
    X[RH - 0][CH + 2] = 'O';
    X[RH - 0][CH - 1] = '-';
    X[RH - 0][CH - 2] = '-';
    X[RH - 0][CH - 3] = ',';
    X[RH + 1][CH - 5] = '/';
    X[RH + 2][CH - 6] = '/';
    X[RH + 3][CH - 7] = '/';
    X[RH + 4][CH - 8] = '/';
    X[RH + 5][CH - 9] = '/';
    X[RH + 6][CH - 10] = '(';
    X[RH + 6][CH - 11] = '-';
    X[RH + 6][CH - 12] = '-';
    X[RH + 6][CH - 13] = '.';
    X[RH + 7][CH - 14] = '(';
    X[RH + 8][CH - 12] = '-';
    X[RH + 8][CH - 11] = '-';
    X[RH + 8][CH - 10] = '.';
    X[RH + 8][CH - 9] = '_';
    X[RH + 9][CH - 8] = 96;
    X[RH + 9][CH - 7] = '-';
    X[RH + 9][CH - 6] = '-';
    X[RH + 9][CH - 5] = 89;
    X[RH + 9][CH - 4] = '-';
    X[RH + 9][CH - 3] = '.';
    X[RH + 9][CH - 2] = '_';
    X[RH + 9][CH - 1] = '_';
    X[RH + 9][CH + 0] = '_';
    X[RH + 9][CH + 1] = '_';
    X[RH + 9][CH + 2] = '_';
    X[RH + 9][CH + 3] = '_';
    X[RH + 9][CH + 4] = '_';
    X[RH + 9][CH + 5] = '_';
    X[RH + 7][CH - 9] = '-';
    X[RH + 7][CH - 8] = '.';
    X[RH + 7][CH - 7] = '_';
    X[RH + 7][CH - 6] = '_';
    X[RH + 7][CH - 5] = '_';
    X[RH + 7][CH - 4] = '_';
    X[RH + 7][CH - 3] = '_';
    X[RH + 7][CH - 2] = '_';
    X[RH + 7][CH - 1] = '_';
    X[RH + 7][CH - 0] = '_';
    X[RH + 7][CH + 1] = '_';
    X[RH + 7][CH + 2] = '_';
    X[RH + 7][CH + 3] = '_';
    X[RH + 7][CH + 4] = '_';
    X[RH + 7][CH + 5] = '_';
    X[RH + 7][CH + 6] = '_';
    X[RH + 7][CH + 7] = '_';
    X[RH + 7][CH + 8] = '_';
    X[RH + 7][CH + 9] = '_';
    X[RH + 7][CH + 10] = '_';
    X[RH + 7][CH + 11] = '.';
    X[RH + 7][CH + 12] = '-';
    X[RH + 6][CH + 13] = ')';
    X[RH + 6][CH + 14] = '-';
    X[RH + 6][CH + 15] = '-';
    X[RH + 6][CH + 16] = '.';
    X[RH + 7][CH + 17] = ')';
    X[RH + 8][CH + 15] = '-';
    X[RH + 8][CH + 14] = '-';
    X[RH + 8][CH + 13] = '.';
    X[RH + 8][CH + 12] = '_';
    X[RH + 9][CH + 11] = 39;
    X[RH + 9][CH + 10] = '-';
    X[RH + 9][CH + 9] = '-';
    X[RH + 9][CH + 8] = 89;
    X[RH + 9][CH + 7] = '.';
    X[RH + 9][CH + 6] = '_';
    X[RH + 8][CH + 7] = 'o';
    X[RH + 8][CH + 5] = 'O';
    X[RH + 8][CH + 3] = 'o';
    X[RH + 8][CH + 1] = 'O';
    X[RH + 8][CH - 1] = 'o';
    X[RH + 8][CH - 3] = 'O';
    X[RH + 8][CH - 5] = 'o';
    X[RH + 5][CH + 12] = '\\';
    X[RH + 4][CH + 11] = '\\';
    X[RH + 3][CH + 10] = '\\';
    X[RH + 2][CH + 9] = '\\';
    X[RH + 1][CH + 8] = '\\';
    X[RH - 0][CH + 6] = '.';
    X[RH - 0][CH + 5] = '-';
    X[RH - 0][CH + 4] = '-';
    X[RH + 1][CH] = '^';
    X[RH + 1][CH + 1] = '^';
    X[RH + 1][CH + 2] = '^';
    X[RH + 1][CH + 3] = '^';
    X[RH + 1][CH + 4] = '^';
    X[RH + 2][CH] = '|';
    X[RH + 3][CH] = '|';
    X[RH + 4][CH - 1] = '(';
    X[RH + 4][CH] = 'c';
    X[RH + 2][CH + 5] = '|';
    X[RH + 3][CH + 2] = '(';
    X[RH + 3][CH + 3] = 'o';
    X[RH + 3][CH + 4] = ')';
    X[RH + 3][CH + 5] = 'o';
    X[RH + 3][CH + 6] = ')';
    X[RH + 4][CH + 6] = '_';
    X[RH + 4][CH + 7] = ')';
    X[RH + 5][CH + 6] = ')';
    X[RH + 5][CH + 5] = '_';
    X[RH + 5][CH + 4] = '_';
    X[RH + 5][CH] = '|';
    X[RH + 6][CH] = 'L';
    X[RH + 5][CH] = '|';
    X[RH + 6][CH + 5] = '/';
    X[RH + 6][CH + 1] = '_';
    X[RH + 6][CH + 2] = '_';
    X[RH + 6][CH + 3] = '_';
    X[RH + 6][CH + 4] = '_';
    X[RH + 7][CH + 0] = '/';
    X[RH + 7][CH + 4] = '\\';

}

void DrawHero(char X[][2000], int RH, int CH) {
    if (CH > 780 && CH < 1500)
        return DrawHero3(X, RH, CH);

    X[RH][CH] = '^';
    X[RH][CH + 1] = '^';
    X[RH][CH + 2] = '^';
    X[RH][CH + 3] = '^';
    X[RH][CH + 4] = '^';
    X[RH + 1][CH] = '|';
    X[RH + 2][CH] = '|';
    X[RH + 3][CH - 1] = '(';
    X[RH + 3][CH] = 'c';
    X[RH + 1][CH + 5] = '|';
    X[RH + 2][CH + 2] = '(';
    X[RH + 2][CH + 3] = 'o';
    X[RH + 2][CH + 4] = ')';
    X[RH + 2][CH + 5] = 'o';
    X[RH + 2][CH + 6] = ')';
    X[RH + 3][CH + 6] = '_';
    X[RH + 3][CH + 7] = ')';
    X[RH + 4][CH + 6] = ')';
    X[RH + 4][CH + 5] = '_';
    X[RH + 4][CH + 4] = '_';
    X[RH + 4][CH] = '|';
    X[RH + 5][CH] = 'L';
    X[RH + 4][CH] = '|';
    X[RH + 5][CH + 5] = '/';
    X[RH + 5][CH + 1] = '_';
    X[RH + 5][CH + 2] = '_';
    X[RH + 5][CH + 3] = '_';
    X[RH + 5][CH + 4] = '_';
    X[RH + 6][CH + 0] = '/';
    X[RH + 7][CH - 1] = '|';
    X[RH + 8][CH - 1] = '|';
    X[RH + 9][CH - 1] = 'L';


    X[RH + 9][CH + 3] = '_';
    X[RH + 9][CH + 4] = '_';
    X[RH + 9][CH + 6] = '/';
    X[RH + 6][CH + 5] = 59;
    X[RH + 7][CH + 6] = '|';
    X[RH + 8][CH + 6] = '|';

    X[RH + 7][CH - 0] = 'L';
    X[RH + 7][CH + 1] = '_';
    X[RH + 7][CH + 2] = '_';
    X[RH + 7][CH + 3] = '_';
    X[RH + 7][CH + 4] = '_';
    X[RH + 7][CH + 5] = '_';
    X[RH + 7][CH + 7] = '_';
    X[RH + 7][CH + 8] = '_';
    X[RH + 7][CH + 8] = '_';
    X[RH + 7][CH + 9] = '_';
    X[RH + 7][CH + 10] = 204;
    X[RH + 8][CH + 10] = 202;


    X[RH + 6][CH + 1] = '_';
    X[RH + 6][CH + 2] = '_';
    X[RH + 6][CH + 3] = '_';
    X[RH + 6][CH + 4] = '_';
    X[RH + 6][CH + 7] = '_';
    X[RH + 6][CH + 8] = '_';
    X[RH + 6][CH + 9] = 254;
    X[RH + 6][CH + 10] = 219;
    X[RH + 6][CH + 11] = 219;
    X[RH + 6][CH + 12] = 196;
    X[RH + 6][CH + 13] = 196;
    X[RH + 6][CH + 14] = 175;


    X[RH + 10][CH + 0] = '#';
    X[RH + 10][CH + 2] = '#';
    X[RH + 10][CH - 1] = '|';
    X[RH + 10][CH + 3] = '|';


    X[RH + 11][CH + 0] = 'L';
    X[RH + 11][CH + 2] = 'L';
    X[RH + 11][CH + 3] = '_';

    X[RH + 12][CH + 3] = ')';
    X[RH + 12][CH + 2] = '_';
    X[RH + 12][CH + 1] = '_';
    X[RH + 12][CH + 0] = '_';

    X[RH + 12][CH - 1] = '(';
    X[RH + 12][CH + 4] = ')';


}


void drawenemy3(char X[][2000]) {
    int r, c;
    /*for (r = 10; r<30; r++)
    {
        for (c=99; c<110; c++)
        {
            X[r][c] = 219;
        }
    }
    */
}


void drawelv(char X[][2000], int r, int c) {


    /*for (r = 44; r > 30; r--)
    {
        X[r][c] = 124;
    }


    c = 82;
    for (r = 44; r > 30; r--)
    {
        X[r][c] = 124;

    }

    c = 94;

    for (r = 44; r > 30; r--)
    {
        X[r][c] = 124;

    }
    r = 30;
    for (c = 70; c <= 94; c++)
    {
        X[r][c] = '-';
    }
    */
    for (c = 327; c < 347; c++) {
        X[r][c] = 219;
    }
}

void movelv(int& RH, int& relv, int& celv, int& CH, char X[][2000], int& dir) {
    int r, c, elvFlag = 0, FRoom = 0;
    for (c = celv; c < celv + 15; c++) {
        if (X[relv - 1][c] == ')') {
            elvFlag = 1;
        }

    }
    if (dir == 1 && elvFlag == 1 && FRoom == 0) {
        relv--;
        RH--;
        if (relv < 20) {
            dir = 0;
        }
    }
    else if (dir == 0 && elvFlag == 1 && FRoom == 0) {
        relv += 2;
        RH++;
        if (relv > 43) {
            dir = 1;
        }
    }
    if (X[relv][celv] == '8') {
        FRoom = 0;
    }

}

void drawelv2(char X[][2000], int relv, int celv) {
    for (int c = celv; c < celv + 20; c++) {
        X[relv][c] = 219;
    }
}

void movelv2(int& RH, int& relv, int& celv, int& CH, char X[][2000], int& dir) {
    int r, c, elvFlag = 0, FRoom = 0;
    for (c = celv; c < celv + 15; c++) {
        if (X[relv - 1][c] == ')') {
            elvFlag = 1;
        }

    }
    if (dir == 1 && elvFlag == 1 && FRoom == 0) {
        relv--;
        RH--;
        if (relv < 20) {
            dir = 0;
        }
    }
    else if (dir == 0 && elvFlag == 1 && FRoom == 0) {
        relv += 2;
        RH++;
        if (relv > 43) {
            dir = 1;
        }
    }
    if (X[relv][celv] == '8') {
        FRoom = 0;
    }

}


void health() {
    if (1) {
    }

}

void
MoveHero3(int& RH, int& CH, char ch, int& st, int& end, int& f, char X[][2000], int posroomSR, int posroomER, int posSC,
    int posEC, int& CLFS, int& CLFE, int CBB) {
    int r, c;
    int fm = 1, flagRMove = 0;

    if (ch == 'u') {
        if (RH - 2 > 1)
            RH -= 2;
    }
    else if (ch == 'j') {
        if (X[RH + 13][CH] == ' ' && X[RH + 13][CH - 1] == ' ' && X[RH + 13][CH + 1] == ' ' &&
            X[RH + 13][CH + 2] == ' ' &&
            X[RH + 13][CH + 3] == ' ' && X[RH + 13][CH + 4] == ' ' && X[RH + 13][CH - 1] != 205 &&
            X[RH + 13][CH] != 205 &&
            X[RH + 13][CH + 1] != 205 && X[RH + 13][CH + 2] != 205) {
            RH += 2;
        }
    }
    else if (ch == 'd') {
        for (int i = 0; i < 5; i++) {
            for (r = RH; r < RH + 13; r++) {
                for (c = CH + 15; c < CH + 20; c++) {
                    if (X[r][c] != ' ' && X[r][c] != 219 && X[r][c] != 2 && (r < posroomSR && r > posroomER) &&
                        (c < posSC && c > posEC)) {
                        flagRMove = 0;
                    }
                }
            }
            if (c > 520 && c < 600) {
                flagRMove = 1;
            }
            if (flagRMove != 0) {
                CH++;
                if (CH > 80 && CH < CBB) {
                    st++;
                    end++;
                    CLFS++;
                    CLFE++;
                    ch = 'p';
                }
            }
            flagRMove = 1;
        }
    }
    else if (ch == 'a') {
        for (int i = 0; i < 5; i++) {
            for (r = RH; r < RH + 13; r++) {
                for (c = CH - 2; c > CH - 3; c--) {
                    if (X[r][c] != ' ') {
                        flagRMove = 1;
                    }
                }
            }
            if (flagRMove != 1) {
                CH--;
                if (CH > 0 && CH < 80) {
                    CH--;
                    st = 0;
                    end = 211;
                }
                if (CH > 80 && CH < 1500) {
                    CH--;
                    st--;
                    end--;
                    CLFS--;
                    CLFE--;
                    ch = 'p';
                }
            }
            flagRMove = 0;
        }
    }
}


void MoveHero(int& RH, int& CH, char ch, int& st, int& end, int& f, char X[][2000], int posroomSR, int posroomER, int posSC,
    int posEC, int& CLFS, int& CLFE, int CBB) {
    if (CH > 770 && CH < 1500)
        return MoveHero3(RH, CH, ch, st, end, f, X, posroomSR, posroomER, posSC, posEC,
            CLFS, CLFE, CBB);
    int r, c;
    int fm = 1, flagRMove = 0;

    if (ch == 'w' && CH > 170 && CH < 180) {
        RH -= 5;
    }
    if (ch == 's' && CH > 170 && CH < 180) {
        RH += 5;
    }

    if (ch == 'd') {
        for (int i = 0; i < 5; i++) {
            for (r = RH; r < RH + 13; r++) {
                for (c = CH + 15; c < CH + 20; c++) {
                    if (X[r][c] != ' ' && X[r][c] != 219 && X[r][c] != 2 && (r < posroomSR && r > posroomER) &&
                        (c < posSC && c > posEC)) {
                        flagRMove = 0;
                    }
                }
            }


            if (c > 520 && c < 600) {
                flagRMove = 1;
            }
            if (flagRMove != 0) {
                CH++;
                if (CH > 80 && CH < CBB) {
                    st++;
                    end++;
                    CLFS++;
                    CLFE++;
                    ch = 'p';
                }
            }
            flagRMove = 1;
        }
    }


    if (ch == 'k') {
        for (int i = 0; i < 30; i++) {
            for (r = RH; r < RH + 13; r++) {
                for (c = CH + 15; c < CH + 16; c++) {
                    if (X[r][c] != ' ' && X[r][c] != 219 && X[r][c] != 2) {
                        flagRMove = 1;
                    }
                }

            }
            if (flagRMove != 1) {
                CH++;
                if (CH > 80 && CH < 700) {
                    st++;
                    end++;
                    CLFS++;
                    CLFE++;
                    ch = 'p';
                }
            }
            flagRMove = 0;
        }
    }


    if (ch == 'a') {
        for (int i = 0; i < 5; i++) {
            for (r = RH; r < RH + 13; r++) {
                for (c = CH - 2; c > CH - 3; c--) {
                    if (X[r][c] != ' ') {
                        flagRMove = 1;

                    }
                }
            }
            if (flagRMove != 1) {
                CH--;
                if (CH > 0 && CH < 80) {
                    CH--;
                    st = 0;
                    end = 211;
                }
                if (CH > 80 && CH < 700) {
                    CH--;
                    st--;
                    end--;
                    CLFS--;
                    CLFE--;
                    ch = 'p';
                }
            }
            flagRMove = 0;
        }

    }

    if (ch == ' ') {
        for (int i = 0; i < 12; i++) {
            for (int c = CH; c < CH + 12; c++) {
                if (X[RH - 1][c] != ' ') {
                    flagRMove = 1;
                }
            }

            if (flagRMove != 1) {
                RH--;
                f = 1;
            }

        }
        flagRMove = 0;
    }
    else

        f = 0;

}
void Gravity(char X[][2000], int& RH, int& CH) {
    if (CH < 770 || CH > 1500) {
        if (X[RH + 13][CH] == ' ' && X[RH + 13][CH - 1] == ' ' && X[RH + 13][CH + 1] == ' ' &&
            X[RH + 13][CH + 2] == ' ' &&
            X[RH + 13][CH + 3] == ' ' && X[RH + 13][CH + 4] == ' ' && X[RH + 13][CH - 1] != 205 &&
            X[RH + 13][CH] != 205 &&
            X[RH + 13][CH + 1] != 205 && X[RH + 13][CH + 2] != 205) {
            RH++;
        }
    }
}


void DrawRoomEndG(char X[][2000], int RR, int CR) {
    int i;
    for (i = CR; i < 210; i++) {
        X[RR][i] = 220;
    }

    X[RR + 1][CR] = 219;
    X[RR + 2][CR] = 219;
    X[RR + 3][CR] = 219;
    X[RR + 4][CR] = 219;
    X[RR + 5][CR] = 219;
    X[RR + 6][CR - 4] = 201;
    X[RR + 7][CR - 4] = 186;
    X[RR + 8][CR - 4] = 186;
    X[RR + 9][CR - 4] = 186;
    X[RR + 10][CR - 4] = 186;
    X[RR + 8][CR - 2] = 205;
    X[RR + 9][CR - 2] = 185;
    X[RR + 10][CR - 2] = 185;
    X[RR + 11][CR - 2] = 185;
    X[RR + 12][CR - 2] = 185;
    X[RR + 9][CR - 1] = 186;
    X[RR + 10][CR - 1] = 205;
    X[RR + 11][CR - 1] = 186;
    X[RR + 12][CR - 1] = 205;
    X[RR + 9][CR - 0] = 186;
    X[RR + 10][CR - 0] = 205;
    X[RR + 11][CR - 0] = 186;
    X[RR + 12][CR - 0] = 205;
    X[RR + 9][CR + 1] = 186;
    X[RR + 10][CR + 1] = 205;
    X[RR + 11][CR + 1] = 186;
    X[RR + 12][CR + 1] = 205;
    X[RR + 13][CR - 2] = 186;
    X[RR + 13][CR - 1] = 186;
    X[RR + 13][CR - 0] = 186;
    X[RR + 13][CR + 1] = 186;
    X[RR + 14][CR - 2] = 206;
    X[RR + 14][CR - 1] = 205;
    X[RR + 14][CR - 0] = 205;
    X[RR + 14][CR + 1] = 205;
    X[RR + 14][CR + 2] = 206;
    X[RR + 8][CR - 2] = 206;
    X[RR + 8][CR - 1] = 205;
    X[RR + 8][CR - 0] = 205;
    X[RR + 8][CR + 1] = 205;
    X[RR + 8][CR + 2] = 206;
    X[RR + 16][CR + 2] = '(';
    X[RR + 16][CR + 3] = ')';
    X[RR + 9][CR + 2] = 185;
    X[RR + 10][CR + 2] = 185;
    X[RR + 11][CR + 2] = 185;
    X[RR + 12][CR + 2] = 185;
    X[RR + 13][CR + 2] = 185;
    X[RR + 11][CR - 4] = 186;
    X[RR + 12][CR - 4] = 186;
    X[RR + 13][CR - 4] = 186;
    X[RR + 14][CR - 4] = 186;
    X[RR + 15][CR - 4] = 186;
    X[RR + 16][CR - 4] = 186;
    X[RR + 17][CR - 4] = 186;
    X[RR + 18][CR - 4] = 186;
    X[RR + 19][CR - 4] = 186;
    X[RR + 20][CR - 4] = 186;
    X[RR + 21][CR - 4] = 186;
    X[RR + 22][CR - 4] = 186;
    X[RR + 23][CR - 4] = 186;
    X[RR + 24][CR - 4] = 186;
    X[RR + 6][CR + 5] = 202;
    X[RR + 6][CR - 4] = 206;
    X[RR + 6][CR + 4] = 202;
    X[RR + 6][CR - 1] = 202;
    X[RR + 6][CR - 0] = 202;
    X[RR + 6][CR - 2] = 202;
    X[RR + 6][CR - 3] = 202;
    X[RR + 6][CR + 1] = 202;
    X[RR + 6][CR + 2] = 202;
    X[RR + 6][CR + 3] = 202;
    X[RR + 6][CR + 0] = 202;
    X[RR + 5][CR + 5] = '_';
    X[RR + 5][CR - 4] = '_';
    X[RR + 5][CR + 4] = '_';
    X[RR + 5][CR - 1] = '_';
    X[RR + 5][CR - 0] = '_';
    X[RR + 5][CR - 2] = '_';
    X[RR + 5][CR - 3] = '_';
    X[RR + 5][CR + 1] = '_';
    X[RR + 5][CR + 2] = '_';
    X[RR + 5][CR + 3] = '_';
    X[RR + 5][CR + 0] = '_';
    X[RR + 6][CR + 4] = 206;
    X[RR + 7][CR + 4] = 186;
    X[RR + 8][CR + 4] = 186;
    X[RR + 9][CR + 4] = 186;
    X[RR + 10][CR + 4] = 186;
    X[RR + 11][CR + 4] = 186;
    X[RR + 12][CR + 4] = 186;
    X[RR + 13][CR + 4] = 186;
    X[RR + 14][CR + 4] = 186;
    X[RR + 15][CR + 4] = 186;
    X[RR + 16][CR + 4] = 186;
    X[RR + 17][CR + 4] = 186;
    X[RR + 18][CR + 4] = 186;
    X[RR + 19][CR + 4] = 186;
    X[RR + 20][CR + 4] = 186;
    X[RR + 21][CR + 4] = 186;
    X[RR + 22][CR + 4] = 186;
    X[RR + 23][CR + 4] = 186;
    X[RR + 24][CR + 4] = 186;
    X[RR + 6][CR + 5] = 206;
    X[RR + 7][CR + 5] = 185;
    X[RR + 8][CR + 5] = 185;
    X[RR + 9][CR + 5] = 185;
    X[RR + 10][CR + 5] = 185;
    X[RR + 11][CR + 5] = 185;
    X[RR + 12][CR + 5] = 185;
    X[RR + 13][CR + 5] = 185;
    X[RR + 14][CR + 5] = 185;
    X[RR + 15][CR + 5] = 185;
    X[RR + 16][CR + 5] = 185;
    X[RR + 17][CR + 5] = 185;
    X[RR + 18][CR + 5] = 185;
    X[RR + 19][CR + 5] = 185;
    X[RR + 20][CR + 5] = 185;
    X[RR + 21][CR + 5] = 185;
    X[RR + 22][CR + 5] = 185;
    X[RR + 23][CR + 5] = 185;
    X[RR + 24][CR + 5] = 185;

    for (i = CR - 5; i < 210; i++) {
        X[RR + 25][i] = 220;
    }


}

void drawdog(char X[][2000]) {
    /*
    int rd = 42, cd = 50;
    X[rd][cd] = '""';
    X[rd][cd + 2] = '\\';
    X[rd][cd + 3] = '_';
    X[rd][cd + 4] = '_';
    X[rd][cd + 5] = '_';
    X[rd + 1][cd + 6] = '\\';
    X[rd + 1][cd + 4] = '_';
    X[rd + 1][cd + 3] = '_';
    X[rd + 1][cd + 2] = '_';
    X[rd + 2][cd + 6] = '|';
    X[rd + 2][cd + 5] = '|';
    X[rd + 1][cd] = '|';
    X[rd + 2][cd + 1] = '|';
    X[rd][cd - 1] = '.';
    X[rd - 1][cd] = '_';
    X[rd - 1][cd + 1] = '//';
    X[rd - 1][cd + 2] = '//';
    X[rd - 1][cd - 1] = '\\';
    X[rd - 1][cd - 2] = '\\';
    */
}

// EDIT
void drawSpaceEnemy(char X[][2000], int RSE, int CSE, int SEF)
{
    if (SEF == 1)
    {
        X[RSE][CSE] = '-';
        X[RSE][CSE + 1] = '-';
        X[RSE][CSE + 2] = '-';
        X[RSE][CSE + 3] = '-';
        X[RSE - 1][CSE + 0] = '\\';
        X[RSE - 2][CSE - 1] = '\\';
        X[RSE - 3][CSE - 1] = ')';
        X[RSE - 3][CSE - 2] = 'o';
        X[RSE - 3][CSE - 3] = '(';
        X[RSE - 1][CSE + 3] = '/';
        X[RSE - 2][CSE + 4] = '/';
        X[RSE - 3][CSE + 4] = '(';
        X[RSE - 3][CSE + 5] = 'o';
        X[RSE - 3][CSE + 6] = ')';
        X[RSE + 1][CSE - 1] = '/'; X[RSE + 1][CSE - 0] = '('; X[RSE + 1][CSE + 1] = 'o'; X[RSE + 1][CSE + 2] = ')';
        X[RSE + 2][CSE - 2] = '(';	X[RSE + 2][CSE + 1] = '<';
        X[RSE + 3][CSE - 1] = '\\';	X[RSE + 3][CSE + 1] = '-'; X[RSE + 3][CSE + 2] = '-';
        X[RSE + 1][CSE + 4] = '\\';
        X[RSE + 2][CSE + 5] = ')';
        X[RSE + 3][CSE + 4] = '/';
        X[RSE + 4][CSE - 3] = '(';
        X[RSE + 4][CSE - 4] = '_';
        X[RSE + 4][CSE - 5] = '_';
        X[RSE + 4][CSE - 6] = '\\';
        X[RSE + 4][CSE - 7] = '|';
        X[RSE + 4][CSE - 8] = '_';
        X[RSE + 4][CSE - 9] = '|';	X[RSE + 3][CSE - 9] = '|';	X[RSE + 2][CSE - 9] = '|';	X[RSE + 1][CSE - 9] = '|';	X[RSE + 0][CSE - 9] = '|'; X[RSE - 1][CSE - 9] = '\\';
        X[RSE + 4][CSE - 10] = '|'; X[RSE + 3][CSE - 10] = '|';	X[RSE + 2][CSE - 10] = '|';	X[RSE + 1][CSE - 10] = '|';	X[RSE + 0][CSE - 10] = '|'; X[RSE - 1][CSE - 10] = '/';
        X[RSE + 4][CSE - 11] = '_';	X[RSE + 5][CSE - 11] = '(';	X[RSE + 5][CSE - 10] = '|'; X[RSE + 6][CSE - 10] = '|';
        X[RSE + 4][CSE - 12] = '|';	X[RSE + 5][CSE - 12] = '_';
        X[RSE + 4][CSE - 13] = '/';
        X[RSE + 4][CSE - 2] = '-';
        X[RSE + 4][CSE - 1] = '-';
        X[RSE + 4][CSE - 0] = '=';
        X[RSE + 4][CSE + 1] = '=';
        X[RSE + 4][CSE + 2] = '=';
        X[RSE + 4][CSE + 3] = '=';
        X[RSE + 4][CSE + 4] = '-';
        X[RSE + 4][CSE + 5] = '-';
        X[RSE + 4][CSE + 6] = ')';
        X[RSE + 5][CSE + 6] = '\\';
        X[RSE + 6][CSE + 7] = '\\';
        X[RSE + 5][CSE + 5] = '/';
        X[RSE + 6][CSE + 5] = '\\';
        X[RSE + 7][CSE + 6] = '\\';
        X[RSE + 7][CSE + 7] = '_';
        X[RSE + 7][CSE + 8] = '-';
        X[RSE + 7][CSE + 9] = '/';
        X[RSE + 6][CSE + 10] = '/';
        X[RSE + 6][CSE + 8] = '/';
        X[RSE + 5][CSE + 8] = '\\';
        X[RSE + 5][CSE + 9] = '[';
        X[RSE + 5][CSE + 10] = '[';
        X[RSE + 5][CSE + 11] = '/';
        X[RSE + 5][CSE + 4] = '=';
        X[RSE + 5][CSE + 3] = '=';
        X[RSE + 5][CSE + 2] = '=';
        X[RSE + 5][CSE + 1] = '=';
        X[RSE + 5][CSE + 0] = '=';
        X[RSE + 5][CSE - 1] = '=';
        X[RSE + 5][CSE - 2] = '\\';
        X[RSE + 5][CSE - 3] = '_';
        X[RSE + 5][CSE - 4] = '_';
        X[RSE + 5][CSE - 5] = '_';
        X[RSE + 5][CSE - 6] = '_';
        X[RSE + 5][CSE - 7] = '_';
        X[RSE + 5][CSE - 8] = '_';
        X[RSE + 5][CSE - 9] = '_';
        X[RSE + 5][CSE - 12] = ' ';
        X[RSE + 6][CSE - 9] = '|';
        X[RSE + 6][CSE + 0] = '(';
        X[RSE + 7][CSE + 0] = '/';
        X[RSE + 8][CSE - 1] = '|';
        X[RSE + 8][CSE - 0] = '=';
        X[RSE + 8][CSE + 1] = '=';
        X[RSE + 8][CSE + 2] = '=';
        X[RSE + 8][CSE + 3] = '=';
        X[RSE + 8][CSE + 4] = '|';
        X[RSE + 9][CSE - 2] = '(';
        X[RSE + 10][CSE - 2] = '|';
        X[RSE + 11][CSE - 2] = '[';
        X[RSE + 12][CSE - 2] = '_';
        X[RSE + 12][CSE - 1] = '|';
        X[RSE + 12][CSE - 0] = '|';
        X[RSE + 13][CSE + 1] = ']';
        X[RSE + 13][CSE + 2] = '[';
        X[RSE + 13][CSE - 3] = '(';
        X[RSE + 9][CSE + 1] = '/';
        X[RSE + 10][CSE + 1] = ')';
        X[RSE + 11][CSE + 1] = ']';
        X[RSE + 9][CSE + 2] = '\\';
        X[RSE + 10][CSE + 2] = '(';
        X[RSE + 11][CSE + 2] = '[';
        X[RSE + 9][CSE + 5] = ')';
        X[RSE + 10][CSE + 5] = '|';
        X[RSE + 11][CSE + 5] = ']';
        X[RSE + 12][CSE + 5] = '_';
        X[RSE + 13][CSE + 6] = ')';
        X[RSE + 12][CSE + 4] = '|';
        X[RSE + 12][CSE + 3] = '|';
        X[RSE + 6][CSE + 1] = '-';
        X[RSE + 6][CSE + 2] = '-';
        X[RSE + 6][CSE + 3] = ')';
        X[RSE + 7][CSE + 3] = '\\';
    }
}

void moveSpaceEnemy(char X[][2000], int& RSE, int& CSE, int& CSED) {
    if (CSED == 1) {
        if (RSE < 50 - 14)
            RSE += 5;
        else
            CSED = -1;
    }
    else {
        if (RSE > 5 + 4)
            RSE -= 5;
        else
            CSED = 1;
    }
}

void clearSE(char X[][2000], int RSE, int CSE, int& SEF, int& SECT) {

    int c;
    for (int r = RSE - 3; r < RSE + 14; r++) {
        for (c = CSE - 13; c < CSE + 13; c++) {
            if (X[r][c] == 1) {
                SECT++;
            }
        }
    }
    if (SECT >= 3) {
        SEF = 0;
    }

}

void Drawgirl(char X[][2000], int RGG, int CGG) {


    X[RGG + 5][CGG - 1] = '\\';
    X[RGG + 5][CGG + 4] = '/';
    X[RGG + 6][CGG - 1] = '/';
    X[RGG + 7][CGG - 2] = '\\';
    X[RGG + 7][CGG - 1] = '_';
    X[RGG + 7][CGG - 0] = '_';
    X[RGG + 8][CGG + 1] = '#';
    X[RGG + 8][CGG + 3] = '#';
    X[RGG + 8][CGG + 0] = '|';
    X[RGG + 8][CGG + 4] = '|';
    X[RGG + 9][CGG + 1] = 'J';
    X[RGG + 9][CGG + 3] = 'J';
    X[RGG + 9][CGG + 0] = '_';
    X[RGG + 10][CGG + 0] = '(';
    X[RGG + 10][CGG - 1] = '(';
    X[RGG + 10][CGG + 1] = '_';
    X[RGG + 10][CGG + 2] = '_';
    X[RGG + 10][CGG + 4] = ')';
    X[RGG + 10][CGG + 3] = '_';
    X[RGG + 4][CGG + 4] = ')';
    X[RGG + 5][CGG + 5] = '-';
    X[RGG + 5][CGG + 6] = '-';
    X[RGG + 5][CGG + 7] = '-';
    X[RGG + 5][CGG + 8] = '-';
    X[RGG + 5][CGG + 9] = 39;
    X[RGG + 4][CGG + 8] = '\\';
    X[RGG + 3][CGG + 8] = '/';
    X[RGG + 2][CGG + 9] = 39;
    X[RGG + 2][CGG + 8] = '_';
    X[RGG + 2][CGG + 7] = '_';
    X[RGG + 2][CGG + 6] = '<';
    X[RGG + 1][CGG + 7] = '/';
    X[RGG + 1][CGG - 1] = '\\';
    X[RGG + 1][CGG - 0] = '_';
    X[RGG - 1][CGG - 1] = '/';
    X[RGG - 0][CGG - 2] = '|';
    X[RGG - 1][CGG + 0] = '\\';
    X[RGG - 0][CGG + 1] = '\\';
    X[RGG - 0][CGG + 2] = '/';
    X[RGG - 1][CGG + 3] = '/';
    X[RGG - 1][CGG + 4] = '\\';
    X[RGG + 0][CGG + 5] = '\\';
    X[RGG + 0][CGG + 6] = '-';
    X[RGG + 0][CGG + 7] = '-';
    X[RGG + 0][CGG + 8] = '-';
    X[RGG + 0][CGG + 9] = '.';
    X[RGG + 0][CGG + 7] = '-';
    X[RGG + 6][CGG + 4] = '\\';
    X[RGG + 5][CGG + 3] = 'o';
    X[RGG + 5][CGG + 2] = 'o';
    X[RGG + 5][CGG + 1] = 'o';
    X[RGG + 5][CGG + 0] = 'o';
    X[RGG + 7][CGG + 4] = '|';
    X[RGG + 4][CGG - 3] = '/';
    X[RGG + 4][CGG - 2] = '_';
    X[RGG + 4][CGG - 1] = '_';
    X[RGG + 4][CGG - 0] = '_';
    X[RGG + 4][CGG + 1] = ',';
    X[RGG + 3][CGG - 2] = '_';
    X[RGG + 3][CGG - 1] = 'C';
    X[RGG + 2][CGG - 0] = 'O';
    X[RGG + 2][CGG + 1] = ')';
    X[RGG + 2][CGG + 2] = '(';
    X[RGG + 2][CGG + 3] = 'O';
    X[RGG + 2][CGG + 4] = ')';
    X[RGG + 2][CGG - 1] = '(';
}

void startBackground(char x[][2000]) {

    int r = 0;
    int c = 0;
    for (r = 0; r < 50; r++) {
        for (c = 0; c < 2000; c++) {
            x[r][c] = ' ';
        }
    }
    for (int i = 95; i < 105; i++) {
        x[10][i] = 3;
    }

}

void press(char X[][2000], int rpress, int cpress) {
    X[rpress][cpress] = 'P';
    X[rpress][cpress + 1] = 'R';
    X[rpress][cpress + 2] = 'E';
    X[rpress][cpress + 3] = 'S';
    X[rpress][cpress + 4] = 'S';
    X[rpress][cpress + 5] = ' ';
    X[rpress][cpress + 6] = 'A';
    X[rpress][cpress + 7] = 'N';
    X[rpress][cpress + 8] = 'Y';
    X[rpress][cpress + 9] = ' ';
    X[rpress][cpress + 10] = 'K';
    X[rpress][cpress + 11] = 'E';
    X[rpress][cpress + 12] = 'Y';
    X[rpress][cpress + 14] = 'T';
    X[rpress][cpress + 15] = 'O';
    X[rpress][cpress + 17] = 'S';
    X[rpress][cpress + 18] = 'T';
    X[rpress][cpress + 19] = 'A';
    X[rpress][cpress + 20] = 'R';
    X[rpress][cpress + 21] = 'T';
}

void laser(char X[][2000], int& disp, int& RH, int& CH, int F5, int FStopL) {

    if (F5 == 1) {
        int r = 37;
        int dispp = disp;
        int dieFlag = 0;
        char z = 22;
        if (disp < 612) {
            dispp = 650 - 18;
            disp = 650 - 18;
        }

        for (int c = 652 - 18; c > disp; c--) {
            if (X[r][c] != ' ' && X[r][c] != z) {
                dieFlag = 1; //off
                FStopL = 0;
            }
            X[r][c] = 22;
        }
        if (dieFlag == 1) //off
        {
            //RM -= 6;
            //CH -= 30;
        }
    }
}

void DrawMouse(char X[][2000], int RM, int CM) {
    X[RM][CM] = '<';
    X[RM][CM + 1] = ';';
    X[RM][CM + 2] = '_';
    X[RM][CM + 3] = '_';
    X[RM][CM + 4] = '_';
    X[RM + 1][CM + 2] = '"';
    X[RM + 1][CM + 4] = '"';
    X[RM][CM + 5] = ')';
    X[RM][CM + 6] = '-';
    X[RM][CM + 7] = '-';
    X[RM][CM + 8] = '-';
    X[RM][CM + 9] = '-';
    X[RM - 1][CM + 1] = 'o';
    X[RM - 1][CM + 2] = 'o';
    X[RM - 1][CM + 3] = '_';
    X[RM - 1][CM + 4] = '_';
}

void movemouse(int& CMS, int& direS) {
    if (direS == 1) {
        if (CMS < 260)
            CMS += 10;
        else
            direS = -1;
    }
    else {
        if (CMS > 203)
            CMS -= 10;
        else
            direS = 1;

    }
}

void CreateBulletArrays(int Rblt[], int Cblt[], int Fblt[], int& ctBullet, char ch, int& RH, int& CH) {
    if (ch == 'f') {
        Rblt[ctBullet] = RH + 6;
        Cblt[ctBullet] = CH + 15;
        Fblt[ctBullet] = 1;
        ctBullet++;
    }

}

void DrawBullet(char X[][2000], int flag, int r, int c) {
    if (flag == 1) {
        X[r][c] = 1;
    }
}

void HarrakElBullet(char X[][2000], int& r, int& c, int& flag) {
    for (int i = 0; i < 15; i++) {
        if (X[r][c + 1] == ' ') {
            c++;
            if (c >= 1900) c = 1900;
        }
        else {
            c++;
            if (c >= 1900) c = 1900;
            X[r][c] = ' ';
            flag = 0;
        }
    }
    if (c >= 1900) c = 1900;

}

void DrawBigroom(char X[][2000], int RBB, int CBB) {
    int i;
    for (i = 0; i < 150; i++) {
        X[RBB][CBB + i] = 220;
    }

    X[RBB + 1][CBB] = 219;
    X[RBB + 2][CBB] = 219;
    X[RBB + 3][CBB] = 219;
    X[RBB + 4][CBB] = 219;
    X[RBB + 5][CBB] = 219;
    X[RBB + 6][CBB - 4] = 201;
    X[RBB + 7][CBB - 4] = 186;
    X[RBB + 8][CBB - 4] = 186;
    X[RBB + 9][CBB - 4] = 186;
    X[RBB + 10][CBB - 4] = 186;
    X[RBB + 8][CBB - 2] = 205;
    X[RBB + 9][CBB - 2] = 185;
    X[RBB + 10][CBB - 2] = 185;
    X[RBB + 11][CBB - 2] = 185;
    X[RBB + 12][CBB - 2] = 185;
    X[RBB + 9][CBB - 1] = 186;
    X[RBB + 10][CBB - 1] = 205;
    X[RBB + 11][CBB - 1] = 186;
    X[RBB + 12][CBB - 1] = 205;
    X[RBB + 9][CBB - 0] = 186;
    X[RBB + 10][CBB - 0] = 205;
    X[RBB + 11][CBB - 0] = 186;
    X[RBB + 12][CBB - 0] = 205;
    X[RBB + 9][CBB + 1] = 186;
    X[RBB + 10][CBB + 1] = 205;
    X[RBB + 11][CBB + 1] = 186;
    X[RBB + 12][CBB + 1] = 205;
    X[RBB + 13][CBB - 2] = 186;
    X[RBB + 13][CBB - 1] = 186;
    X[RBB + 13][CBB - 0] = 186;
    X[RBB + 13][CBB + 1] = 186;
    X[RBB + 14][CBB - 2] = 206;
    X[RBB + 14][CBB - 1] = 205;
    X[RBB + 14][CBB - 0] = 205;
    X[RBB + 14][CBB + 1] = 205;
    X[RBB + 14][CBB + 2] = 206;
    X[RBB + 8][CBB - 2] = 206;
    X[RBB + 8][CBB - 1] = 205;
    X[RBB + 8][CBB - 0] = 205;
    X[RBB + 8][CBB + 1] = 205;
    X[RBB + 8][CBB + 2] = 206;
    X[RBB + 16][CBB + 2] = '(';
    X[RBB + 16][CBB + 3] = ')';
    X[RBB + 9][CBB + 2] = 185;
    X[RBB + 10][CBB + 2] = 185;
    X[RBB + 11][CBB + 2] = 185;
    X[RBB + 12][CBB + 2] = 185;
    X[RBB + 13][CBB + 2] = 185;
    X[RBB + 11][CBB - 4] = 186;
    X[RBB + 12][CBB - 4] = 186;
    X[RBB + 13][CBB - 4] = 186;
    X[RBB + 14][CBB - 4] = 186;
    X[RBB + 15][CBB - 4] = 186;
    X[RBB + 16][CBB - 4] = 186;
    X[RBB + 17][CBB - 4] = 186;
    X[RBB + 18][CBB - 4] = 186;
    X[RBB + 19][CBB - 4] = 186;
    X[RBB + 20][CBB - 4] = 186;
    X[RBB + 21][CBB - 4] = 186;
    X[RBB + 22][CBB - 4] = 186;
    X[RBB + 23][CBB - 4] = 186;
    X[RBB + 24][CBB - 4] = 186;
    X[RBB + 6][CBB + 5] = 202;
    X[RBB + 6][CBB - 4] = 206;
    X[RBB + 6][CBB + 4] = 202;
    X[RBB + 6][CBB - 1] = 202;
    X[RBB + 6][CBB - 0] = 202;
    X[RBB + 6][CBB - 2] = 202;
    X[RBB + 6][CBB - 3] = 202;
    X[RBB + 6][CBB + 1] = 202;
    X[RBB + 6][CBB + 2] = 202;
    X[RBB + 6][CBB + 3] = 202;
    X[RBB + 6][CBB + 0] = 202;
    X[RBB + 5][CBB + 5] = '_';
    X[RBB + 5][CBB - 4] = '_';
    X[RBB + 5][CBB + 4] = '_';
    X[RBB + 5][CBB - 1] = '_';
    X[RBB + 5][CBB - 0] = '_';
    X[RBB + 5][CBB - 2] = '_';
    X[RBB + 5][CBB - 3] = '_';
    X[RBB + 5][CBB + 1] = '_';
    X[RBB + 5][CBB + 2] = '_';
    X[RBB + 5][CBB + 3] = '_';
    X[RBB + 5][CBB + 0] = '_';
    X[RBB + 6][CBB + 4] = 206;
    X[RBB + 7][CBB + 4] = 186;
    X[RBB + 8][CBB + 4] = 186;
    X[RBB + 9][CBB + 4] = 186;
    X[RBB + 10][CBB + 4] = 186;
    X[RBB + 11][CBB + 4] = 186;
    X[RBB + 12][CBB + 4] = 186;
    X[RBB + 13][CBB + 4] = 186;
    X[RBB + 14][CBB + 4] = 186;
    X[RBB + 15][CBB + 4] = 186;
    X[RBB + 16][CBB + 4] = 186;
    X[RBB + 17][CBB + 4] = 186;
    X[RBB + 18][CBB + 4] = 186;
    X[RBB + 19][CBB + 4] = 186;
    X[RBB + 20][CBB + 4] = 186;
    X[RBB + 21][CBB + 4] = 186;
    X[RBB + 22][CBB + 4] = 186;
    X[RBB + 23][CBB + 4] = 186;
    X[RBB + 24][CBB + 4] = 186;
    X[RBB + 6][CBB + 5] = 206;
    X[RBB + 7][CBB + 5] = 185;
    X[RBB + 8][CBB + 5] = 185;
    X[RBB + 9][CBB + 5] = 185;
    X[RBB + 10][CBB + 5] = 185;
    X[RBB + 11][CBB + 5] = 185;
    X[RBB + 12][CBB + 5] = 185;
    X[RBB + 13][CBB + 5] = 185;
    X[RBB + 14][CBB + 5] = 185;
    X[RBB + 15][CBB + 5] = 185;
    X[RBB + 16][CBB + 5] = 185;
    X[RBB + 17][CBB + 5] = 185;
    X[RBB + 18][CBB + 5] = 185;
    X[RBB + 19][CBB + 5] = 185;
    X[RBB + 20][CBB + 5] = 185;
    X[RBB + 21][CBB + 5] = 185;
    X[RBB + 22][CBB + 5] = 185;
    X[RBB + 23][CBB + 5] = 185;
    X[RBB + 24][CBB + 5] = 185;

    CBB -= 5;
    for (i = 0; i < 150; i++) {
        X[RBB + 25][CBB + i] = 220;
    }

}

void CallBullet(char X[][2000], int Rblt[], int Cblt[], int Fblt[], int& ctBullet, int& RH, int& CH, char ch) {
    int i;
    for (i = 0; i < ctBullet; i++) {
        DrawBullet(X, Fblt[i], Rblt[i], Cblt[i]);
        HarrakElBullet(X, Rblt[i], Cblt[i], Fblt[i]);
    }

}


void callArrow(char X[][2000], int CH, int& FArrow) {
    /*
    int FArrow;
    if (CH > 500 && CH < 700)
    {
        FArrow = 1;
    }
    */
}


void drawArrow(char X[][2000], int RH, int CH, char ch, int& cblt, int& f) {

    if (X[RH + 6][cblt] == ' ') {
        f = 1;
        X[RH + 6][cblt] = 1;
    }
    else {
        f = 0;
    }
}

void moveArrow(char X[][2000], int RH, int CH, char ch, int& cblt, int f) {
    if (f == 1) {
        cblt += 10;
    }

}


void endgame(int CLFE, int& fg) {
    fg = 0;
}


void YouWon(int CH, int& FYW, int CBB) {
    if (CH > CBB + 20) {
        FYW = 0;
    }
}

void seekillsHero(char X[][2000], int RH, int CH, int& fg)
{
    /*
    int r, c;
    for (r = RM; r < RM + 5; RM++)
    {
        for (c = CH - 2; c < CH + 15; c++)
        {
            if (X[r][c] == '^' || X[r][c] == 126)
            {
                fg = 0;
            }
        }
    }
    */

}

// EDIT
void drawSpaceLine(char X[][2000], int& RH, int& CH)
{
    int i;
    for (i = -10; i < 10; i++)
    {
        X[RH - i][CH] = 186;
    }
    X[RH + 11][CH - 1] = '/';
    X[RH + 11][CH - 2] = 205;
    X[RH + 11][CH - 3] = 205;
    X[RH + 11][CH - 4] = 205;
    X[RH + 11][CH - 5] = 205;
    X[RH + 11][CH - 6] = 205;
    X[RH + 11][CH - 7] = 205;
    X[RH + 11][CH - 8] = 205;
    X[RH + 11][CH - 9] = 205;
    X[RH + 11][CH - 10] = 205;
    X[RH + 11][CH - 11] = 205;
    X[RH + 11][CH - 12] = 205;
    X[RH + 11][CH - 13] = 205;
    X[RH + 11][CH - 14] = 205;
    X[RH + 11][CH - 15] = 205;
    X[RH + 11][CH - 16] = 205;
    X[RH + 11][CH - 17] = 205;
    X[RH + 11][CH - 18] = 205;
    X[RH + 11][CH - 19] = 205;
    X[RH + 11][CH - 20] = 205;
    X[RH - 5][CH - 2] = '/';
    X[RH - 4][CH - 3] = '/';
    X[RH - 3][CH - 4] = '/';
    X[RH - 2][CH - 5] = '/';
    X[RH - 1][CH - 6] = '/';
    X[RH - 0][CH - 7] = 205;
    X[RH + 1][CH - 7] = 186;
    X[RH + 2][CH - 7] = 186;
    X[RH + 3][CH - 7] = 186;
    X[RH + 4][CH - 7] = 186;
    X[RH + 5][CH - 7] = 186;
    X[RH + 6][CH - 7] = 186;
    X[RH + 7][CH - 7] = 186;
    X[RH + 8][CH - 7] = 186;
    X[RH + 9][CH - 7] = 186;
    X[RH + 10][CH - 7] = 186;
    X[RH - 0][CH - 8] = 205;
    X[RH - 0][CH - 9] = 205;
    X[RH - 0][CH - 10] = 205;
    X[RH - 0][CH - 11] = 205;
    X[RH - 0][CH - 12] = 205;
    X[RH - 0][CH - 13] = 205;
    X[RH - 0][CH - 14] = 205;
    X[RH - 0][CH - 15] = 205;
    X[RH - 0][CH - 16] = 205;
    X[RH - 0][CH - 17] = 205;
    X[RH + 1][CH - 17] = 186;
    X[RH + 2][CH - 17] = 186;
    X[RH + 3][CH - 17] = 186;
    X[RH + 4][CH - 17] = 186;
    X[RH + 5][CH - 17] = 186;
    X[RH + 6][CH - 17] = 186;
    X[RH + 7][CH - 17] = 186;
    X[RH + 8][CH - 17] = 186;
    X[RH + 9][CH - 17] = 186;
    X[RH + 10][CH - 17] = 186;
    X[RH + 10][CH + 1] = 205;
    X[RH + 10][CH + 2] = 205;
    X[RH + 10][CH + 3] = 205;
    X[RH + 10][CH + 4] = 205;
    X[RH + 10][CH + 5] = 205;
    X[RH + 10][CH + 6] = 205;
    X[RH + 10][CH + 7] = 205;
    X[RH + 10][CH + 8] = 205;
    X[RH + 10][CH + 9] = 205;
    X[RH + 10][CH + 10] = 205;
    X[RH + 10][CH + 11] = 186;
    X[RH + 9][CH + 11] = 186;
    X[RH + 8][CH + 11] = 186;
    X[RH + 7][CH + 11] = 186;
    X[RH + 6][CH + 11] = 186;
    X[RH + 5][CH + 11] = 186;
    X[RH + 4][CH + 11] = 186;
    X[RH + 3][CH + 11] = 186;
    X[RH + 2][CH + 11] = 186;
    X[RH + 1][CH + 11] = 186;
    X[RH + 0][CH + 11] = 186;
    X[RH - 1][CH + 11] = 186;
    X[RH - 2][CH + 11] = 186;
    X[RH - 3][CH + 11] = 186;
    X[RH - 4][CH + 11] = 186;
    X[RH - 5][CH + 11] = 186;
    X[RH - 6][CH + 11] = 186;
    X[RH + 10][CH + 12] = 186;
    X[RH + 9][CH + 12] = 186;
    X[RH + 8][CH + 12] = 186;
    X[RH + 7][CH + 12] = 186;
    X[RH + 6][CH + 12] = 186;
    X[RH + 5][CH + 12] = 186;
    X[RH + 4][CH + 12] = 186;
    X[RH + 3][CH + 12] = 186;
    X[RH + 2][CH + 12] = 186;
    X[RH + 1][CH + 12] = 186;
    X[RH + 0][CH + 12] = 186;
    X[RH - 1][CH + 12] = 186;
    X[RH - 2][CH + 12] = 186;
    X[RH - 3][CH + 12] = 186;
    X[RH - 4][CH + 12] = 186;
    X[RH - 5][CH + 12] = 186;
    X[RH - 6][CH + 12] = 186;
    X[RH + 10][CH + 13] = 205;
    X[RH + 10][CH + 14] = 205;
    X[RH + 10][CH + 15] = 205;
    X[RH + 10][CH + 16] = 205;
    X[RH + 10][CH + 17] = 205;
    X[RH + 10][CH + 18] = 205;
    X[RH + 10][CH + 19] = 205;
    X[RH + 10][CH + 20] = 205;
    X[RH + 10][CH + 21] = 205;
    X[RH + 10][CH + 22] = 205;
    for (i = -10; i < 10; i++)
    {
        X[RH - i][CH + 23] = 186;
    }
    X[RH - 5][CH + 24] = '\\';
    X[RH - 4][CH + 25] = '\\';
    X[RH - 3][CH + 26] = '\\';
    X[RH - 2][CH + 27] = '\\';
    X[RH - 1][CH + 28] = '\\';
    X[RH + 1][CH + 29] = 186;
    X[RH + 2][CH + 29] = 186;
    X[RH + 3][CH + 29] = 186;
    X[RH + 4][CH + 29] = 186;
    X[RH + 5][CH + 29] = 186;
    X[RH + 6][CH + 29] = 186;
    X[RH + 7][CH + 29] = 186;
    X[RH + 8][CH + 29] = 186;
    X[RH + 9][CH + 29] = 186;
    X[RH + 10][CH + 29] = 186;
    X[RH - 0][CH + 29] = 205;
    X[RH - 0][CH + 30] = 205;
    X[RH - 0][CH + 31] = 205;
    X[RH - 0][CH + 32] = 205;
    X[RH - 0][CH + 33] = 205;
    X[RH - 0][CH + 34] = 205;
    X[RH - 0][CH + 35] = 205;
    X[RH - 0][CH + 36] = 205;
    X[RH - 0][CH + 37] = 205;
    X[RH - 0][CH + 38] = 205;
    X[RH - 0][CH + 39] = 205;
    X[RH - 0][CH + 40] = 205;
    X[RH + 1][CH + 40] = 186;
    X[RH + 2][CH + 40] = 186;
    X[RH + 3][CH + 40] = 186;
    X[RH + 4][CH + 40] = 186;
    X[RH + 5][CH + 40] = 186;
    X[RH + 6][CH + 40] = 186;
    X[RH + 7][CH + 40] = 186;
    X[RH + 8][CH + 40] = 186;
    X[RH + 9][CH + 40] = 186;
    X[RH + 10][CH + 40] = 186;
    X[RH + 11][CH + 40] = 205;
    X[RH + 11][CH + 39] = 205;
    X[RH + 11][CH + 38] = 205;
    X[RH + 11][CH + 37] = 205;
    X[RH + 11][CH + 36] = 205;
    X[RH + 11][CH + 35] = 205;
    X[RH + 11][CH + 34] = 205;
    X[RH + 11][CH + 33] = 205;
    X[RH + 11][CH + 32] = 205;
    X[RH + 11][CH + 31] = 205;
    X[RH + 11][CH + 30] = 205;
    X[RH + 11][CH + 29] = 205;
    X[RH + 11][CH + 28] = 205;
    X[RH + 11][CH + 27] = 205;
    X[RH + 11][CH + 26] = 205;
    X[RH + 11][CH + 25] = 205;
    X[RH + 11][CH + 24] = '\\';
    X[RH - 9][CH + 1] = 205;
    X[RH - 9][CH + 2] = 205;
    X[RH - 9][CH + 3] = 205;
    X[RH - 9][CH + 4] = 205;
    X[RH - 9][CH + 5] = 205;
    X[RH - 9][CH + 6] = 205;
    X[RH - 9][CH + 7] = 205;
    X[RH - 9][CH + 8] = 205;
    X[RH - 9][CH + 9] = 205;
    X[RH - 9][CH + 10] = 205;
    X[RH - 9][CH + 11] = 205;
    X[RH - 9][CH + 12] = 205;
    X[RH - 9][CH + 13] = 205;
    X[RH - 9][CH + 14] = 205;
    X[RH - 9][CH + 15] = 205;
    X[RH - 9][CH + 16] = 205;
    X[RH - 9][CH + 17] = 205;
    X[RH - 9][CH + 18] = 205;
    X[RH - 9][CH + 19] = 205;
    X[RH - 9][CH + 20] = 205;
    X[RH - 9][CH + 21] = 205;
    X[RH - 9][CH + 22] = 205;
    X[RH - 10][CH + 0] = 205;
    X[RH - 10][CH + 1] = 205;
    X[RH - 10][CH + 2] = 205;
    X[RH - 10][CH + 3] = 205;
    X[RH - 10][CH + 4] = 205;
    X[RH - 10][CH + 5] = 205;
    X[RH - 10][CH + 6] = 205;
    X[RH - 10][CH + 7] = 205;
    X[RH - 10][CH + 8] = 205;
    X[RH - 10][CH + 9] = 205;
    X[RH - 10][CH + 10] = 205;
    X[RH - 10][CH + 11] = 205;
    X[RH - 10][CH + 12] = 205;
    X[RH - 10][CH + 13] = 205;
    X[RH - 10][CH + 14] = 205;
    X[RH - 10][CH + 15] = 205;
    X[RH - 10][CH + 16] = 205;
    X[RH - 10][CH + 17] = 205;
    X[RH - 10][CH + 18] = 205;
    X[RH - 10][CH + 19] = 205;
    X[RH - 10][CH + 20] = 205;
    X[RH - 10][CH + 21] = 205;
    X[RH - 10][CH + 22] = 205;
    X[RH - 10][CH + 23] = 205;
    X[RH - 11][CH + 0] = '/';
    X[RH - 12][CH + 1] = '/';
    X[RH - 13][CH + 2] = '/';
    X[RH - 14][CH + 3] = '/';
    X[RH - 15][CH + 4] = '/';
    X[RH - 16][CH + 5] = '/';
    X[RH - 17][CH + 6] = '/';
    X[RH - 18][CH + 7] = '/';
    X[RH - 19][CH + 8] = 186;
    X[RH - 20][CH + 8] = 186;
    X[RH - 21][CH + 8] = '/';
    X[RH - 21][CH + 9] = 205;
    X[RH - 21][CH + 10] = 205;
    X[RH - 21][CH + 11] = 205;
    X[RH - 21][CH + 12] = 205;
    X[RH - 21][CH + 13] = 205;
    X[RH - 21][CH + 14] = 205;
    X[RH - 22][CH + 10] = 186;
    X[RH - 22][CH + 11] = '/';
    X[RH - 23][CH + 10] = 186;
    X[RH - 23][CH + 11] = '\\';
    X[RH - 24][CH + 10] = 186;
    X[RH - 24][CH + 11] = '/';
    X[RH - 25][CH + 10] = 186;
    X[RH - 25][CH + 11] = '\\';
    X[RH - 26][CH + 10] = 186;
    X[RH - 26][CH + 11] = '/';
    X[RH - 27][CH + 10] = 186;
    X[RH - 27][CH + 11] = '\\';
    X[RH - 28][CH + 10] = 88;
    X[RH - 28][CH + 11] = 88;
    X[RH - 28][CH + 12] = 88;
    X[RH - 28][CH + 13] = 88;
    X[RH - 29][CH + 10] = '=';
    X[RH - 29][CH + 11] = '=';
    X[RH - 29][CH + 12] = '=';
    X[RH - 29][CH + 13] = '=';
    X[RH - 30][CH + 10] = 186;
    X[RH - 31][CH + 10] = 186;
    X[RH - 30][CH + 13] = 186;
    X[RH - 31][CH + 13] = 186;
    X[RH - 32][CH + 10] = '=';
    X[RH - 32][CH + 11] = '=';
    X[RH - 32][CH + 12] = '=';
    X[RH - 32][CH + 13] = '=';
    X[RH - 33][CH + 11] = 186;
    X[RH - 33][CH + 12] = 186;
    X[RH - 34][CH + 11] = '/';
    X[RH - 34][CH + 12] = '\\';
    X[RH - 11][CH + 23] = '\\';
    X[RH - 12][CH + 22] = '\\';
    X[RH - 13][CH + 21] = '\\';
    X[RH - 14][CH + 20] = '\\';
    X[RH - 15][CH + 19] = '\\';
    X[RH - 16][CH + 18] = '\\';
    X[RH - 17][CH + 17] = '\\';
    X[RH - 18][CH + 16] = '\\';
    X[RH - 19][CH + 15] = 186;
    X[RH - 20][CH + 15] = 186;
    X[RH - 20][CH + 15] = 186;
    X[RH - 21][CH + 15] = '\\';
    X[RH - 22][CH + 13] = 186;
    X[RH - 22][CH + 12] = '\\';
    X[RH - 23][CH + 13] = 186;
    X[RH - 23][CH + 12] = '/';
    X[RH - 24][CH + 13] = 186;
    X[RH - 24][CH + 12] = '\\';
    X[RH - 25][CH + 13] = 186;
    X[RH - 25][CH + 12] = '/';
    X[RH - 26][CH + 13] = 186;
    X[RH - 26][CH + 12] = '\\';
    X[RH - 26][CH + 13] = 186;
    X[RH - 26][CH + 12] = '\\';
    X[RH - 27][CH + 13] = 186;
    X[RH - 27][CH + 12] = '/';
    X[RH - 11][CH + 4] = '|';
    X[RH - 12][CH + 4] = '|';
    X[RH - 12][CH + 5] = '\\';
    X[RH - 11][CH + 6] = '\\';
    X[RH - 11][CH + 7] = '|';
    X[RH - 12][CH + 7] = '|';
    X[RH - 12][CH + 9] = '/';
    X[RH - 11][CH + 8] = '/';
    X[RH - 12][CH + 10] = '\\';
    X[RH - 11][CH + 11] = '\\';
    X[RH - 11][CH + 14] = '_';
    X[RH - 11][CH + 13] = '_';
    X[RH - 11][CH + 15] = '|';
    X[RH - 12][CH + 14] = '_';
    X[RH - 12][CH + 13] = '_';
    X[RH - 12][CH + 12] = '|';
    X[RH - 13][CH + 14] = '_';
    X[RH - 13][CH + 13] = '_';
    X[RH - 12][CH + 17] = '/';
    X[RH - 11][CH + 16] = '/';
    X[RH - 12][CH + 18] = '\\';
    X[RH - 11][CH + 19] = '\\';
}

void drawSpaceLine2(char X[][2000], int& RH, int& CH)
{
    X[RH - 9][CH] = 219;
    X[RH - 8][CH] = 219;
    X[RH - 7][CH] = 219;
    X[RH - 6][CH] = 219;
    X[RH - 5][CH] = 219;
    X[RH - 4][CH] = 219;
    X[RH - 3][CH] = 219;
    X[RH - 2][CH] = 219;
    X[RH - 1][CH] = 219;
    X[RH + 0][CH] = 219;
    X[RH + 1][CH] = 219;
    X[RH + 2][CH] = 219;
    X[RH + 3][CH] = 219;
    X[RH + 4][CH] = 219;
    X[RH + 5][CH] = 219;
    X[RH + 6][CH] = 219;
    X[RH + 10][CH - 3] = '/';
    X[RH + 10][CH - 2] = '/';
    X[RH + 11][CH - 3] = 186;
    X[RH + 12][CH - 3] = 186;
    X[RH + 13][CH - 3] = 186;
    X[RH + 14][CH - 3] = '\\';
    X[RH + 14][CH - 2] = '\\';
    X[RH + 15][CH - 2] = 39;
    X[RH + 15][CH - 1] = 205;
    X[RH + 15][CH - 0] = 205;
    X[RH + 15][CH + 1] = 205;
    X[RH + 15][CH + 2] = 39;
    X[RH + 8][CH - 1] = 'o';
    X[RH + 8][CH - 0] = 'u';
    X[RH + 8][CH + 1] = 't';
    X[RH + 9][CH - 2] = '.';
    X[RH + 9][CH - 1] = 205;
    X[RH + 9][CH - 0] = 205;
    X[RH + 9][CH + 1] = 205;
    X[RH + 9][CH + 2] = '.';
    X[RH + 10][CH + 3] = '\\';
    X[RH + 10][CH + 2] = '\\';
    X[RH + 11][CH + 3] = 186;
    X[RH + 12][CH + 3] = 186;
    X[RH + 13][CH + 3] = 186;
    X[RH + 14][CH + 3] = '/';
    X[RH + 14][CH + 2] = '/';
    X[RH + 7][CH - 5] = 186;
    X[RH + 8][CH - 5] = 186;
    X[RH + 9][CH - 5] = 186;
    X[RH + 10][CH - 5] = 186;
    X[RH + 18][CH + 2] = '(';
    X[RH + 18][CH + 3] = ')';
    X[RH + 11][CH - 5] = 186;
    X[RH + 12][CH - 5] = 186;
    X[RH + 13][CH - 5] = 186;
    X[RH + 14][CH - 5] = 186;
    X[RH + 15][CH - 5] = 186;
    X[RH + 16][CH - 5] = 186;
    X[RH + 17][CH - 5] = 186;
    X[RH + 18][CH - 5] = 186;
    X[RH + 19][CH - 5] = 186;
    X[RH + 20][CH - 5] = 186;
    X[RH + 21][CH - 5] = 186;
    X[RH + 22][CH - 5] = 186;
    X[RH + 23][CH - 5] = 186;
    X[RH + 24][CH - 5] = 186;
    X[RH + 25][CH - 5] = 186;
    X[RH + 26][CH - 5] = 186;
    X[RH + 27][CH - 5] = 186;
    X[RH + 28][CH - 5] = 186;
    X[RH + 29][CH - 5] = 186;
    X[RH + 30][CH - 5] = 186;
    X[RH + 31][CH - 5] = 186;
    X[RH + 32][CH - 5] = 186;
    X[RH + 33][CH - 5] = 186;
    X[RH + 34][CH - 5] = 186;
    X[RH + 35][CH - 5] = 186;
    X[RH + 36][CH - 5] = 186;
    X[RH + 37][CH - 5] = 186;
    X[RH + 38][CH - 5] = 186;
    X[RH + 6][CH + 5] = 202;
    X[RH + 6][CH - 4] = 206;
    X[RH + 6][CH + 4] = 202;
    X[RH + 6][CH - 1] = 202;
    X[RH + 6][CH - 0] = 202;
    X[RH + 6][CH - 2] = 202;
    X[RH + 6][CH - 3] = 202;
    X[RH + 6][CH - 5] = 186;
    X[RH + 5][CH - 4] = ' ';
    X[RH + 6][CH + 1] = 202;
    X[RH + 6][CH + 2] = 202;
    X[RH + 6][CH + 3] = 202;
    X[RH + 6][CH + 0] = 202;
    X[RH + 5][CH + 5] = '_';
    X[RH + 5][CH + 6] = '_';
    X[RH + 5][CH - 4] = '_';
    X[RH + 5][CH + 4] = '_';
    X[RH + 5][CH - 1] = '_';
    X[RH + 5][CH - 0] = '_';
    X[RH + 5][CH - 2] = '_';
    X[RH + 5][CH - 3] = '_';
    X[RH + 5][CH + 1] = '_';
    X[RH + 5][CH + 2] = '_';
    X[RH + 5][CH + 3] = '_';
    X[RH + 5][CH + 0] = '_';
    X[RH + 6][CH + 5] = 206;
    X[RH + 7][CH + 5] = 186;
    X[RH + 8][CH + 5] = 186;
    X[RH + 9][CH + 5] = 186;
    X[RH + 10][CH + 5] = 186;
    X[RH + 11][CH + 5] = 186;
    X[RH + 12][CH + 5] = 186;
    X[RH + 13][CH + 5] = 186;
    X[RH + 14][CH + 5] = 186;
    X[RH + 15][CH + 5] = 186;
    X[RH + 16][CH + 5] = 186;
    X[RH + 17][CH + 5] = 186;
    X[RH + 18][CH + 5] = 186;
    X[RH + 19][CH + 5] = 186;
    X[RH + 20][CH + 5] = 186;
    X[RH + 21][CH + 5] = 186;
    X[RH + 22][CH + 5] = 186;
    X[RH + 23][CH + 5] = 186;
    X[RH + 24][CH + 5] = 186;
    X[RH + 25][CH + 5] = 186;
    X[RH + 26][CH + 5] = 186;
    X[RH + 27][CH + 5] = 186;
    X[RH + 28][CH + 5] = 186;
    X[RH + 29][CH + 5] = 186;
    X[RH + 30][CH + 5] = 186;
    X[RH + 31][CH + 5] = 186;
    X[RH + 32][CH + 5] = 186;
    X[RH + 33][CH + 5] = 186;
    X[RH + 34][CH + 5] = 186;
    X[RH + 35][CH + 5] = 186;
    X[RH + 36][CH + 5] = 186;
    X[RH + 37][CH + 5] = 186;
    X[RH + 38][CH + 5] = 186;
    X[RH + 6][CH + 6] = 206;
    X[RH + 7][CH + 6] = 185;
    X[RH + 8][CH + 6] = 185;
    X[RH + 9][CH + 6] = 185;
    X[RH + 10][CH + 6] = 185;
    X[RH + 11][CH + 6] = 185;
    X[RH + 12][CH + 6] = 185;
    X[RH + 13][CH + 6] = 185;
    X[RH + 14][CH + 6] = 185;
    X[RH + 15][CH + 6] = 185;
    X[RH + 16][CH + 6] = 185;
    X[RH + 17][CH + 6] = 185;
    X[RH + 18][CH + 6] = 185;
    X[RH + 19][CH + 6] = 185;
    X[RH + 20][CH + 6] = 185;
    X[RH + 21][CH + 6] = 185;
    X[RH + 22][CH + 6] = 185;
    X[RH + 23][CH + 6] = 185;
    X[RH + 24][CH + 6] = 185;
    X[RH + 25][CH + 6] = 185;
    X[RH + 26][CH + 6] = 185;
    X[RH + 27][CH + 6] = 185;
    X[RH + 28][CH + 6] = 185;
    X[RH + 29][CH + 6] = 185;
    X[RH + 30][CH + 6] = 185;
    X[RH + 31][CH + 6] = 185;
    X[RH + 32][CH + 6] = 185;
    X[RH + 33][CH + 6] = 185;
    X[RH + 34][CH + 6] = 185;
    X[RH + 35][CH + 6] = 185;
    X[RH + 36][CH + 6] = 185;
    X[RH + 37][CH + 6] = 185;
    X[RH + 38][CH + 6] = 185;
    X[RH + 6][CH - 4] = 202;
    X[RH + 6][CH - 5] = 204;
}



int main()
{
    int FYW = 1;
    int CLFS = 3, CLFE = 20, flh = 1; // health
    char X[50][2000];
    int RE1 = 6, CE1 = 12;
    int dirE1 = 1, RH = 32, CH = 2, st = 0, end = 211, f = 0;
    char ch = 'p';
    int celv = 327, relv = 44, elvDir = 1; //elevator ints
    int re2 = 10, ce2 = CE1;
    int fg;
    int posroomSR = 2, posroomER = 24, posSC = 430, posEC = 580;
    int fdoor = 0;
    int rbm[100];
    int cbm[100];
    int fbm[100];    //bullet ints
    int i = -1;
    int ctB = 0;
    int FbltSingle = 0;
    int RD = 10, CD = 510;   //Sohila's room ints
    int RSee = 45, CSee = 431;
    int posStarC[20];
    int Fstar[20];
    int posStarR[20];
    int j = 0; //star ints
    int celv2 = 1600, relv2 = 40, elvDir2 = 1;

    int ctH = 3;

    int RM = 43, CM = 50;
    int RS = 26, CS = 250;
    int dirS = 0;      //mushroom and spider
    int RP = 21, CP = 200;
    int dirm = 0;


    int RMS = 44, CMS = 205, direS = 0; // mouse

    char B[1000][211];
    int st2 = 950, end2 = 1000;
    int RH2 = 985, CH2 = 105;
    int RG = 944, CG = 70, dirg = 1;
    int RB = 920, CB = 60, dirB = 1;
    int cls = 3, cle = 13, rl = 951, rs = 952, ss = 3, se = 3;
    int FH = 1;                                                        //fayrouzgame ints
    int FS1 = 0, FS2 = 0, FS3 = 0, FS4 = 0, FS5 = 0;
    int cts = 0;
    int cts1 = 0, cts3 = 0, cts4 = 0, cts5 = 0;
    int RF = 844, CF = 175;


    int Rblt[100], Cblt[100], Fblt[100], ctBullet = 0, flagStar = 0;// multiple blts
    int disp = 650 - 18;

    int doordir = 1;

    int rpress = 20, cpress = 90; // start game

    int RGG = 15, CGG = 1700; // girl

    int RSH = 40, CSH = 490;
    int Rdoor = 10, Cdoor = 450;

    int Rli = 11, Cli = 510;

    int FArrow = 0;

    int R5 = 30, C5 = 650, F5 = 1, ctE5 = 0;

    int RR = 1, CR = 650;

    int FStopL = 1;

    int FSB = 0;
    int rbltsingle = RH + 6;
    int cbltsingle = CH + 15;

    int SpaceLineR = 34;
    int SpaceLineC = 770;

    int SpaceLine2R = 6;
    int SpaceLine2C = 1500;

    int RMeteor[5] = { 1, 20, 35, 10, 25 };
    int CMeteor[5] = { 830, 930, 1030, 1130, 1230 };

    int RPlanet[5] = { 2, 20, 35, 10, 25 };
    int CPlanet[5] = { 880, 980, 1080, 1180, 1280 };

    int RSE = 50 - 14;
    int CSE = 1450;
    int CSED = 0;
    int SEF = 1;
    int SECT = 0;

    /*
    int RBE = RE1 + 8, CBE = CE1 + 5, FlagBE = 1,
    int RBEF, ctBE = 0;



    RBE[ctBE] = RE1 + 8; CBE[ctBE] = 17; FlagBE[ctBE] = 1;
    int ii = 0;


    for (int p = 17; p < 211; p += 15)
    {
        CBE[ii] = p;
        ii++;
    }

    for (ii = 0; ii < 12; ii++)
    {
        RBE[ii] = RE1 + 8;
    }
    */
    int cblt = CH + 12;
    int FBltS = 0;

    int RBB = 1, CBB = 1650;
    char startgame = 'Z';

    while (1) {
        startBackground(X);
        press(X, rpress, cpress);
        DrawHero(X, 30, 95);
        DispToscreen(X, st, end);
        startgame = _getch();
        if (startgame != 'Z') {
            break;
        }
    }
    while (1) {
        fdoor = 1;
        fg = 1; //just for the run now
        //fg = 0; will make fg=0 when the hero loses but still dont know where
        while (!_kbhit()) {
            FillMatrxiByMyBackGround(X);
            DrawHero(X, RH, CH);
            Drawgirl(X, RGG, CGG);
            losehealthBG(X, RH, CH, ctH, fg);
            MoveEnmy1(RE1, CE1, dirE1);
            DrawBigroom(X, RBB, CBB);
            DrawEnmy1(X, RE1, CE1);
            drawhealth(X, CLFS, CLFE);
            drawelv(X, relv, celv);
            movelv(RH, relv, celv, CH, X, elvDir);


            drawelv2(X, relv2, celv2);
            movelv2(RH, relv2, celv2, CH, X, elvDir2);

            drawenemy2(X, re2, CE1);
            movenemy2(X, re2);
            DrawMouse(X, RMS, CMS);
            movemouse(CMS, direS);
            pumpkin(X, RP, CP);
            MovePumpkin(X, RP, CP, dirm);
            spider(X, RS, CS);
            MoveSpider(RS, CS, dirS);

            CallBullet(X, Rblt, Cblt, Fblt, ctBullet, RH, CH, ch);
            clearE5(X, R5, C5, F5, ctE5);
            DrawEnemy5(X, R5, C5, F5);

            YouWon(CH, FYW, CBB);

            if (FSB == 1) {
                drawsingleblt(X, FSB, RH, CH, rbltsingle, cbltsingle);
                movesingleblt(X, FSB, RH, CH, rbltsingle, cbltsingle);

            }

            DrawStar(X, RH, CH, ch, flagStar, 39, 22);

            /*
            DrawStar(X, RM, CH, ch, flagStar, 39, 250);
            DrawStar(X, RM, CH, ch, flagStar, 39, 350);
            DrawStar(X, RM, CH, ch, flagStar, 20, 450);
            DrawStar(X, RM, CH, ch, flagStar, 20, 500);
            */
            drawroom(X);

            DrawSee(X, RSee, CSee);
            DrawShip(X, RSH, CSH);
            Drawline(X, Rli, Cli);
            drawSpaceLine(X, SpaceLineR, SpaceLineC);
            drawSpaceLine2(X, SpaceLine2R, SpaceLine2C);
            for (int i = 0; i < 5; i++) {
                drawMeteor(X, RMeteor[i], CMeteor[i]);
                MoveMeteor(X, RMeteor[i], CMeteor[i]);
            }

            for (int i = 0; i < 5; i++) {
                drawPlanet(X, RPlanet[i], CPlanet[i]);
            }
            clearSE(X, RSE, CSE, SEF, SECT);
            drawSpaceEnemy(X, RSE, CSE, SEF);
            moveSpaceEnemy(X, RSE, CSE, CSED);

            movedoor(X, Rdoor, Cdoor, CH, doordir, st, end, CLFS, CLFE);
            DrawDoor(X, Rdoor, Cdoor);

            //DrawRoomEndG(X, RR, CR);

            drawdog(X);
            callArrow(X, CH, FArrow);

            mushroom(X, RM, CM);
            mushroom(X, 43, 90);
            mushroom(X, 43, 130);

            laser(X, disp, RH, CH, F5, FStopL);
            disp--;

            checkhealth(X, RH, CH, st, end, CLFS, CLFE, flh);
            if (flh == 0) {
                CH -= 10;
                flh = 1;
                if (CH > 100) {
                    st -= 10;
                    end -= 10;
                    CLFS -= 10;
                    CLFE -= 11;

                }
                else {
                    CLFE--;

                }
            }
            if (CLFE < 3) {
                endgame(CLFE, fg);
            }
            if (RH == 14 && CH > 327 && CH < 347) {
                fayrouzgame(B, st2, end2, RH2, CH2, RG, CG, dirg, RB, CB, dirB, cls, cle, rl, rs, ss, se, FH, FS1, FS2,
                    FS3, FS4, FS5, cts, cts1, cts3, cts4, cts5, RF, CF);
                RH += 5;
            }

            if (FYW == 0) {
                break;
            }


            //gravity must be the last thing before the display then the display
            Gravity(X, RH, CH); //the rh++ until it hits the dourn in rh+13 != space
            DispToscreen(X, st, end);

            if (fg == 0) {
                DrawGameOver(X);
                break;
            }
        }


        ch = _getch();
        MoveHero(RH, CH, ch, st, end, f, X, posroomSR, posroomER, posSC, posEC, CLFS, CLFE, CBB);
        CreateBulletArrays(Rblt, Cblt, Fblt, ctBullet, ch, RH, CH);

        if (ch == 'g') {
            FSB = 1;
        }

        if (fg == 0)
            break;

        if (FYW == 0) {
            break;
        }

    }

}