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
 * IDE          : Code::blocs
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
    /*
    int *src = &source[0][0][0];
    int line, cell, val = 0;
    // fill table of 729 elements: (3 * 9 = 27) (27 * 27 = 729)
    for (int i=0; i<729; i++){
        // line count
        line = (i / 27) + 1;        // entire division of "i" to calculate the line number (first line = 1)
        // cell in line count
        cell = (i % 3) + 1;         // modulo of "i" to repeat the suite in each section
        // fill table
        if ((line % 3) == 1){
            val = cell + 0;
        } else if ((line % 3) == 2){
            val = cell + 3;
        } else if ((line % 3) == 3){
            val = cell + 6;
        }
        // attribute cell value
        src[i] = val;
        //printf("%d \n", line);
    }
    */
}
