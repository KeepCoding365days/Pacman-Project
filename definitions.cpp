#include "Header.h"
int bricks_count;

Grid::Grid() {
    RenderWindow grid(VideoMode(1080, 720), "Title");
   
    
    if (!texture_bricks.loadFromFile("textures/bricks.jfif")) {
        cout << "Not loaded";
    }
    if (!texture_pacman.loadFromFile("textures/pacman.png")) {
        cout << "Not loaded";
    }
    
    if (!texture_fruit.loadFromFile("textures/fruit.png")) {
        cout << "Not loaded";
    }
    for (int i = 0;i < 900;i++) {
        bricks[i].setTexture(texture_bricks);
    }
    pacman.setTexture(texture_pacman);
    
    for (int i = 0;i < 900;i++) {
        fruits[i].setTexture(texture_fruit);
    }

}

void Grid::Display() {
    grid.display();
}

Engine::Engine():Grid(),Ghost(){
    lives = 3;
    scores =  0;
   
}

void Engine::Running() {
    int k;
    Ghost ghost_2(640,350);
    Ghost ghost_1(640, 350);
    Ghost ghost_3(640, 350);
    pacman.setPosition(50.f, 20.f);
    
    if (lives > 0) {
        RenderWindow grid(VideoMode(1080, 720), "Play Pacman");
        while (grid.isOpen())
        {
            bricks_count = 0;
            k = 0;
            Event event;

            grid.clear();
            grid.draw(pacman);
            


            for (float i = 0;i < 1080;i += 40, bricks_count++) { //Drawing Bricks
                for (float j = 0;j < 720;j += 12) {
                    if (i == 0 || i == 1040) {
                        bricks[bricks_count].setPosition(i, j);
                        grid.draw(bricks[bricks_count]);
                        bricks_count++;
                    }
                    if (j == 0 || j == 700) {
                        bricks[bricks_count].setPosition(i, j);
                        grid.draw(bricks[bricks_count]);
                        bricks_count++;
                    }

                }
            }

            for (float i = 500;i < 550;i += 40, bricks_count++) {
                for (float j = 50;j < 500;j += 12) {
                    bricks[bricks_count].setPosition(i, j);
                    grid.draw(bricks[bricks_count]);
                    bricks_count++;
                }
            }
            for (float i = 100;i < 900;i += 40, bricks_count) {
                bricks[bricks_count].setPosition(i, 510.f);
                grid.draw(bricks[bricks_count]);
                bricks_count++;
            }

            for (float i = 100;i < 900;i += 40) {
                bricks[bricks_count].setPosition(i, 610.f);
                grid.draw(bricks[bricks_count]);
                bricks_count++;
            }

            for (float j = 50;j < 500;j += 12) {
                bricks[bricks_count].setPosition(300, j);
                grid.draw(bricks[bricks_count]);
                bricks_count++;
            }

            for (float j = 50;j < 500;j += 12) {
                bricks[bricks_count].setPosition(700, j);
                grid.draw(bricks[bricks_count]);
                bricks_count++;
            }
            for (float j = 0;j < 1080;j += 12) {
                bricks[bricks_count].setPosition(j, 712);
                grid.draw(bricks[bricks_count]);
                bricks_count++;
            }
            

            for (float j = 20;j < 690;j += 25, k++) { //Drawing Fruits
                fruits[k].setPosition(50, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(73, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(950, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(973, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(996, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(1019, j);
                grid.draw(fruits[k]);
            }
            for (float i = 96;i < 940;i += 23, k++) {
                fruits[k].setPosition(i, 20);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(i, 525);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(i, 550);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(i, 575);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(i, 627);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(i, 652);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(i, 677);
                grid.draw(fruits[k]);
            }
            for (float j = 45;j < 490;j += 25, k++) {
                fruits[k].setPosition(100, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(125, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(150, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(175, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(200, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(225, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(250, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(275, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(350, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(375, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(400, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(425, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(450, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(475, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(600, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(625, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(650, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(675, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(750, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(775, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(800, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(825, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(850, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(875, j);

                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(900, j);
                grid.draw(fruits[k]);
                k++;
                fruits[k].setPosition(925, j);
                grid.draw(fruits[k]);

            }


            grid.draw(pacman);

            

            while (grid.pollEvent(event))
            {
                if (event.type == Event::Closed)
                    grid.close();
                else if (event.type == Event::KeyPressed) {
                    if (event.key.code == Keyboard::Up) {
                        if (!bricks_check(pacman.getPosition().x, pacman.getPosition().y, 2)) {
                            pacman.setPosition(pacman.getPosition().x, pacman.getPosition().y - 1.f);
                            grid.draw(pacman);
                            
                        }
                    }
                    else if (event.key.code == Keyboard::Down) {

                        if (!bricks_check(pacman.getPosition().x, pacman.getPosition().y, 8)) {
                            pacman.setPosition(pacman.getPosition().x, pacman.getPosition().y + 1.f);
                            grid.draw(pacman);
                            
                        }
                    }
                    else if (event.key.code == Keyboard::Left) {
                        if (!bricks_check(pacman.getPosition().x, pacman.getPosition().y, 4)) {
                            pacman.setPosition(pacman.getPosition().x - 1.f, pacman.getPosition().y);

                            grid.draw(pacman);
                        }
                    }
                    else if (event.key.code == Keyboard::Right) {

                        if (!bricks_check(pacman.getPosition().x, pacman.getPosition().y, 6)) {
                            pacman.setPosition(pacman.getPosition().x + 1.f, pacman.getPosition().y);

                            grid.draw(pacman);
                        }
                    }
                }

            }
            for (int i = 0;i < k;i++) { //Eating Fruits
                
                if (pacman.getPosition() == fruits[i].getPosition() || (pacman.getPosition().x >= fruits[i].getPosition().x && pacman.getPosition().x <= (fruits[i].getPosition().x + 20) && pacman.getPosition().y >= fruits[i].getPosition().y && pacman.getPosition().y <= (fruits[i].getPosition().y + 24))) {
                    if (fruits[i].getColor() != Color::Black) {
                        fruits[i].setColor(Color::Black);
                        scores++;
                    }
                }
            }

            if (scores > 20) {
                ghost_2.Scatter();
            }

            if (scores > 30) {
                ghost_3.Follow(pacman.getPosition().x, pacman.getPosition().y);
                                
            }
            
            ghost_1.Scatter();
            if ((pacman.getPosition().x >= ghost_1.getX() && pacman.getPosition().x <= (ghost_1.getX() + 23)) && (pacman.getPosition().y >= ghost_1.getY() && pacman.getPosition().y <= (ghost_1.getY() + 24))) {
                pacman.setPosition(530, 550);
                lives--;
            }
            if ((pacman.getPosition().x >= ghost_2.getX() && pacman.getPosition().x <= (ghost_2.getX() + 23)) && (pacman.getPosition().y >= ghost_2.getY() && pacman.getPosition().y <= (ghost_2.getY() + 24))) {
                pacman.setPosition(530, 550);
                lives--;
            }
            if ((pacman.getPosition().x >= ghost_3.getX() && pacman.getPosition().x <= (ghost_3.getX() + 23)) && (pacman.getPosition().y >= ghost_3.getY() && pacman.getPosition().y <= (ghost_3.getY() + 24))) {
                pacman.setPosition(530, 550);
                lives--;
            }
            if (lives == 0) {
                grid.close();
            }
            
                grid.draw(ghost_2.ghost);
            
            
                grid.draw(ghost_3.ghost);
            
            if (ghost_1.getX() == ghost_2.getX() && ghost_1.getY() == ghost_1.getY()) {
                ghost_1.ghost.setPosition(ghost_1.getX() + 4, ghost_1.getY() - 2);
            }

            grid.draw(ghost_1.ghost);
            grid.display();

        }
    }
    if (lives == 0) {
        RenderWindow window(VideoMode(1080, 720), "Game Finished");
        while (window.isOpen()) {
            Text end;
            Font font;
            font.loadFromFile("textures/font.ttf");
            end.setFont(font);
            end.setCharacterSize(50);
            end.setFillColor(Color::Green);
            string a = "Game Fininshed.\n Your scores are: ";
            a=a + to_string(scores);

            end.setString(a);
            end.setPosition(440, 260);
            window.draw(end);
            window.display();
            Event event;
            while (window.pollEvent(event)) {
                if (event.type == Event::Closed)
                    window.close();
            }
        }
    }
}

Ghost::Ghost(): Grid() {
    ghost.setPosition(70.f, 70.f);
    if (!texture_ghost.loadFromFile("textures/ghost.jfif")) {
        cout << "Not loaded";
    }
    ghost.setTexture(texture_ghost);
}
void Ghost::show() {
    grid.draw(ghost);
}
int Ghost::getX() {
    return ghost.getPosition().x;
}
int Ghost::getY() {
    return ghost.getPosition().y;
}
void Ghost::Scatter() {
    
    int array[4] = { 2,4,6,8 };
    srand(time(0));
    int r = rand() % 4;
    float x = ghost.getPosition().x;
    float y = ghost.getPosition().y;
    
    
        
        if (r == 0&&y>0) {
           this-> ghost.move(0.f, - 1.f);
            
        }
        else if (r == 1&&x>0) {
            this->ghost.move(-1.f,0.f);
            
        }
        else if (r == 2&&x<1080) {
           this-> ghost.move(1.f, 0.f);
            
        }
        else if (r == 3&& y<720) {
           this-> ghost.move(0.f, 1.f);
           
        }
        else if ( x > 0 && x<1080) {
            this->ghost.move(1.f, 0.f);
        }
        
        else if (y>0&& y < 720) {
            this->ghost.move(0.f, 1.f);
        }
       
   
    



}
void Ghost::Follow(float x,float y) {
    
    int x_g = ghost.getPosition().x;
    int y_g= ghost.getPosition().y;

    if (x - x_g > 0) {
        this->ghost.move(0.5, 0.f);
    }
    else if(x-x_g<0) {
       this-> ghost.move(-0.5, 0.f);
    }
    if (y - y_g > 0) {
        this->ghost.move(0.f, 0.5);
    }
    else if (y - y_g < 0) {
        this->ghost.move(0.f, -0.5);
    }
    
}
bool Engine :: bricks_check(float x, float y,int direction) { //2 for Up, 6 for right, 8 for down, 4 for left 
    bool check = 0;

    for (int i = 0;i < bricks_count;i++) {
        if ((bricks[i].getPosition().y) == (y + 23) && direction == 8 &&(x >=bricks[i].getPosition().x &&x<bricks[i].getPosition().x+40)) {
            check = 1;} 
        else if ((bricks[i].getPosition().y +12)== (y - 1) && (x>=bricks[i].getPosition().x ) && (x<=(bricks[i].getPosition().x+40)) && direction == 2){
            check = 1;}
        else if( ((bricks[i].getPosition().y) <=y  && (bricks[i].getPosition().y + 12) >= y )&& (bricks[i].getPosition().x)==(x+21) && direction == 6){
            check = 1;}
        else if (((bricks[i].getPosition().y) <= y && (bricks[i].getPosition().y + 12) >= y) && (bricks[i].getPosition().x+40) == (x -1) && direction==4) {
            check = 1;
        }
    }
    return check;
}
bool Ghost::bricks_check_Ghost(float x, float y, int direction) { //2 for Up, 6 for right, 8 for down, 4 for left //checking for Bricks
    bool check = 0;
    
    for (int i = 0;i < bricks_count;i++) {
        if ((bricks[i].getPosition().y) == (y + 24) && direction == 8 || (x >= bricks[i].getPosition().x && x < bricks[i].getPosition().x + 40)) {
            check = 1;
        }
        else if ((bricks[i].getPosition().y + 12) == (y - 1) || (x >= bricks[i].getPosition().x) && (x <= (bricks[i].getPosition().x + 40)) && direction == 8) {
            check = 1;
        }
        else if (((bricks[i].getPosition().y) <= y || (bricks[i].getPosition().y + 12) >= y) && (bricks[i].getPosition().x) == (x + 23) && direction == 6) {
            check = 1;
        }
        else if (((bricks[i].getPosition().y) <= y || (bricks[i].getPosition().y + 12) >= y) && (bricks[i].getPosition().x + 40) == (x - 1) && direction == 4) {
            check = 1;
        }

    }
    return check;
}

Ghost::Ghost(float num1, float num2) {
    ghost.setPosition(num1, num2);
    if (!texture_ghost.loadFromFile("textures/ghost.jfif")) {
        cout << "Not loaded";
    }
    ghost.setTexture(texture_ghost);
}
