#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int parancs;
    parancs = system("dir");
    printf("Létező parancs (dir) visszatérési értéke: %d\n", parancs);
    parancs = system("dr");
    printf("Nem létező parancs (dr) visszatérési értéke: %d\n", parancs);
    return 0;
}
