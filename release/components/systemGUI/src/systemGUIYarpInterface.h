 /** @file systemGUIYarpInterface.h 
  *
  * Version 1.0
  * 
  * Generated by YarpGenerator, Emmanuel Senft, PLYM
  *
  *
  * \defgroup DREAM_cognitiveComponent systemGUI
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
  *	BufferedPort<VectorOf<double>>		getChildBehaviourIn;
  *	BufferedPort<VectorOf<double>>		getChildPerformanceIn;
  *	BufferedPort<Bottle>		proposedToSupervisorIn;
  *	BufferedPort<Bottle>		smsSummaryIn;
  *	BufferedPort<Bottle>		selectedBySupervisorOut;
  *	BufferedPort<Bottle>		therapistCommandOut;
  *	BufferedPort<VectorOf<int>>		userIDOut;
  *	BufferedPort<Bottle>		interventionCommandOut;
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
  * <Hoang-Long Cao>, <VUB>  
  * 
  * Copyright (C) 2014 DREAM Consortium
  * 
  */

/* 
 * Copyright (C) 2014 DREAM Consortium
 * FP7 Project 611391 co-funded by the European Commission
 *
 * Author:  Hoang-Long Cao, VUB 
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
  * 25/01/2017 Version 1.0: ... (Hoang-Long Cao)
  * 22/06/2016 Version 2.0: ... (Hoang-Long Cao)
  */ 
 
#ifndef SYSTEMGUIYARPINTERFACE
#define SYSTEMGUIYARPINTERFACE

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

class SystemGUIThread;
class SystemGUIController;

class SystemGUIYarpInterface{
private:
	SystemGUIThread* _yarpThread;
	SystemGUIController* _controller;
	int str2int(int &i, char const *s, int base);
	int strToIntForMessage(string sInput);
public:
	/* class methods */
	SystemGUIYarpInterface();
    void init(SystemGUIThread* yarpThread, SystemGUIController* controller);
	void getFromGetChildBehaviour(VectorOf<double> data);
	void getFromGetChildPerformance(VectorOf<double> data);
	void getFromProposedToSupervisor(Bottle data);
	void getFromSmsSummary(Bottle data);
	void sendToSelectedBySupervisor(vector<string> value);
	void sendToSelectedBySupervisor(int origin, int scriptType, string partner, string type);
	void sendToTherapistCommand(string command);
	void sendToTherapistCommand(string command, double value);
	void sendToTherapistCommand(string command, string sessionName, string sessionPartner);
	void sendToTherapistCommand(string action_stepmod, int mod);
	void sendToUserID(int iNewID);
	void sendToInterventionCommand(vector<string> data);
};

#endif
