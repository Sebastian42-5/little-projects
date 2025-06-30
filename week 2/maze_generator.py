import random

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

    maze[start_row][start_col] = '*'

    current_row = start_row

    current_col = start_col 

    while current_row != end_row and current_col != end_col:
        if maze[current_row][current_col + 1] == ' ':
            if current_row 



    

def print_maze(maze):
    for row in maze:
        print(' '.join(row))