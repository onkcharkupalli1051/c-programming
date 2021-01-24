/*

You are given a matrix A of non-negative integers with N rows (numbered 1 through N) and N columns (numbered 1 through N). For each valid i and j, let's denote the element in the i-th row and j-th column by Ai,j.

You need to find a matrix B with N+1 rows and N+1 columns (numbered similarly) such that:

each element of this matrix is a digit between 0 and 9 (inclusive)
Ai,j=Bi,j+Bi+1,j+Bi,j+1+Bi+1,j+1 for each valid i,j
The matrix A is chosen in such a way that at least one solution exists. If there are multiple solutions, you may find any one of them.

Input
The first line of the input contains a single integer N.
N lines follow. For each valid i, the i-th of these lines contains N space-separated integers Ai,1,Ai,2,…,Ai,N.
Output
Print N+1 lines. For each valid i, the i-th of these lines should contain N+1 characters Bi,1,Bi,2,…,Bi,N+1.

Constraints
1≤N≤100
for the matrix A, at least one valid matrix B exists
Subtasks
Subtask #1 (10 points): N≤5
Subtask #2 (90 points): original constraints

Example Input
2
12 16
24 28
Example Output
123
456
789
All submissions for this problem are available.
Author:	ildar_adm
Editorial:	https://discuss.codechef.com/problems/DGMATRIX
Tags:	ad-hoc, dec20, ildar_adm, medium-hard, shortest-path
Date Added:	29-11-2020
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, PYTH, CS2, ADA, PYPY, PYP3, TEXT, CPP17, PAS fpc, RUBY, PHP, NODEJS, GO, TCL, HASK, PERL, SCALA, kotlin, BASH, JS, PAS gpc, BF, LISP sbcl, CLOJ, LUA, D, R, CAML, rust, ASM, FORT, FS, LISP clisp, SQL, swift, SCM guile, PERL6, CLPS, WSPC, ERL, ICK, NICE, PRLG, ICON, PIKE, COB, SCM chicken, SCM qobi, ST, NEM
Submit
My SubmissionsAll Submissions
Successful Submissions
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);

    int A[N][N];
    int i,j;

    int B[N+1][N+1];

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    for(int k=0;k<N+1;k++)
    {

    }
}

