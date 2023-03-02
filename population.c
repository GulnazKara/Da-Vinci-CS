#include <cs50.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int start_p, end_p,old_p;
    printf("population: \n");
    do
    {
        printf("Start size:");
        scanf("%d",&start_p);
    }
    while (start_p < 9);
    do
    {
        printf("End size :");
        scanf("%d",&end_p);
    }
    while (end_p <= start_p);

    size_t years = 0;
    int new_p = start_p;
    for( old_p = start_p;  new_p < end_p; years++ )
    {
        new_p =new_p+old_p/3 - old_p/4;
        old_p = new_p;
       }
    printf("\n Years : %zu", years);
	return 0;
}
    
