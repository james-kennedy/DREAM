/** @file sandtrayMessages.h
*
* Version 1.0
*
* Generated by YarpGenerator, Emmanuel Senft, PLYM
*
*
* \defgroup DREAM_cognitiveComponent sharedResources
*
* Header class to share sandtray messages between components
*
* \section lib_sec Libraries
*
* None
*
* \section in_files_sec Input Data Files
*
* None
*
* \section out_data_sec Output Data Files
*
* None
*
* \author
*
* <James Kennedy>, <Plymouth University>
*
* Copyright (C) 2014 DREAM Consortium
*
*/

/*
* Copyright (C) 2014 DREAM Consortium
* FP7 Project 611391 co-funded by the European Commission
*
* Author:  James Kennedy, Plymouth University
* Email:   james.kennedy@plymouth.ac.uk
* Website: www.dream2020.eu
*
* This program comes with ABSOLUTELY NO WARRANTY
*/

/*
* Audit Trail
* -----------
* 27/06/2016 Version 1.0: ... (James Kennedy)
*/

#ifndef SANDTRAYMESSAGES
#define SANDTRAYMESSAGES

#include <string>

/* ------------------------------- */
/*        SANDTRAY COMMANDS        */
/* ------------------------------- */
const std::string _SANDTRAY_VERIFY_ = "10";						// 1. setup and shutdown
const std::string _SANDTRAY_SHUTDOWN_ = "11";
const std::string _SANDTRAY_FAILURE_ = "12";
const std::string _SANDTRAY_MAKE_GOOD_MOVE_ = "20";				// 2. game state
const std::string _SANDTRAY_MAKE_BAD_MOVE_ = "21";
const std::string _SANDTRAY_NEW_GAME_ = "22";
const std::string _SANDTRAY_RESET_BOARD_ = "23";
const std::string _SANDTRAY_READY_ = "25";
const std::string _SANDTRAY_MOVE_FINISHED_ = "26";
const std::string _SANDTRAY_MAKE_SPACE_MOVE_ = "29";
const std::string _SANDTRAY_GET_USER_DATA_ = "30";				// 3. data requests
//const std::string _SANDTRAY_GET_SCREEN_DATA_ = "31";			// don't use (JK 09/08/16)
const std::string _SANDTRAY_GET_IMAGE_COORDINATES_ = "32";
const std::string _SANDTRAY_GET_IMAGES_LEFT_ = "35";
const std::string _SANDTRAY_GET_ID_IMAGES_CAN_MOVE_ = "36";
const std::string _SANDTRAY_GET_LAST_IMAGE_PROPS_ = "37";
const std::string _SANDTRAY_PREPARE_MOVE_ = "38";
const std::string _SANDTRAY_SET_SPEED_ = "40";					// 4. set data
const std::string _SANDTRAY_SPECIFY_LEVEL_ = "41";
const std::string _SANDTRAY_SET_BUTTONS_ = "42";
const std::string _SANDTRAY_PLAYER_GOOD_MOVE_ = "50";			// 5. asynchronous events
const std::string _SANDTRAY_PLAYER_BAD_MOVE_ = "51";
const std::string _SANDTRAY_ROBOT_BAD_MOVE_ = "52";
const std::string _SANDTRAY_ROBOT_GOOD_MOVE_ = "53";
const std::string _SANDTRAY_MOVE_TO_SPACE_ = "60";				// 6. new game engine only
const std::string _SANDTRAY_GET_LIBRARY_PROPS_ = "61";
const std::string _SANDTRAY_GET_CATEGORY_PROPS_ = "62";
const std::string _SANDTRAY_LOCK_IMAGES_ = "63";
const std::string _SANDTRAY_UNLOCK_IMAGES_ = "64";
const std::string _SANDTRAY_SET_ONE_AT_TIME_ = "65";
const std::string _SANDTRAY_ROBOT_TURN_SELECTION_ = "66";
const std::string _SANDTRAY_GET_SHOWN_IM_PROPS_ = "67";
const std::string _SANDTRAY_SET_FEEDBACK_ON_ = "68";			// these two control sound AND visual feedback
const std::string _SANDTRAY_SET_FEEDBACK_OFF_ = "69";


/* --------------------------------	*/
/*        RETURN MESSAGES			*/
/* --------------------------------	*/
const std::string _SANDTRAY_GREET_CATEGORY_ = "i am a touchscreen 2";
const std::string _SANDTRAY_GREET_PATTERN_ = "i am a touchscreen 1";
const std::string _SANDTRAY_CONFIRM_ = "confirm";
const std::string _SANDTRAY_FAIL_ = "fail";
const std::string _SANDTRAY_USER_DATA_ = "user";
const std::string _SANDTRAY_SCREEN_DATA_ = "screen";
const std::string _SANDTRAY_BEZIER_DATA_ = "bezier";
const std::string _SANDTRAY_IMAGE_ID_ = "imgid";
const std::string _SANDTRAY_IMAGES_LEFT_ = "imgsleft";
const std::string _SANDTRAY_IMAGES_IDS_  = "imgsids";
const std::string _SANDTRAY_IMAGE_PROPS_ = "imgprops";
const std::string _SANDTRAY_MOVE_DATA_ = "movedata";
const std::string _SANDTRAY_COORDS_ = "coordinates";
const std::string _SANDTRAY_MOVE_FAIL_ = "movefail";
const std::string _SANDTRAY_NEW_RESET_ = "new or reset underway";
const std::string _SANDTRAY_LIBRARY_DATA_ = "libdata";
const std::string _SANDTRAY_CATEGORY_PROPS_ = "catprops";
const std::string _SANDTRAY_ONE_SHOWN_PROPS_ = "oneshown";
const std::string _SANDTRAY_PLAYER_TOUCH_IMAGE_ = "playertouch";
const std::string _SANDTRAY_PLAYER_RELEASE_IMAGE_ = "playerrelease";
const std::string _SANDTRAY_ROBOT_TURN_LOCATION_ = "turnlocation";

/* --------------------------------	*/
/*        OTHER CONSTANT			*/
/* --------------------------------	*/
const int _SANDTRAY_NOT_CONNECTED_ = 0;	
const int _SANDTRAY_CATEGORY_ = 1;	
const int _SANDTRAY_PATTERN_ = 2;	
#endif