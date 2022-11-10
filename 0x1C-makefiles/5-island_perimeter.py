#!/usr/bin/python3
"""
The Island Perimeter moduel:
Defines: island_perimeter(grid)
"""


def island_perimeter(grid):
    """ island_perimeter(grid)
    Args:
        grid:
            is a list of list of integers.
            0 represents a water zone & 1 a land zone.
            One cell is a square with side length 1.
            Grid cells are connected horizontally/vertically.
            Grid is rectangular, width and height don't exceed 100
            Grid is completely surrounded by water, and there is one island
    """

    width = len(grid[0])
    height  = len(grid)
    grid_edges = 0
    grid_size = 0

    for v in range(height):
        for h in range(width):
            if grid[v][h] == 1:
                grid_size += 1
                if (h > 0 and grid[v][h - 1] == 1):
                    grid_edges += 1
                if (v > 0 and grid[v - 1][h] == 1):
                    grid_edges += 1
    print(grid_size)
    print(grid_edges)
    return (grid_size * 4 - grid_edges * 2)
