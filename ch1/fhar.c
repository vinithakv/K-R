#include<stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main() {

    int fhar;
    for(fhar = LOWER; fhar <= UPPER; fhar = fhar + STEP){
        printf("%3d\t%6.1f\n", fhar, (5.0/9.0)*(fhar -32));
    }
}
