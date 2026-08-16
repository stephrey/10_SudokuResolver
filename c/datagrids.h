#ifndef DATAGRIDS_H_INCLUDED
#define DATAGRIDS_H_INCLUDED

extern int tableau_00[9][9]; // A variable containing a low-difficulty Sudoku puzzle

void GridCpy(int (*source)[9][9], int (*destination)[9][9]); // Function to copy a Sodoku grid
void GridReset(int (*source)[9][9]); // Function to reset a Sudoku grid to zero
void SolverReset(int (*source)[9][9][9]); // Function to reset the Sudoku solver's array to zero
void SolverTest(int (*source)[9][9][9]); // Test function for the Sudoku solver grid

#endif // DATAGRIDS_H_INCLUDED
