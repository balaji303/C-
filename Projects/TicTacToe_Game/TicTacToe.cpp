/**
 * @file TicTacToe.cpp
 * @author @balaji303 (https://github.com/balaji303)
 * @brief This is the Presentation layer of the TicTacToe project
 * @version 1.0
 * @date 04-01-2023
 * 
 * Copyright (c) 2022 @balaji303
 * 
 */
#include <iostream>
#include <stdint.h>
#include "TicTacToe.h"
using namespace std;

/**
 * @brief Get the Version object
 * 
 * @return uint8_t 
 */
static int getVersion(void)
{
    return VERSION_NUM;
}

/**
 * @brief Prints the welcome banner for the game
 * 
 */
static void welcomeBanner(void)
{
    cout<<"\t\tWelcome  to  the\t\t\n";
    cout<<"\t\t TIC TAC TOE  \t\t\n";
    cout<<"\t\t   2k22  v"<<getVersion();
    cout<<"\t\t 2-Player mode \t\t\n";
}

/**
 * @brief Displays the Player's config settings
 * 
 */
void playerConfig(void)
{
    cout<<"\t Player 1 -(x)\t Player 2 -(o)\n";
}

/**
 * @brief The Master function for TicTacToe game
 * 
 */
void Run_TicTacToe(void)
{
    welcomeBanner();
    playerConfig();
    newGameBoard();//TODO
}
