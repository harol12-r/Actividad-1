#include <stdio.h>

int main (int argc, char *argv[]) {
int vec[5]=( 2,4,6,8,10);
for (int i = 0; i < 5; i++)
{
    printf("&d", vec[i]);
}
    return 0;
}