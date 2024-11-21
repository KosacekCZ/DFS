//
// Created by pesekmik on 21.11.24.
//

#ifndef DFS_H
#define DFS_H

struct grid;

void dfs(struct grid * grid);
struct grid * create_grid(int w, int h);
void free_grid(struct grid * grid);
void print_grid(struct grid * grid);


#endif //DFS_H
