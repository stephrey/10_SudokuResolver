#ifndef DATAGRIDS_H_INCLUDED
#define DATAGRIDS_H_INCLUDED

extern int tableau_00[9][9];

void GridCpy(int (*source)[9][9], int (*destination)[9][9]);
void GridReset(int (*source)[9][9]);
void SolverReset(int (*source)[9][9][9]);

#endif // DATAGRIDS_H_INCLUDED
