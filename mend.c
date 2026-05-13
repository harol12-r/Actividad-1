#include <stdio.h>

int main (int argc, char *argv[]) {
int vec[5]={2,4,6,8,10};
int*ptr;
ptr=vec[0];
for (int i = 0; i < 5; i++)
{
    printf("vector[%d] %d", i,vec[i]);
    printf("/n%p",*(ptr++));
}
    return 0;
}