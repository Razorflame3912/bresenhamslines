#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = MAX_COLOR;
  c.green = MAX_COLOR;
  c.blue = 0;

  clear_screen(s);

  /*
  int x,y;
  int dir;

  x = 0;
  y = 500;
  dir = -1;
  
 

  while(y >= 0){
    while(x<500){
      draw_line(x,y,100+x,y+(100*dir),s,c);
      x += 100;
      y += (100*dir);
      dir *= -1;
    }
    y -= 35;
    x = 0;
    /*c.green -= 127;
    c.red += 63;
    c.blue += 31;
    }*/

  draw_line(265,200,290,250,s,c);
  draw_line(290,250,340,255,s,c);
  draw_line(340,255,305,290,s,c);
  draw_line(305,290,320,340,s,c);
  draw_line(320,340,265,315,s,c);
  draw_line(265,315,220,340,s,c);
  draw_line(220,340,235,290,s,c);
  draw_line(235,290,200,255,s,c);
  draw_line(200,255,250,250,s,c);
  draw_line(250,250,265,200,s,c);

  
  display(s);
  save_extension(s, "lines.png");
}
