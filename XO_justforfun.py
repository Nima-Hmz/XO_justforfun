import random


def game_board(board):
    temp = 0
    for i in range(3):
        for j in range(3):
            print(board[j + temp], end=" ")
        print()
        temp += 3


def move_checker(move, choices):
    result = True
    if move > 9 or move < 1:
        result = False
    elif move in choices:
        result = False

    return result


def status_check(list_choices):
    result = False
    n = 0
    for i in range(3):
        if list_choices[0 + n] and list_choices[1 + n] and list_choices[2 + n] == 1:
            result = True
        n += 3

    m = 0
    for i in range(3):
        if list_choices[0 + m] and list_choices[3 + m] and list_choices[6 + m] == 1:
            result = True
        m += 1

    if list_choices[0] and list_choices[4] and list_choices[8] == 1:
        result = True

    elif list_choices[2] and list_choices[4] and list_choices[6] == 1:
        result = True

    return result


def main():
    choices = []
    player_choices = [0, 0, 0, 0, 0, 0, 0, 0, 0]
    system_choices = [0, 0, 0, 0, 0, 0, 0, 0, 0]
    board = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    game_end = 0

    print("welcome")

    while game_end <= 8:
        # player

        game_board(board)
        player_choice = int(input("Enter your move(1-9): "))
        check = move_checker(player_choice, choices)

        while not check:
            player_choice = int(input("wrong move try again(1-9): "))
            check = move_checker(player_choice, choices)

        choices.append(player_choice)

        player_choice -= 1
        board[player_choice] = "O"
        player_choices[player_choice] = 1
        game_end += 1

        if status_check(player_choices):
            game_board(board)
            print("### YOU WIN ###")
            break

        # system

        if game_end == 9:
            print("End")
            break

        system_choice = random.randint(1, 9)
        check = move_checker(system_choice, choices)

        while not check:
            system_choice = random.randint(1, 9)
            check = move_checker(system_choice, choices)

        choices.append(system_choice)

        system_choice -= 1
        board[system_choice] = "X"
        system_choices[system_choice] = 1
        game_end += 1

        if status_check(system_choices):
            game_board(board)
            print("*** YOU LOSE ***")
            break


main()
