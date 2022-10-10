#include <stdio.h>
#include <stdlib.h>

int dice(int ran){
    if (ran%10 == 6) return 4;
    else if (ran%10 == 7) return 3;
    else if (ran%10 == 8) return 5;
    else if (ran%10 == 9) return 6;
    else if ((ran%10 == 0)||(ran%10 == 1)||(ran%10 == 2)) return 1;
    else return 2;

}

int main(){
    int ran;
    ran = rand();
    printf("%d\n", dice(ran));
    return 0;
}

