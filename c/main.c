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
 * IDE          : Code::bloc
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
    // application setup
    char selection;
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
                printf("1 selected\n\n");
                printf("-> select an option: (?tbd?)\n");
                printf("   ...or press 'Q' or 'q' to exit the programm: ");
                break;
            }

            case '2':{
                system("cls");
                printf("2 selected\n\n");
                PrintTable(*tableau_00);
                printf("\n");
                printf("-> select an option: (?tbd?)\n");
                printf("   ...or press 'Q' or 'q' to exit the programm: ");
                break;
            }

            default:{
                MainMenu();
                break;
            }
        }

    }

    // Sleep(1000);    // 10 000 ms = 10 s

    return 0;
}
