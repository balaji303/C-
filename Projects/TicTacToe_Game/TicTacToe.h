/**
 * @file TicTacToe.h
 * @author @balaji303 (https://github.com/balaji303)
 * @brief This is the header file for the presentation layer of the application
 * @version 1.0
 * @date 04-01-2023
 * 
 * Copyright (c) 2022 @balaji303
 * 
 */
#ifndef _TICTACTOE_CPP
#define _TICTACTOE_CPP
#define VERSION_NUM 1
#define LETTER_0 0x4f
#define LETTER_X 0x58
#define LETTER_1 0x31
#define WIN 1
#define LOSE 0
void Run_TicTacToe(void);
uint8_t checkWinnerSeq(char *gameSequArr);
#endif