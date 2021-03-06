/*******************************************/
/*** DO NOT CHANGE ANYTHING IN THIS FILE ***/
/*******************************************/

#pragma once

#include <iostream>

// A player or lack thereof.
enum class Player
{
    dark,
    light,
    neither,
    L,
    I,
    sq,
    s,
    z,
    rL,
    T,
};

// Prints a player in a manner suitable for debugging.
std::ostream& operator<<(std::ostream&, Player);
