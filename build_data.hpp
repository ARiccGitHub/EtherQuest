
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /*--------------------------------****************************************-----------------------------------
  |                                *                                      *                                  |
  |  Ether's Quest                 *   Build data Functions Declarations  *                                  |
  |                                *                                      *                                  |
  ---------------------------------****************************************----------------------------------*/
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*

  Contains Build data functions declarationa

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef BUILD_DATA_HPP
#define BUILD_DATA_HPP

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

//****** Headers lib. files, must be declared first
//****** Contains Global Variables enumerators INST_TYPE, INST_RESULTS, PLAYER_STATE, and ORIGINAL_WINDOW_SIZE
//****** and the structs Ether and Button
#include "hether.hpp"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------- 2D Textures ----------------------------------------------------
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*--------------------------------------------------------------------------------------------

   Loads backgrounds images into a vector.
   Returns a vector of images.

 --------------------------------------------------------------------------------------------*/
vector<Texture2D> load_images();

/*--------------------------------------------------------------------------------------------

  Loads button texture state in the button struct.
  Utilized by Load_buttons() and Load_bars().

 --------------------------------------------------------------------------------------------*/
Texture2D load_btn_state(Image &image, Color &color);

/*--------------------------------------------------------------------------------------------

  Stores button images into a struct button textures.
  Returns a vector of button textures structs.

 --------------------------------------------------------------------------------------------*/
vector<Button> load_buttons();

/*--------------------------------------------------------------------------------------------

  Stores menu bar images into a button textures struct.
  Returns a vector of button textures struct.

 --------------------------------------------------------------------------------------------*/
vector <Button> load_bars();

/*--------------------------------------------------------------------------------------------

  Loads the display state bar image.
  Returns a texture display bar.

 --------------------------------------------------------------------------------------------*/
Texture2D load_disp_bar();

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------- Sounds ------------------------------------------------------
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*--------------------------------------------------------------------------------------------

  Loads the narrators' voices.
  Returns a Sound vector of voices.

 --------------------------------------------------------------------------------------------*/
vector<Sound> load_voices();


/*--------------------------------------------------------------------------------------------

  Loads the ambience background sounds.
  Returns a Sound vector of ambiences.

 --------------------------------------------------------------------------------------------*/
vector<Sound> load_ambiences();

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//--------------------------------------------Render screen -----------------------------------------------------
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*--------------------------------------------------------------------------------------------

    Render the load screen

 --------------------------------------------------------------------------------------------*/
void render_load_screen();

#endif