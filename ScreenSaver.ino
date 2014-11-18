/*
  Screensaver.pde
  
  White 4x4 box tumbles (straight>diagonally>straight) around the perimeter of the screen as the background changes color in rainbow order.
*/

#include <MeggyJrSimple.h>

void setup()
  {
    MeggyJrSimpleSetup();
  }

void loop()
{
  secondDimRed(); //second is the amount of time, DimRed was maent to show the customized color//
  drawA();
    DisplaySlate();
    delay(1000);
    ClearSlate();
  secondDimOrange();
  drawB();
    EditColor(DimOrange, 8, 1, 0); 
    DisplaySlate();
    delay(1000);
    ClearSlate();
  secondDimYellow();
  drawC(); 
    EditColor(DimYellow, 6, 2, 0); 
    DisplaySlate();
    delay(1000);
    ClearSlate();
  secondDimGreen();
  drawD();
    EditColor(DimGreen, 1, 1, 0);   
    DisplaySlate();
    delay(1000);
    ClearSlate();
  secondDimBlue(); 
  drawE();
    EditColor(DimBlue, 0, 1, 2); 
    DisplaySlate();
    delay(1000);
    ClearSlate();
  secondDimViolet();
 drawF(); 
   EditColor(DimViolet, 3, 0, 2);  
    DisplaySlate();
    delay(1000);
    ClearSlate();
  secondDimRed();
  drawG();
    DisplaySlate();
    delay(1000);
    ClearSlate();
  secondDimOrange();
  drawH();
    DisplaySlate();
    delay(1000);
    ClearSlate();
  secondDimYellow();
  drawI(); 
    EditColor(DimYellow, 6, 2, 0); 
    DisplaySlate();
    delay(1000);
    ClearSlate();
  secondDimGreen();
  drawJ();
    EditColor(DimGreen, 1, 1, 0);   
    DisplaySlate();
    delay(1000);
    ClearSlate();
  secondDimBlue(); 
  drawK();
    EditColor(DimBlue, 0, 1, 2); 
    DisplaySlate();
    delay(1000);
    ClearSlate();
   secondDimViolet();
   drawL(); 
    EditColor(DimViolet, 3, 0, 2);  
    DisplaySlate();
    delay(1000);
    ClearSlate();
}

void secondDimRed()
  {
    for (int i = 0; i < 8; i++) //originally, I wrote out 8 of these color lines. But after class, I switched to the double variable background//
    for (int a = 0; a < 8; a++)
      DrawPx(i, a, DimRed);
  }
void secondDimOrange()
  {
    for (int i = 0; i < 8; i++)
    for (int a = 0; a < 8; a++)
      DrawPx(i, a, DimOrange);
  }
void secondDimYellow()
  {
    for (int i = 0; i < 8; i++)
    for (int a = 0; a < 8; a++)
      DrawPx(i, a, DimYellow);
  }
void secondDimGreen()
  {
    for (int i = 0; i < 8; i++)
    for (int a = 0; a < 8; a++)
      DrawPx(i, a, DimGreen);
  }
void secondDimBlue()
  {
    for (int i = 0; i < 8; i++)
    for (int a = 0; a < 8; a++)
      DrawPx(i, a, DimBlue);
  }
void secondDimViolet()
  {
     for (int i = 0; i < 8; i++)
     for (int a = 0; a < 8; a++)
      DrawPx(i, a, DimViolet);
  }
void drawA() //The letters have nothing to do with what's being drawn, it's just a name I gave for the different movements//
{
  for (int x = 0; x < 4; x++)
    DrawPx(x, 0, White);
  for (int x = 0; x < 4; x++)
    DrawPx(x, 1, White);
  for (int x = 0; x < 4; x++)
    DrawPx(x, 2, White);
  for (int x = 0; x < 4; x++)
    DrawPx(x, 3, White);    
}

void drawB()
{
  for (int y = 0; y < 5; y++)
    DrawPx(3, y, White);
  for (int x = 1; x < 6; x++)
    DrawPx(x, 2, White);
  DrawPx(2, 1, White);
  DrawPx(2, 3, White);
  DrawPx(4, 3, White);
  DrawPx(4, 1, White);
}

void drawC()
{
  for (int x = 3; x < 7; x++)
    DrawPx(x, 0, White);
  for (int x = 3; x < 7; x++)
    DrawPx(x, 1, White);
  for (int x = 3; x < 7; x++)
    DrawPx(x, 2, White);
  for (int x = 3; x < 7; x++)
    DrawPx(x, 3, White);   
}

void drawD()
{
  for (int x = 4; x < 8; x++)
    DrawPx(x, 0, White);
  for (int x = 4; x < 8; x++)
    DrawPx(x, 1, White);
  for (int x = 4; x < 8; x++)
    DrawPx(x, 2, White);
  for (int x = 4; x < 8; x++)
    DrawPx(x, 3, White);   
}

void drawE()
{
  for (int y = 1; y < 6; y++)
    DrawPx(5, y, White);
  for (int x = 3; x < 8; x++)
  DrawPx(x, 3, White);
  DrawPx(6, 4, White);
  DrawPx(4, 4, White);
  DrawPx(4, 2, White);
  DrawPx(6, 2, White);
}

void drawF()
{
  for (int x = 4; x < 8; x++)
    DrawPx(x, 3, White);
  for (int x = 4; x < 8; x++)
    DrawPx(x, 4, White);
  for (int x = 4; x < 8; x++)
    DrawPx(x, 5, White);
  for (int x = 4; x < 8; x++)
    DrawPx(x, 6, White);   
}
void drawG()
{
  for (int x = 4; x < 8; x++)
    DrawPx(x, 7, White);
  for (int x = 4; x < 8; x++)
    DrawPx(x, 4, White);
  for (int x = 4; x < 8; x++)
    DrawPx(x, 5, White);
  for (int x = 4; x < 8; x++)
    DrawPx(x, 6, White);   
}
void drawH()
{
  for (int y = 3; y < 8; y++)
    DrawPx(4, y, White);
  for (int x = 2; x < 7; x++)
    DrawPx(x, 5, White);
  DrawPx(3, 6, White);
  DrawPx(5, 6, White);
  DrawPx(3, 4, White);
  DrawPx(5, 4, White);
}

void drawI()
{
  for (int x = 1; x < 5; x++)
    DrawPx(x, 7, White);
  for (int x = 1; x < 5; x++)
    DrawPx(x, 6, White);
  for (int x = 1; x < 5; x++)
    DrawPx(x, 5, White);
  for (int x = 1; x < 5; x++)
    DrawPx(x, 4, White);    
}
void drawJ()
{
  for (int x = 0; x < 4; x++)
    DrawPx(x, 7, White);
  for (int x = 0; x < 4; x++)
    DrawPx(x, 6, White);
  for (int x =0; x < 4; x++)
    DrawPx(x, 5, White);
  for (int x = 0; x < 4; x++)
    DrawPx(x, 4, White);    
}
void drawK()
{
  for (int y = 2; y < 7; y++)
    DrawPx(2, y, White);
  for (int x = 0; x < 5; x++)
    DrawPx(x, 4, White);
  DrawPx(1, 5, White);
  DrawPx(1, 3, White);
  DrawPx(3, 5, White);
  DrawPx(3, 3, White);
}

void drawL()
{
  for (int x = 0; x < 4; x++)
    DrawPx(x, 1, White);
  for (int x = 0; x < 4; x++)
    DrawPx(x, 2, White);
  for (int x = 0; x < 4; x++)
    DrawPx(x, 3, White);
  for (int x = 0; x < 4; x++)
    DrawPx(x, 4, White);    
}
