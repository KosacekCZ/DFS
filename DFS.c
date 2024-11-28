//
// Created by pesekmik on 21.11.24.
//

#include "DFS.h"

#include <stdio.h>
#include <stdlib.h>
#include "random.h"

struct grid {
    int ** grid;
    bool ** visited;
    int ** path;
    int step;
    int w;
    int h;
};

struct grid * create_grid(int w, int h) {
    struct grid * temp = malloc(sizeof(struct grid));
    temp->w = w;
    temp->h = h;
    temp->step = 0;
    temp->path = malloc(1 * sizeof(int *));
    temp->path[0] = malloc(2 * sizeof(int));

    temp->grid = malloc(w * sizeof(int*));
    for (int i = 0; i < w; i++) {
        temp->grid[i] = calloc(h, h * sizeof(int));
    }
    temp->visited = malloc(w * sizeof(bool*));
    for (int i = 0; i < w; i++) {
        temp->visited[i] = calloc(h, h * sizeof(bool));
    }
    return temp;
}

void free_grid(struct grid *grid) {
    for (int i = 0; i < grid->w; i++) {
        free(grid->visited[i]);
    }
    free(grid->grid);
    for (int i = 0; i < grid->w; i++) {
        free(grid->grid[i]);
    }
    free(grid->visited);
    free(grid);
}

void print_grid(struct grid * grid) {
    for (int i = 0; i < grid->w; i++) {
        for (int j = 0; j < grid->h; j++) {
            printf("%d ", grid->grid[i][j]);
        }
        printf("\n");
    }
}

void print_visited(struct grid *grid) {
    for (int i = 0; i < grid->w; i++) {
        for (int j = 0; j < grid->h; j++) {
            printf("%d ", grid->visited[i][j]);
        }
        printf("\n");
    }
}

void add_step(struct grid * grid, int x, int y) {
    int ** temp = realloc(grid->path, grid->step* sizeof(int));
    if (temp == NULL) {
        fprintf(stderr, "Error in allocation of temp\n");
    }

}

void dfs(struct grid *grid) {

}
