from libc.stdint cimport uint32_t, uint8_t

cdef extern from "build/libvitvnodesystem.so":
    ctypedef struct GridInfo:
        uint8_t* ptr;
        uint32_t num_nodes
    GridInfo create_node_grid(uint32_t nodes)
    void free_node_grid(GridInfo grid)
    inline void connect_nodes(GridInfo grid, uint32_t fro, uint32_t to)
    inline void disconnect_nodes(GridInfo grid, uint32_t fro, uint32_t to)

def create_node_grid(nodes):
    return create_node_grid(nodes)

def free_node_grid(grid_info):
    free_node_grid(grid_info)

def connect_nodes(grid_info, fro, to):
    connect_nodes(grid_info, fro, to)

def disconnect_nodes(grid_info, fro, to):
    disconnect_nodes(grid_info, fro, to)


