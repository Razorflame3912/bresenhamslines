#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
  int xnow,ynow,d,a,b;

  if(x0 > x1){
    int tmp = x1;
    x1 = x0;
    x0 = tmp;
    tmp = y1;
    y1 = y0;
    y0 = tmp;
  }
  
  a = y1 - y0;
  b = x0 - x1;
  d = (2*a) + b;
  xnow = x0;
  ynow = y0;
  //printf("%d ",d);

  if(y1 - y0 >= 0 && abs(a) <= abs(b)){
    //printf("octet 1 code \n");
     while(xnow <= x1){
      plot(s,c,xnow,ynow);
      if(d > 0){
	ynow++;
	d += (2*b);
      }
      xnow++;
      d += (2*a);
      
      //printf("%d ", xnow);
     }
  }

  else if(y1 - y0 >= 0 && abs(b) <= abs(a)){
    //printf("octet 2 code \n");
    while(ynow <= y1){
      plot(s,c,xnow,ynow);
      if(d < 0){
	xnow++;
	d += (2*a);
      }
      ynow++;
      d += (2*b);
      
      //printf("%d ", ynow);
    }
  }

  else if(y1 - y0 <= 0 && abs(b) <= abs(a)){
    //printf("octet 7 code \n");
    while(ynow >= y1){
      plot(s,c,xnow,ynow);
      if(d < 0){
	xnow++;
	d -= (2*a);
      }
      ynow--;
      d += (2*b);
      
      //printf("%d ", ynow);
    }
  }

  else{
    //printf("octet 8 code \n");
    while(xnow <= x1){
      plot(s,c,xnow,ynow);
      if(d > 0){
	ynow--;
	d += (2*b);
      }
      xnow++;
      d -= (2*a);
      
      //printf("%d ", xnow);
     }
  }
}
