#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;

  clear_screen(s);


  int x,y;
  int dir;

  x = 0;
  y = 500;
  dir = -1;
  
 

  while(y > 0){
    while(x+40<500){
      draw_line(x,y,40+x,y+(50*dir),s,c);
      x += 40;
      y += (50*dir);
      dir *= -1;
    }
    if(dir<0){
      y -= 60;
    }
    x = 0;
    dir *= -1;
    }

  
  display(s);
  save_extension(s, "lines.png");
}
