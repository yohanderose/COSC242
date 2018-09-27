#include <stdio.h>
#include <stdlib.h>

#include "graph.h"

int main(void)
{
    int size, u, v;
    graph g;

    
    scanf("%d", &size);
    g = graph_new(size);

    while (scanf("%d %d", &u, &v) == 2)
    {
        graph_add_edge_bi(g, u, v);
        /*graph_add_edge_uni(g, u, v);*/
    }

    graph_print_adjacent(g);
    printf("\n\n");

    graph_bfs(g, 1);
    graph_print_dist_pred(g);

    graph_free(g);

    return EXIT_SUCCESS;
}