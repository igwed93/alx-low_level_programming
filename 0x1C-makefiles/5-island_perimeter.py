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
            Grid is rectangular, width and height <= 100
    """

    vertical = 0  # number of vertical cells
    horizontal = 0  # number of horizontal cells

    for v in range(len(grid)):
        if 1 in grid[v]:
            vertical += 1
        if (grid[v]).count(1) > 1:
            horizontal += (grid[v]).count(1)
        continue
    print(vertical)
    print(horizontal)
    return (2*(vertical + horizontal))
