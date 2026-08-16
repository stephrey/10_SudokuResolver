/******************************************************************************
 * File        : main.c
 * Project     : SudokuResolver
 * Author      : Stephane Rey
 * Created     : 02.08.2026
 * Last Update : 02.08.2026
 * Version     : 0.0.1
 *
 * Description :
 * ----------------------------------------------------------------------------
 * This program is a Sudoku grid solver.
 *
 * Example :
 * The included Sudoku practice puzzles allow you to test the various solving
 * algorithms. This program also includes a small command-line graphical interface
 * that lets you enter a new puzzle and solve one of them manually.
 *
 * Target       : x64
 * Compiler     : GCC
 * IDE          : Code::blocs
 *
 * Dependencies :
 * - stdio.h
 * - stdint.h
 * - ui.h
 * - datagrids.h
 *
 * Notes :
 * - There is currently no additional information.
 * - Nor are there any specific restrictions.
 *
 * Copyright (c) 2026
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "datagrids.h"
#include "ui.h"

int main()
{
    int DAT_GridToSolve[9][9];      // GridToSolve[line][colomn]
    int DAT_SolverData[9][9][9];    // SolverData[line][colomn][candidate]

    // application initialization
    char selection;
    GridReset(&DAT_GridToSolve);
    SolverReset(&DAT_SolverData);
    MainMenu();

    while(1){
        scanf(" %c", &selection); // The space before %c instructs scanf to ignore any remaining whitespace characters in the buffer, including the line break caused by the Enter key.

        if (selection == 'Q' || selection == 'q'){
            printf("The program is going to be shut down...\n");
            break;
        }

        switch(selection){
            case '1':{
                system("cls");
                printf("************************************\n");
                printf("** Select the grid to solve       **\n");
                printf("************************************\n");
                printf("\n");
                printf("-> select an option:\n");
                printf("   press 'm' or 'M' to go to the main menu: \n");
                printf("   ...or press 'Q' or 'q' to exit the program: ");
                GridCpy(&tableau_00, &DAT_GridToSolve);
                break;
            }

            case '2':{
                system("cls");
                printf("************************************\n");
                printf("** Print current grid             **\n");
                printf("************************************\n");
                printf("\n");
                PrintTable(&DAT_GridToSolve);
                printf("\n");
                printf("-> select an option:\n");
                printf("   press 'm' or 'M' to go to the main menu: \n");
                printf("   ...or press 'Q' or 'q' to exit the program: ");
                break;
            }

            case '4':{
                system("cls");
                printf("************************************\n");
                printf("** Print solver                   **\n");
                printf("************************************\n");
                printf("\n");
                PrintSolver(&DAT_SolverData);
                printf("\n");
                printf("-> select an option:\n");
                printf("   press 'm' or 'M' to go to the main menu: \n");
                printf("   ...or press 'Q' or 'q' to exit the program: ");
                break;
            }

            case '9':{
                system("cls");
                printf("************************************\n");
                printf("** TESTS                          **\n");
                printf("************************************\n");
                printf("\n");
                printf("Test the 'SolverTest' function\n");
                printf("\n");
                SolverReset(&DAT_SolverData);
                SolverTest(&DAT_SolverData);
                PrintSolver(&DAT_SolverData);
                printf("\n\n");
                printf("-> select an option:\n");
                printf("   press 'm' or 'M' to go to the main menu: \n");
                printf("   ...or press 'Q' or 'q' to exit the program: ");
                break;
            }

            default:{
                system("cls");
                printf("**********************\n");
                printf("FUNCTION NOT SUPPORTED\n");
                printf("**********************\n");
                printf("\n");
                printf("   press the 'C' or 'c' key to continue: ");
                if (selection == 'C' || selection == 'c'){
                    MainMenu();
                }
                break;
            }
        }

    }
    return 0;
}
