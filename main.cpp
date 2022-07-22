#include <conio.h>
#include <graphics.h>
#include <iostream>

using namespace std;
int main()
{
  int driver = DETECT, mode, i;
  initgraph(&driver, &mode, (char*)"");
  POINT cursorPosition;
  int maxY = getmaxy();
  int maxX = getmaxx();
  int mX, mY;
  while(1){

  	GetCursorPos(&cursorPosition);
  	mX = cursorPosition.x;
  	mY = cursorPosition.y;
  	
  	if(GetAsyncKeyState(VK_LBUTTON)){
	  putpixel(mX, mY, YELLOW);
	  moveto(mX, mY);
	
	int x = getx();
	int y = gety();
  	
	setcolor(WHITE);
    line(0,100, maxX,100);
    setcolor(YELLOW);
    line(0,99, 100,99);
	for(i=1; i<maxY; i++){
	if(getpixel(x, y+i)==0){
		putpixel(x,y+i, YELLOW);
		putpixel(x,y-1+i, BLACK);
		delay(10);
	}
		else if(getpixel(x, y+i)==14 && getpixel(x-1, y+i) == 0){
      		putpixel(x+1, y+i, YELLOW);
      		putpixel(x, y+i-1, BLACK);
			delay(10);
		}
		else if(getpixel(x,y+i)==14 && getpixel(x-1,y+i))
		else if(getpixel(x+1, y+i)==14 && getpixel(x, y+i)==14 && getpixel(x-1, y+i)==0 ){
			
			putpixel(x-1, y+i, YELLOW);  
			putpixel(x, y+i-1, BLACK);
			delay(10);
		}
	/*	else if(getpixel(x)){
			putpixel()
		}
		else if{}*/
		else {
			i--;
		break;
		}
	delay(10);
}
}
}
 
  getch();
  closegraph();
  return 0;
}


