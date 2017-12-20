 /** @file systemGUIDriverYarpInterface.h 
  *
  * Version 1.0
  * 
  * Generated by YarpGenerator, Emmanuel Senft, PLYM
  *
  *
  * \defgroup DREAM_cognitiveComponent systemGUIDriver
  * 
  * Class used to provided a simpler interface between the main code and the YARP layer.
  * Provide an output function sending data for each port, and an input function called 
  * when a message is received on a port.
  * 
  * \section lib_sec Libraries
  *
  * - YARP.
  *
  * \section portsc_sec Ports Created
  *
  * <b>Port types </b>
  *
  *	BufferedPort<Bottle>		selectedBySupervisorIn;
  *	BufferedPort<Bottle>		therapistCommandIn;
  *	BufferedPort<VectorOf<int>>		userIDIn;
  *	BufferedPort<VectorOf<double>>		getChildBehaviourOut;
  *	BufferedPort<VectorOf<double>>		getChildPerformanceOut;
  *	BufferedPort<Bottle>		proposedToSupervisorOut;
  *	BufferedPort<Bottle>		smsSummaryOut;
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
  * <Hoang-Long Cao>, <Vrije Universiteit Brussel>  
  * 
  * Copyright (C) 2014 DREAM Consortium
  * 
  */

/* 
 * Copyright (C) 2014 DREAM Consortium
 * FP7 Project 611391 co-funded by the European Commission
 *
 * Author:  Hoang-Long Cao, Vrije Universiteit Brussel 
 * Email:   hoang.long.cao@vub.ac.be 
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
  * 14/11/2016 Version 1.0: ... (Hoang-Long Cao)
  */ 
 
#ifndef SYSTEMGUIDRIVERYARPINTERFACE
#define SYSTEMGUIDRIVERYARPINTERFACE

#include <iostream>
#include <string>
#include <vector>

#include <yarp/sig/all.h>
#include <yarp/os/all.h>
#include <yarp/os/RFModule.h>
#include <yarp/os/Network.h>
#include <yarp/os/Thread.h>

using namespace yarp::os; 
using namespace yarp::sig;
using namespace std;

class SystemGUIDriverThread;
class SystemGUIDriverController;

class SystemGUIDriverYarpInterface{
private:
	SystemGUIDriverThread* _yarpThread;
   SystemGUIDriverController* _controller;
public:
	/* class methods */
	SystemGUIDriverYarpInterface();
    void init(SystemGUIDriverThread* yarpThread, SystemGUIDriverController* controller);
	void getFromSelectedBySupervisor(Bottle data);
	void getFromTherapistCommand(Bottle data);
	void getFromUserID(VectorOf<int> data);
	void sendToGetChildBehaviour(VectorOf<double> data);
	void sendToGetChildPerformance(VectorOf<double> data);
	void sendToProposedToSupervisor(int stepId, int actionId, std::string arg1);
	void sendToSmsSummary(string arg);
};

#endif
