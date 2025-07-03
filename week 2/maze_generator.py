import random
from collections import deque

def maze_generator():
    size = int(input('Enter the desired size for your maze: '))

    maze = []

    start_end = []

    maze.append(['#' for _ in range(size)])

    for _ in range(size - 1):
        choices = [' ', '#']
        maze.append(['#'] + [random.choice(choices) for _ in range(size - 2)] + ['#'])

    maze.append(['#' for _ in range(size)])

    left_or_right = [0, -1]

    rows = list(range(size))

    for _ in range(2):

        desired_row = random.choice(rows)

        desired_place = random.choice(left_or_right)

        maze[desired_row][desired_place] = ' '

        start_end.append((desired_row, desired_place))

    return maze, start_end

def find_path(maze, start_end):
    start_row, start_col = start_end[0]

    end_row, end_col = start_end[-1]

    rows, cols = len(maze), len(maze[0])

    explore = deque([(start_row, start_col)])

    parents = {(start_row, start_col): None}

    visited = {(start_row, start_col)}

    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]


    while explore:
        r, c = explore.popleft()

        if (r, c) == (end_row, end_col):
            
            while (r, c) is not None:
                maze[r][c] = '*'
                r, c = parents[(r, c)]
            return True

        for dr, dc in directions:
            nr, nc = r + dr, c + dc

            if 0 <= nr < rows and 0 <= nc < cols and maze[nr][nc] == ' ' and (nr, nc) not in visited:
                visited.add((nr, nc))
                
                parents[(nr, nc)] = (r, c) 

                explore.append((nr, nc))

    return False

def print_maze(maze):
    for row in maze:
        print(' '.join(row))


if __name__ == '__main__':

    my_maze, start_end = maze_generator()

    print_maze(my_maze)

    if find_path(my_maze, start_end):
        print_maze(my_maze)

    else:
        print('(no path has been found for this maze)')