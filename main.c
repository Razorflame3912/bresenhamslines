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

  draw_line(250,250,400,200,s,c);
  //draw_line(250,250,500,200,s,c);
  //draw_line(250,250,255,100,s,c);
  plot(s,c,10,10);
  plot(s,c,20,20);
  plot(s,c,30,30);
  plot(s,c,40,40);
  display(s);
  save_extension(s, "lines.png");
}
