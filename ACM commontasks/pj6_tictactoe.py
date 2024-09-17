import random

def print_board(board):
    for row in board:
        print(row)

def check_win(board, player):
    # Check rows
    for row in board:
        if all(cell == player for cell in row):
            return True
    # Check columns
    for col in range(3):
        if all(board[row][col] == player for row in range(3)):
            return True
    # Check diagonals
    if all(board[i][i] == player for i in range(3)):
        return True
    if all(board[i][2 - i] == player for i in range(3)):
        return True
    return False

def check_full(board):
    # Check if the board is full (no empty spaces)
    return all(cell != ' ' for row in board for cell in row)

def get_move(board):
    move = 0
    valid_move = False
    while not valid_move:
        move = input("Enter your move (1-9): ")
        if move.isdigit():
            move = int(move)
            if 1 <= move <= 9:
                row, col = divmod(move - 1, 3)
                if board[row][col] == ' ':
                    valid_move = True
                else:
                    print("Cell already taken. Choose another.")
            else:
                print("Invalid move. Please enter a number between 1 and 9.")
        else:
            print("Invalid input. Please enter a number.")
    return row, col

def get_computer_move(board):
    # Randomly choose an empty cell for the computer's move
    empty_cells = [(row, col) for row in range(3) for col in range(3) if board[row][col] == ' ']
    return random.choice(empty_cells)

# Initialize the game board
board = [[' ' for _ in range(3)] for _ in range(3)]
players = ['X', 'O']
current_player = 0

print("Welcome to Tic-Tac-Toe!")
print_board(board)

# Main game loop
while True:
    if current_player == 0:
        print("Your turn.")
        row, col = get_move(board)
    else:
        print("Computer's turn.")
        row, col = get_computer_move(board)

    # Update the board with the current player's move
    board[row][col] = players[current_player]
    print_board(board)

    # Check for a win
    if check_win(board, players[current_player]):
        if current_player == 0:
            print("You win!")
        else:
            print("Computer wins!")
        break
    # Check for a draw
    elif check_full(board):
        print("It's a draw!")
        break

    # Switch players
    current_player = 1 - current_player