 /** @file deliberativeSubsystemYarpInterface.h 
  *
  * Version 1.0
  * 
  * Generated by YarpGenerator, Emmanuel Senft, PLYM
  *
  *
  * \defgroup DREAM_cognitiveComponent deliberativeSubsystem
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
  *	BufferedPort<VectorOf<int>>		checkMutualGazeIn;
  *	BufferedPort<VectorOf<double>>		getArmAngleIn;
  *	BufferedPort<VectorOf<double>>		getBodyIn;
  *	BufferedPort<VectorOf<double>>		getBodyPoseIn;
  *	BufferedPort<VectorOf<double>>		getEyeGazeIn;
  *	BufferedPort<VectorOf<double>>		getEyesIn;
  *	BufferedPort<VectorOf<double>>		getFacesIn;
  *	BufferedPort<VectorOf<double>>		getGripLocationIn;
  *	BufferedPort<VectorOf<double>>		getHandsIn;
  *	BufferedPort<VectorOf<double>>		getHeadIn;
  *	BufferedPort<VectorOf<double>>		getHeadGazeIn;
  *	BufferedPort<VectorOf<double>>		getObjectsIn;
  *	BufferedPort<VectorOf<double>>		getObjectTableDistanceIn;
  *	BufferedPort<VectorOf<double>>		getSoundDirectionIn;
  *	BufferedPort<VectorOf<double>>		identifyFaceIn;
  *	BufferedPort<VectorOf<int>>			identifyFaceExpressionIn;
  *	BufferedPort<VectorOf<double>>		identifyObjectIn;
  *	BufferedPort<VectorOf<double>>		identifyTrajectoryIn;
  *	BufferedPort<VectorOf<int>>		identifyVoiceIn;
  *	BufferedPort<Bottle>		recognizeSpeechIn;
  *	BufferedPort<VectorOf<double>>		trackFaceIn;
  *	BufferedPort<VectorOf<double>>		trackObjectIn;
  *	BufferedPort<Bottle>		actionFeedbackIn;
  *	BufferedPort<Bottle>		interventionCommandIn;
  *	BufferedPort<Bottle>		selectedActionIn;
  *	BufferedPort<Bottle>		userDelibIn;
  *	BufferedPort<Bottle>		sandtrayEventIn;
  *	BufferedPort<Bottle>		sandtrayReturnIn;
  *	BufferedPort<Bottle>		robotSensorsIn;
  *	BufferedPort<Bottle>		emergencyIn;
  *	BufferedPort<VectorOf<double>>		getEyeGazeOut;
  *	BufferedPort<VectorOf<double>>		getGripLocationOut;
  *	BufferedPort<VectorOf<double>>		getHeadGazeOut;
  *	BufferedPort<VectorOf<double>>		getObjectsOut;
  *	BufferedPort<VectorOf<double>>		getObjectTableDistanceOut;
  *	BufferedPort<VectorOf<double>>		getSoundDirectionOut;
  *	BufferedPort<VectorOf<double>>		identifyFaceOut;
  *	BufferedPort<VectorOf<double>>		identifyFaceExpressionOut;
  *	BufferedPort<VectorOf<double>>		identifyObjectOut;
  *	BufferedPort<VectorOf<int>>			identifyTrajectoryOut;
  *	BufferedPort<VectorOf<double>>		trackFaceOut;
  *	BufferedPort<VectorOf<double>>		trackHandOut;
  *	BufferedPort<VectorOf<double>>		trackObjectOut;
  *	BufferedPort<VectorOf<int>>		interactionEventOut;
  *	BufferedPort<VectorOf<int>>		getInterventionStatusOut;
  *	BufferedPort<Bottle>		attentionBiasOut;
  *	BufferedPort<VectorOf<int>>		commandSuccessOut;
  *	BufferedPort<VectorOf<int>>		startStopOut;
  *	BufferedPort<Bottle>		deliberativeFeedbackOut;
  *	BufferedPort<Bottle>		sensorySummaryOut;
  *	BufferedPort<Bottle>		sandtrayCommandOut;
  *	BufferedPort<Bottle>		suggestedActionOut;
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
  * 10/08/2016 Version 1.0: ... (James Kennedy)
  */ 
 
