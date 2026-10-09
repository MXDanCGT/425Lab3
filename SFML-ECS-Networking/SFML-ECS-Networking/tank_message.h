#pragma once


/*
* MESSAGE TYPES -
* - 0 - MessageFrame
* - 1 - Colour
*/



struct TankMessage
{
	/*HEADER MESSAGE TYPE - SO WE KNOW WHAT WE ARE READING*/
	int8_t MessageType;
};

// A simple tank update message
// FIXME: Consider what else we need to send and include it here.
struct TankMessageMove : public TankMessage 
{
	// The coordinates of the tank within the game world.
	float x, y;

	float rotation;
};

//Frame sent ONLY on tank colour change / loadout change
struct TankMessageColour : public TankMessage
{
	std::string ColourString;
};