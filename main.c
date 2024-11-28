#include <iso646.h>
#include <stdio.h>
#include <stdlib.h>
#include "DFS.h"

void main() {
    struct grid * grid = create_grid(10, 10);
    dfs(grid);
    print_grid(grid);
    printf("\n");
    print_visited(grid);
    free_grid(grid);
}