#ifndef DELIBERATIVESUBSYSTEMYARPINTERFACE
#define DELIBERATIVESUBSYSTEMYARPINTERFACE

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include <yarp/sig/all.h>
#include <yarp/os/all.h>
#include <yarp/os/RFModule.h>
#include <yarp/os/Network.h>
#include <yarp/os/Thread.h>

using namespace yarp::os; 
using namespace yarp::sig;

class DeliberativeSubsystemThread;
class DeliberativeSubsystemController;

class DeliberativeSubsystemYarpInterface{
private:
	DeliberativeSubsystemThread* _yarpThread;
    DeliberativeSubsystemController* _controller;
public:
	/* class methods */
	DeliberativeSubsystemYarpInterface();
	void init(DeliberativeSubsystemThread* yarpThread, DeliberativeSubsystemController* controller);
	void getFromGetChildBehaviour(VectorOf<double> data);
	void getFromGetChildPerformance(VectorOf<double> data);
	void getFromCheckMutualGaze(VectorOf<int> data);
	void getFromGetArmAngle(VectorOf<double> data);
	void getFromGetBody(VectorOf<double> data);
	void getFromGetBodyPose(VectorOf<double> data);
	void getFromGetEyeGaze(VectorOf<double> data);
	void getFromGetEyes(VectorOf<double> data);
	void getFromGetFaces(VectorOf<double> data);
	void getFromGetGripLocation(VectorOf<double> data);
	void getFromGetHands(VectorOf<double> data);
	void getFromGetHead(VectorOf<double> data);
	void getFromGetHeadGaze(VectorOf<double> data);
	void getFromGetObjects(VectorOf<double> data);
	void getFromGetObjectTableDistance(VectorOf<double> data);
	void getFromGetSoundDirection(VectorOf<double> data);
	void getFromIdentifyFace(VectorOf<double> data);
	void getFromIdentifyFaceExpression(VectorOf<int> data);
	void getFromIdentifyObject(VectorOf<double> data);
	void getFromIdentifyTrajectory(VectorOf<double> data);
	void getFromIdentifyVoice(VectorOf<int> data);
	void getFromRecognizeSpeech(Bottle data);
	void getFromTrackFace(VectorOf<double> data);
	void getFromTrackObject(VectorOf<double> data);
	void getFromActionFeedback(Bottle data);
	void getFromInterventionCommand(Bottle data);
	void getFromSelectedAction(Bottle data);
	void getFromUserDelib(Bottle data);
	void getFromSandtrayEvent(Bottle data);
	void getFromSandtrayReturn(Bottle data);
	void getFromRobotSensors(Bottle data);
	void getFromEmergency(Bottle data);
	void sendToGetEyeGaze(VectorOf<double> data);
	void sendToGetGripLocation(VectorOf<double> data);
	void sendToGetHeadGaze(VectorOf<double> data);
	void sendToGetObjects(VectorOf<double> data);
	void sendToGetObjectTableDistance(VectorOf<double> data);
	void sendToGetSoundDirection(VectorOf<double> data);
	void sendToIdentifyFace(VectorOf<double> data);
	void sendToIdentifyFaceExpression(VectorOf<double> data);
	void sendToIdentifyObject(VectorOf<double> data);
	void sendToIdentifyTrajectory(VectorOf<int> data);
	void sendToTrackFace(VectorOf<double> data);
	void sendToTrackHand(VectorOf<double> data);
	void sendToTrackObject(VectorOf<double> data);
	void sendToInteractionEvent(int id, int arg);
	void sendToGetInterventionStatus(int scriptId, int scriptType, int stepId, int expBehav, int param, int time, bool onScript);
	void sendToAttentionBias(Bottle data);
	void sendToCommandSuccess(bool success);
	void sendToStartStop(VectorOf<int> data);
	void sendToDeliberativeFeedback(std::string type, int value);
	void sendToSensorySummary(Bottle data);
	void sendToSandtrayCommand(std::string command, std::string parameter);
	void sendToSuggestedAction(int stepId, int actionId, std::string arg1);
	void sendToSuggestedAction(int stepId, int actionId, int arg1);
};

#endif
