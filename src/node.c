
#include <stdint.h>


#define GRIDSIZE_T uint32_t
struct GridInfo() {
    void* ptr;
    GRIDSIZE_T size;
}

GridInfo create_node_grid(GRIDSIZE_T size) {
    void* x = calloc(size * size, 1)
    return GridInfo;
}

