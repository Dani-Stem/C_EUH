/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawRet(int x, int y);
	void DrawRet1(int x, int y);
	void DrawRet2(int x, int y);
	void DrawRet3(int x, int y);
	void DrawRet4(int x, int y);
	void DrawHeart(int x, int y);
	void DrawGameOver(int x, int y);
	void DrawTitleScreen(int x, int y);
	int ClampScreenX(int x, int width);
	int ClampScreenY(int y, int height);
	bool IsColliding(int x0, int y0, int width0, int height0,
		int x1, int y1, int width1, int height1);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	int retX = 400;
	int retY = 300;
	int retWidth = 32;
	int retHeight = 32;
	int ret1X = 400;
	int ret1Y = 300;
	int ret1Width = 32;
	int ret1Height = 32;
	int ret2X = 400;
	int ret2Y = 300;
	int ret2Width = 26;
	int ret2Height = 26;
	int ret3X = 400;
	int ret3Y = 300;
	int ret3Width = 26;
	int ret3Height = 26;
	int heart0X = 0;
	int heart0Y = 0;
	int heart0vx = 1;
	int heart0vy = 1;
	bool heart0IsEaten = false;
	int heart1X = 2;
	int heart1Y = 2;
	int heart1vx = -1;
	int heart1vy = 1;
	bool heart1IsEaten = false;
	int heart2X = 3;
	int heart2Y = 3;
	int heart2vx = 1;
	int heart2vy = -1;
	bool heart2IsEaten = false;
	int heart3X = 4;
	int heart3Y = 4;
	int heart3vx = 1;
	int heart3vy = -1;
	bool heart3IsEaten = false;
	int heartWidth = 28;
	int heartHeight = 28;
	bool isStarted = false;
	int numberHeartsEaten = 0;
	/********************************/
};