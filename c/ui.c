/******************************************************************************
 * File        : ui.c
 * Project     : SudokuResolver
 * Author      : Stephane Rey
 * Created     : 02.08.2026
 * Last Update : 02.08.2026
 * Version     : 0.0.1
 *
 * Description :
 * ----------------------------------------------------------------------------
 * This is the graphical user interface for the Sudoku Solver programm
 *
 * Example :
 * It contains the various functions that enable interaction with the user,
 * the display of grids, the selection of grids, and the execution
 * of solution algorithms.
 *
 * Target       : x64
 * Compiler     : GCC
 * IDE          : Code::bloc
 *
 * Dependencies :
 * - stdio.h
 * - stdint.h
 * - ui.h
 *
 * Notes :
 * - There is currently no additional information.
 * - Nor are there any specific restrictions.
 *
 * Copyright (c) 2026
 ******************************************************************************/
#include "ui.h"

void PrintTable(int (*table)[9][9]){
    int lin=0, col=0;                     // lin = line, col = column
    for (lin=0; lin<9; lin++){
        if ((lin==0) || (lin==3) || (lin==6)){
             printf("|=======================|\n");
        }
        for (col=0; col<9; col++){
            if ((col==0) || (col==3) || (col==6)){
                printf("| ");
            }
            printf("%d ", (*table)[lin][col]);
        }
        printf("|\n");
    }
    printf("|=======================|\n");
}
