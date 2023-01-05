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
static void playerConfig(void)
{
    cout<<"\t Player 1 -(x)\t Player 2 -(o)\n";
}

/**
 * @brief Prints the new Game Board
 * 
 */
static void newGameBoard(void)
{
    cout<<"\t  1  |  2  |  3  \n";
    cout<<"\t- - -|- - -|- - -\n";
    cout<<"\t  4  |  5  |  6  \n";
    cout<<"\t- - -|- - -|- - -\n";
    cout<<"\t  7  |  8  |  9  \n";
}

/**
 * @brief Get the Player Char object
 * 
 * @param playernum 
 */
static char getPlayerChar(uint8_t playernum)
{
    if(playernum % 2 ==0)
    {
        // Even Number or Player 2
        return LETTER_X;
    }
    else
    {
        // Odd Number or Player 1
        return LETTER_0;
    }
}

/**
 * @brief 
 * 
 */
void game_running(void)
{
    int num; //Num needs to be an integer
    uint8_t player=1;
    char toBeImplemented;
    char gameArr[10];
    gameArr[1] = LETTER_1;
    for(uint8_t loopCount = 2;loopCount < 10;loopCount++)
    {
        gameArr[loopCount] = gameArr[loopCount-1]+1;
    }
    for(uint8_t loopCount = 1;loopCount < 10;loopCount++,player++)
    {
        toBeImplemented = getPlayerChar(player);
        // cout<<"Player "<<player<<"- Enter a number to place "<<toBeImplemented<<": \n";
        printf("Player %d- Enter a number to place %c\n",player,toBeImplemented);
        cin>>num;
        gameArr[num] = toBeImplemented;
        // printf("%c",gameArr[num]);
        printf("\t %c | %c | %c \n",gameArr[1],gameArr[2],gameArr[3]);
        // cout<<"\t  1  |  2  |  3  \n";
        cout<<"\t- - -|- - -|- - -\n";
        printf("\t %c | %c | %c \n",gameArr[4],gameArr[5],gameArr[6]);
        cout<<"\t- - -|- - -|- - -\n";
        // cout<<"\t  7  |  8  |  9  \n";
        printf("\t %c | %c | %c \n",gameArr[7],gameArr[8],gameArr[9]);
    }
}

/**
 * @brief The Master function for TicTacToe game
 * 
 */
void Run_TicTacToe(void)
{
    uint8_t game[9];
    uint8_t num;
    welcomeBanner();
    playerConfig();
    newGameBoard();
    game_running();
}
