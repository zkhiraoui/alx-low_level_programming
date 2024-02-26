#!/usr/bin/python3
"""
This module contains a function that calculates the perimeter of an island.
The island is represented in a grid where 1 represents land and 0 represents water.
The grid cells are connected horizontally/vertically (not diagonally).
"""

def island_perimeter(grid):
    """
    Calculates the perimeter of an island described in a grid.
    
    Parameters:
    grid (list of list of ints): The grid representing the island and water.
    
    Returns:
    int: The perimeter of the island.
    """
    height = len(grid)
    width = len(grid[0]) if height else 0
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                # Check top
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check bottom
                if i == height-1 or grid[i+1][j] == 0:
                    perimeter += 1
                # Check left
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check right
                if j == width-1 or grid[i][j+1] == 0:
                    perimeter += 1
    return perimeter
