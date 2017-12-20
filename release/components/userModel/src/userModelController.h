 /** @file userModelController.h 
  *
  * Version 1.0
  * 
  * Generated by YarpGenerator, Emmanuel Senft, PLYM
  *
  *
  * \defgroup DREAM_cognitiveComponent userModel
  * 
  * Main class with code, use the yarpInterface class to communicate with the other components.
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
 * This file is part of DREAM.
 * 
 * DREAM is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * DREAM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with DREAM.  If not, see <http://www.gnu.org/licenses/>.
 */
 
 /* 
  * Audit Trail
  * -----------
  * 13/06/2016 Version 1.0: ... (James Kennedy)
  */ 
 
#ifndef USERMODELCONTROLLER
#define USERMODELCONTROLLER

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "userListLibrary.h"
#include "userDataLibrary.h"

#define BOOST_FILESYSTEM_VERSION 3
#define BOOST_FILESYSTEM_NO_DEPRECATED 
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/foreach.hpp>
#include <boost/filesystem.hpp>

#define USER_DATA_FOLDER "/userdata/"
#define USER_LIST_FILENAME "userlist.dream"

class UserModelYarpInterface;

class UserModelController{
private:
	UserModelYarpInterface* _yarpInterface;
	std::string _sUserDataFolder;
	std::string _sUserDataListFile;

	UserListLibrary _userList;
	UserDataLibrary _userData;
	int _iCurrentUser;

public:
	/* class methods */
	UserModelController(UserModelYarpInterface *yarpInterface, std::string sUserDataFolder);

	void newUserID(int iUserID);
	void loadAndSendUserHistoryByID(int iUserID);
	bool saveNewInteractionToFile(user_interaction_data_t newInteraction);
};

#endif