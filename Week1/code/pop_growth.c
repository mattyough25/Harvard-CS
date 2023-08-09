#include <stdio.h>

int get_start_size(void);
int get_end_size(int start_size);
int get_pop(int cur_size);

int main(void)
{
    int cur_size = get_start_size();
    int end_size = get_end_size(cur_size);

    int years = 0;
    while (cur_size < end_size)
    {
        cur_size = get_pop(cur_size);
        years +=1;
    }

    printf("Years: %i\n", years);
    return 0;
}

int get_start_size(void)
{
    int n;
    do
    {
        printf("Start size: ");
        scanf("%i", &n);
    }
    while (n < 9);

    return n;
}

int get_end_size(int start_size)
{
    int n;
    do
    {
        printf("End size: ");
        scanf("%i", &n);
    }
    while (n < start_size);

    return n;
}

int get_pop(int cur_size)
{
    cur_size = cur_size + cur_size/3 - cur_size/4;

    return cur_size;
}