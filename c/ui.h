#ifndef UI_H_INCLUDED
#define UI_H_INCLUDED

void MainMenu(void); // main menu page
void PrintTable(int (*table)[9][9]); //print sudoku table's page
void PrintSolver(int (*table)[9][9][9]); // print the sudoku solver's page

// not implemented yet
void EnterTableToBeSolved(int (*table)[9][9]);

#endif // UI_H_INCLUDED
