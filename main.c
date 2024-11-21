#include <stdlib.h>

#include "DFS.h"
#include "random.h"

void main() {

    struct grid * grid = create_grid(5, 5);
    print_grid(grid);
    free_grid(grid);
}
