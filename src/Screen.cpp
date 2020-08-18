//
// Created by waxta on 8/18/20.
//

#include "Screen.h"

Screen::Screen()
{

}

void Screen::Initialize()
{
    initscr();
}

void Screen::Render()
{
    refresh();
}
