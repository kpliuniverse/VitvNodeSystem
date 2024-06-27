#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#define GRIDSIZE_T uint32_t

struct GridInfo {
    uint8_t* ptr;
    GRIDSIZE_T nodes;
};

struct GridInfo create_node_grid(GRIDSIZE_T nodes) {
    uint8_t* x = calloc((nodes * nodes + 7) >> 3, 1);
    struct GridInfo out = {x, nodes};
    return out;
}
    
void free_node_grid(struct GridInfo grid) {
    free(grid.ptr);
}


void toggle_node(struct GridInfo* grid, GRIDSIZE_T x, GRIDSIZE_T y, bool value) {
    size_t ind = y * grid->nodes + x;
    uint8_t* byte = grid->ptr + (ind >> 3);
    uint8_t change_mask = 1 << (ind % 8);
    //per bit bases if change_mask is one change byte to value, else leave it as is.
    *byte = ((value * 255) & change_mask ) | (*byte & ~change_mask);
}

void connect_node(struct GridInfo* grid, GRIDSIZE_T fro, GRIDSIZE_T to) {
    toggle_node(grid, to, fro, true);
}

void disconnect_node(struct GridInfo* grid, GRIDSIZE_T fro, GRIDSIZE_T to) {
    toggle_node(grid, to, fro, false);
}

