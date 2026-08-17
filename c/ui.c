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
 * IDE          : Code::Blocks
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

/* main menu page */
void MainMenu(void){
    system("cls");
    printf("************************************\n");
    printf("** Welcome in the SUDOKU resolver **\n");
    printf("************************************\n");
    printf("\n");
    printf("start menu: \n");
    printf("----------: \n");
    printf("-> select an option (numbers 1 through 9)\n");
    printf("1) Select the grid to solve\n");
    printf("2) Print current grid\n");
    printf("3) Execute solver\n");
    printf("4) Print solver\n");
    printf("5) .. \n");
    printf("6) .. \n");
    printf("7) .. \n");
    printf("8) .. \n");
    printf("9) For different tests \n");
    printf("   ...or press 'Q' or 'q' to exit the programm: ");
}

/* print sudoku table's page */
void PrintTable(int (*table)[9][9]){
    // local variable to fill the table
    int lin=0, col=0;                     // lin = line, col = column
    // draw lines loop
    for (lin=0; lin<9; lin++){
        // draw separation line
        if ((lin==0) || (lin==3) || (lin==6)){
             printf("|=======================|\n");
        }
        // draw column elements
        for (col=0; col<9; col++){
            if ((col==0) || (col==3) || (col==6)){
                printf("| ");
            }
            printf("%d ", (*table)[lin][col]);
        }
        // CR+LF at the end of each line
        printf("|\n");
    }
    // draw last table line
    printf("|=======================|\n");
}

/* print the sudoku solver's page */
void PrintSolver(int (*table)[9][9][9]){
    // local variable to fill the table
    int lin=0, col=0, cand=0;   // for SolverData[line][colomn][candidate]
    int i=0, j=0;               // index for 27x27 matrix

    // draw lines loop
    for (i=0; i<27; i++){
        lin = i / 3;
        // draw horizontal separation line
        if ((i % 9) == 0){
            printf("//=========================================================================//\n");
        } else if ((i % 3) == 0){
            printf("//-------------------------------------------------------------------------//\n");
        }
        // draw column elements
        for (j=0; j<27; j++){
            col = j / 3;
            // dran vertical separators
            if ((j % 9) == 0){
                printf("// ");
            } else if ((j % 3) == 0){
                printf("| ");
            }
            // print value (position 1..9 inside the Sudoku cell)
            cand = (i % 3) * 3 + (j % 3);
            printf("%d ", (*table)[lin][col][cand]);
        }
        // CR+LF at the end of each line
        printf("//\n");
    }
    // draw last table line
    printf("//=========================================================================//\n");
}
