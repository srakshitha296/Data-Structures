#include<stdio.h>
#include<math.h>
void tower(int n, int a, int b, int c) {
    if(n==0)
    return;
    tower(n-1, a, c, b);
    printf("\nMove disc %d from %c to %c", n, a, c);
    tower(n-1, b, a, c);
}
void main() {
    int n=3;
    printf("\nEnter the number of disc :\n");
    scanf("%d",&n);
    tower(n, 'A', 'B', 'C');
    printf("\n\nTotal number of moves are : %d",(int)pow(2,n)-1);
}