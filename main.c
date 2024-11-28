#include <iso646.h>
#include <stdio.h>
#include <stdlib.h>

#include "DFS.h"
#include "random.h"

void main() {
    struct grid * grid = create_grid(10, 10);
    print_grid(grid);
    printf("\n");
    print_visited(grid);
    free_grid(grid);
}
