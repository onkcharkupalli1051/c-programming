/*
TOwer OF Hanoi
No disk  can be placed on top of smaller disk
*/

void toh(int, char, char, char);

void main()
{
    int num;
    printf("Enter number of disks : ");
    scanf("%d",&num);

    toh(num, 'A', 'C', 'B');
    getch();
}

void toh(int n, char f_r, char t_r, char a_r)
{
    if(n == 1)
    {
        printf("\nMove disk 1 from rod %c to rod %c",f_r,t_r);
        return;
    }
    toh(n-1,f_r,t_r,a_r);
    printf("\nMove disk %d from rod %c to rod %c",n,f_r,t_r);
    toh(n-1,a_r,t_r,f_r);
}
