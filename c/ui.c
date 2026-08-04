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
    printf("9) .. \n");
    printf("   ...or press 'Q' or 'q' to exit the programm: ");
}

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

void PrintSolver(int (*table)[9][9][9]){
    // local variable to fill the table
    int lin=0, col=0;
    // draw lines loop
    for (lin=0; lin<27; lin++){
        // draw separation line
        if ((lin % 9) == 0){
            printf("//=========================================================================//\n");
        } else if ((lin % 3) == 0){
            printf("//-------------------------------------------------------------------------//\n");
        }
        // draw column elements
        for (col=0; col<27; col++){
            if ((col % 9) == 0){
                printf("// ");
            } else if ((col % 3) == 0){
                printf("| ");
            }
            // print value
            printf("0 ");
        }
        // CR+LF at the end of each line
        printf("//\n");
    }
    // draw last table line
    printf("//=========================================================================//\n");
}
