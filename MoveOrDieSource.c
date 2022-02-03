
#include<stdio.h>
#include<stdlib.h>
#include<raylib.h>
#include<time.h>
#include<math.h>

int main(){
  int x = 450;
  int y = 450;
  int speed = 10;
  char scoretext[50] = {"0"};
  int score = 0;
  int restart = 0;

  int pointX = 233;
  int pointY = 433;
  int eaten = 0;

  int headingX = 10;
  int headingY = 0;
  srand(time(NULL));


  InitWindow(900, 900, "Move or DIE");
  SetTargetFPS(60);
  while(!WindowShouldClose()){
    BeginDrawing();
      ClearBackground(BLACK);

      if(IsKeyPressed(KEY_W)){
        headingX = 0;
        headingY = (-speed);
      }else if(IsKeyPressed(KEY_D)){
        headingX = speed;
        headingY = 0;
      }else if(IsKeyPressed(KEY_A)){
        headingX = (-speed);
        headingY = 0;
      }else if(IsKeyPressed(KEY_S)){
        headingX = 0;
        headingY = speed;
      }
      if(IsKeyPressed(KEY_R) && restart == 1){
        score = 0;
        scoretext[0] = '\0';
        sprintf(scoretext, "%d", score);
        eaten = 0;
        x = 450;
        y = 450;
        speed = 10;
        restart = 0;
      }

      float timer = timer + GetFrameTime();

    if(timer >= 0.02f){
      x = x+headingX;
      y = y+headingY;
      timer = 0;

    }

   if (eaten == 1){
      eaten = 0;
      pointX = rand() % (800 + 1 - 0) + 0;
      pointY = rand() % (800 + 1 - 0) + 0;
      score++;
      speed++;
      scoretext[0] = '\0';
      sprintf(scoretext, "%d", score);
    }

      DrawText(scoretext, 10, 10, 25, RAYWHITE);

      DrawRectangle(pointX,pointY, 50, 50, RED);

      DrawRectangle(x,y, 50, 50, RAYWHITE);

      if(abs(x - pointX) <= 45 && abs(y - pointY) <= 45 && eaten == 0){
        eaten = 1;
      }

      if (x > 905 || x < -5 || y > 905 || y < -5){
        DrawText("GAME OVER", 150, 100,100, RAYWHITE);
        DrawText("PRESS R TO RESTART", 162, 200,50, RAYWHITE);
        speed = 0;
        restart = 1;
      }
    EndDrawing();
   }
   return 0;
}
