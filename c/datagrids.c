/******************************************************************************
 * File        : datagrids.c
 * Project     : SudokuResolver
 * Author      : Stephane Rey
 * Created     : 03.08.2026
 * Last Update : 03.08.2026
 * Version     : 0.0.1
 *
 * Description :
 * ----------------------------------------------------------------------------
 * Ready-to-use Sudoku grids for testing purposes.
 *
 * Example :
 * This program contains ready-to-use Sudoku grids.
 * These are training data for testing the main SudokuResolver program.
 *
 * Target       : x64
 * Compiler     : GCC
 * IDE          : Code::Blocks
 *
 * Dependencies :
 * - datagrids.h
 *
 * Notes :
 * - There is currently no additional information.
 * - Nor are there any specific restrictions.
 *
 * Copyright (c) 2026
 ******************************************************************************/
#include "datagrids.h"

/* A variable containing a low-difficulty Sudoku puzzle to be solved */
int tableau_00[9][9] =
{
    {0,0,0,0,1,0,7,2,0},
    {0,0,3,2,7,8,0,9,0},
    {0,5,7,0,0,0,3,0,8},
    {0,0,0,9,6,0,0,7,1},
    {0,0,0,0,8,2,0,6,3},
    {1,9,6,0,0,0,0,4,2},
    {3,0,8,0,2,9,0,0,4},
    {0,0,9,0,5,1,0,0,0},
    {0,6,0,7,0,3,0,8,9}
};

/* Function to copy a Sodoku grid */
void GridCpy(int (*source)[9][9], int (*destination)[9][9]){
    int *src = &source[0][0];
    int *dst = &destination[0][0];

    for (int i=0; i<81; i++){
        dst[i] = src[i];
    }
}

/* Function to reset a Sudoku grid to zero */
void GridReset(int (*source)[9][9]){
    int *src = &source[0][0];

    for (int i=0; i<81; i++){
        src[i] = 0;
    }
}

/* Function to reset the Sudoku solver's array to zero */
void SolverReset(int (*source)[9][9][9]){
    int *src = &source[0][0][0];

    for (int i=0; i<729; i++){
        src[i] = 0;
    }
}

/* Test function for the Sudoku solver grid (fill the entire grid) */
void SolverTest(int (*source)[9][9][9]){
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            for (int k=0; k<9; k++){
                (*source)[i][j][k] = k+1;
            }
        }
    }
}
