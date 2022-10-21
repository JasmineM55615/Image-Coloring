#include "gridColorPicker.h"

gridColorPicker::gridColorPicker(HSLAPixel gridColor, int gridSpacing)
{
color = gridColor;
spacing = gridSpacing;

white.h = 0;
white.s = 0;
white.l = 1;
}

HSLAPixel gridColorPicker::operator()(int x, int y)
{
    if (x % spacing == 0 || y % spacing == 0){
        return color;
    } else {
        return white;
    }
}
