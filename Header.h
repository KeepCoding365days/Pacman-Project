#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
#include<string>
using namespace sf;
using namespace std;


class Grid{
protected:
	
	Sprite pacman;
	Sprite * bricks= new Sprite[900];
	RenderWindow grid;
	Sprite *fruits= new Sprite [900];
	Texture texture_pacman;
	Texture texture_bricks;
	Texture texture_fruit;
	
	

public:
	Grid();
	void Display();
};
class Ghost: virtual public Grid{
public:
	Sprite ghost;
	Texture texture_ghost;
 
	Ghost();
	Ghost(float num1, float num2);
	void show();
	void Scatter();
	void Follow(float x, float y);
	int getX();
	int getY();
	bool bricks_check_Ghost(float x, float y, int direaction);
};
class Engine: virtual public Grid, virtual public Ghost{
protected:
	int scores, lives;
	
public:
	Engine();
	void Running();
	bool bricks_check(float x, float y, int drection);
};