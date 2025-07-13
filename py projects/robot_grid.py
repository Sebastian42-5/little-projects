def generateGrid(n):
    return [['0' for _ in range(n)] for _ in range(n)]

def printGrid(matrix):
    for row in matrix:
        print(row)

def newPosition(row, col, position, key):
    new_position = position

    if key == 'o':
        if position == '↑':
            new_position = '->'
        elif position == '->':
            new_position = '↓'
        elif position == '↓':
            new_position = '<-'
        elif position == '<-':
            new_position = '↑'

    elif key == 'u':
        if position == '↑':
            new_position = '<-'
        elif position == '<-':
            new_position = '↓'
        elif position == '↓':
            new_position = '->'
        elif position == '->':
            new_position = '↑'

    elif key == 'i':
        if position == '->' or position == '<-':
            new_position = 'Invalid position'
        else:
            row -= 1

    elif key == 'k':
        if position == '->' or position == '<-':
            return row, col, 'Invalid position'
        row += 1

    elif key == 'j':
        if position == '↑' or position == '↓':
            return row, col, 'Invalid position'
        col -= 1

    elif key == 'l':
        if position == '↑' or position == '↓':
            return row, col, 'Invalid position'
        col += 1

    
    return row, col, new_position


position = ''

print('Welcome to the robot simulation!')

grid_size = int(input('Select your grid size: '))

grid = generateGrid(grid_size)

printGrid(grid)

row, col, start_position = input('Select the starting position of the robot (row, col, (u, d, l, r)): ').split()
row = int(row)
col = int(col)

if start_position == 'u':
    grid[row][col] = '↑'
    position = '↑'
elif start_position == 'd':
    grid[row][col] = '↓'
    position = '↓'
elif start_position == 'l':
    grid[row][col] = '<-'
    position = '<-'
elif start_position == 'r':
    grid[row][col] = '->' 
    position = '->'

printGrid(grid)

while True:

    key = input('Enter the movement key for the robot (j, k, l, u, i, o keys) or press q to quit: ')

    if key == 'q':
        break 
    else:
        new_row, new_col, new_position = newPosition(row, col, position, key)

        if new_row < 0 or new_row >= grid_size:
            print('Invalid input. try again')
            continue 

        elif new_position == 'Invalid position':
            print('Invalid input. try again')
            continue

        else:
            grid[row][col] = '0'
            grid[new_row][new_col] = new_position 
            row, col, position = new_row, new_col, new_position

            printGrid(grid)

        











