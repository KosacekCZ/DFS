//
// Created by pesekmik on 21.11.24.
//

#include "DFS.h"

#include <stdlib.h>
#include "random.h"

struct grid {
    int ** grid;
    bool ** visited;

};

struct grid * create_grid(int w, int h) {
    struct grid * temp = malloc(sizeof(struct grid));
    temp->grid = malloc(w * sizeof(int*));
    for (int i = 0; i < w; i++) {
        temp->grid[i] = calloc(0, h * sizeof(int));
    }
    temp->visited = malloc(w * sizeof(bool*));
    for (int i = 0; i < w; i++) {
        temp->visited[i] = calloc(false, h * sizeof(bool));
    }
    return temp;
}

void free_grid(struct grid *grid) {
    for (int i = 0; i < sizeof(grid->visited) / sizeof(grid->visited[0]); i++) {
        free(grid->visited[i]);
    }
    free(grid->grid);
    for (int i = 0; i < sizeof(grid->grid) / sizeof(grid->grid[0]); i++) {
        free(grid->grid[i]);
    }
    free(grid->visited);
    free(grid);
}

void dfs(struct grid *grid) {

}
