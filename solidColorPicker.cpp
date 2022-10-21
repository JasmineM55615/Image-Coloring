#include "solidColorPicker.h"

/**
 * Constructs a new solidColorPicker.
 *
 * @param fillColor The color for this color picker.
 */
solidColorPicker::solidColorPicker(HSLAPixel fillColor)
{
    ret.h = fillColor.h;
    ret.s = fillColor.s;
    ret.l = fillColor.l;
}

/**
 * Picks the color for pixel (x, y).
 *
 * Simply returns the same color (used to construct the picker) all of the
 * time.
 */
HSLAPixel solidColorPicker::operator()(int x, int y)
{
    return ret;
}
