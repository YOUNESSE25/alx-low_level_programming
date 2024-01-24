#!/usr/bin/python3
"""
Create a function def island_perimeter(grid):
"""


def island_perimeter(grid):
    """
    Return the perimiter of an island.
    """
    width = len(grid[0])
    height = len(grid)
    edg = 0
    tay = 0

    for n in range(height):
        for m in range(width):
            if grid[n][m] == 1:
                tay += 1
                if (m > 0 and grid[n][m - 1] == 1):
                    edg += 1
                if (n > 0 and grid[n - 1][m] == 1):
                    edg += 1
    return tay * 4 - edg * 2
