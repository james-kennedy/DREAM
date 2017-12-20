 /** @file wp3Stub.h 
  *
  * Version 1.0
  * 
  * 20/09/2016
  * 
  * Generated by YarpGenerator, Emmanuel Senft, PLYM
  *
  * \section component_description Component Description
  *
  * Functionally, the component  does ...xyz...
  * 
  * \section lib_sec Libraries
  *
  * - YARP.
  *
  * \section parameters_sec Parameters
  * 
  * <b>Command-line Parameters </b> 
  * 
  * The following key-value pairs can be specified as command-line parameters 
  * by prefixing \c -- to the key e.g. \c --from file.ini. 
  * The value part can be changed to suit your needs; the default values are 
  * shown below. 
  *
  * - \c from \c wp3Stub.ini 
  *    - specifies the configuration file
  *
  * - \c context \c component/wp3Stub/configuration
  *   - specifies the sub-path from \c $DREAM_ROOT/release
  *   to the configuration file
  *
  * - \c name \c wp3Stub   
  *   - specifies the name of the component (used to form the stem of component port names)  
  *
  *
  * <b>Configuration File Parameters </b>
  *
  * The following key-value pairs can be specified as parameters in the configuration file 
  * (they can also be specified as command-line parameters if you so wish). 
  * The value part can be changed to suit your needs; the default values are shown below. 
  * 
  * Key | Value
  * :-- | :----  
  * _getEyeGazeIn | /wp3Stub/getEyeGaze:i
  * _getGripLocationIn | /wp3Stub/getGripLocation:i
  * _getHeadGazeIn | /wp3Stub/getHeadGaze:i
  * _getObjectTableDistanceIn | /wp3Stub/getObjectTableDistance:i
  * _getObjectsIn | /wp3Stub/getObjects:i
  * _identifyFaceIn | /wp3Stub/identifyFace:i
  * _identifyFaceExpressionIn | /wp3Stub/identifyFaceExpression:i
  * _identifyObjectIn | /wp3Stub/identifyObject:i
  * _identifyTrajectoryIn | /wp3Stub/identifyTrajectory:i
  * _trackFaceIn | /wp3Stub/trackFace:i
  * _trackObjectIn | /wp3Stub/trackObject:i
  * _trackHandIn | /wp3Stub/trackHand:i
  * _getSoundDirectionIn | /wp3Stub/getSoundDirection:i
  *
  * - description
  *   
  * Key | Value
  * :-- | :---- 
  * _checkMutualGazeOut | /wp3Stub/checkMutualGaze:o    
  * _getFacesOut | /wp3Stub/getFaces:o    
  * _getSoundDirectionOut | /wp3Stub/getSoundDirection:o    
  * _identifyFaceExpressionOut | /wp3Stub/identifyFaceExpression:o    
  * _recognizeSpeechOut | /wp3Stub/recognizeSpeech:o    
  * _getEyeGazeOut | /wp3Stub/getEyeGaze:o    
  * _getEyesOut | /wp3Stub/getEyes:o    
  * _getArmAngleOut | /wp3Stub/getArmAngle:o    
  * _getBodyOut | /wp3Stub/getBody:o    
  * _getGripLocationOut | /wp3Stub/getGripLocation:o    
  * _getBodyPoseOut | /wp3Stub/getBodyPose:o    
  * _getHandsOut | /wp3Stub/getHands:o    
  * _getHeadOut | /wp3Stub/getHead:o    
  * _getHeadGazeOut | /wp3Stub/getHeadGaze:o    
  * _getObjectsOut | /wp3Stub/getObjects:o    
  * _getObjectTableDistanceOut | /wp3Stub/getObjectTableDistance:o    
  * _identifyFaceOut | /wp3Stub/identifyFace:o    
  * _identifyObjectOut | /wp3Stub/identifyObject:o    
  * _identifyTrajectoryOut | /wp3Stub/identifyTrajectory:o    
  * _identifyVoiceOut | /wp3Stub/identifyVoice:o    
  * _trackFaceOut | /wp3Stub/trackFace:o    
  * _trackObjectOut | /wp3Stub/trackObject:o    
  * _getHeadGazePointOut | /wp3Stub/getHeadGazePoint:o    
  *
  * - description
  *
  * \section portsa_sec Ports Accessed
  * 
  * - None
  *                      
  * \section portsc_sec Ports Created
  *
  * <b>Input ports</b>
  *
  *  - \c /wp3Stub
  *
  *  - \c /wp3Stub/getEyeGaze:i
  *  - \c /wp3Stub/getGripLocation:i
  *  - \c /wp3Stub/getHeadGaze:i
  *  - \c /wp3Stub/getObjectTableDistance:i
  *  - \c /wp3Stub/getObjects:i
  *  - \c /wp3Stub/identifyFace:i
  *  - \c /wp3Stub/identifyFaceExpression:i
  *  - \c /wp3Stub/identifyObject:i
  *  - \c /wp3Stub/identifyTrajectory:i
  *  - \c /wp3Stub/trackFace:i
  *  - \c /wp3Stub/trackObject:i
  *  - \c /wp3Stub/trackHand:i
  *  - \c /wp3Stub/getSoundDirection:i
  *
  * <b>Output ports</b>
  *
  *  - \c /wp3Stub
  *
  *  - \c /wp3Stub/checkMutualGaze:o
  *  - \c /wp3Stub/getFaces:o
  *  - \c /wp3Stub/getSoundDirection:o
  *  - \c /wp3Stub/identifyFaceExpression:o
  *  - \c /wp3Stub/recognizeSpeech:o
  *  - \c /wp3Stub/getEyeGaze:o
  *  - \c /wp3Stub/getEyes:o
  *  - \c /wp3Stub/getArmAngle:o
  *  - \c /wp3Stub/getBody:o
  *  - \c /wp3Stub/getGripLocation:o
  *  - \c /wp3Stub/getBodyPose:o
  *  - \c /wp3Stub/getHands:o
  *  - \c /wp3Stub/getHead:o
  *  - \c /wp3Stub/getHeadGaze:o
  *  - \c /wp3Stub/getObjects:o
  *  - \c /wp3Stub/getObjectTableDistance:o
  *  - \c /wp3Stub/identifyFace:o
  *  - \c /wp3Stub/identifyObject:o
  *  - \c /wp3Stub/identifyTrajectory:o
  *  - \c /wp3Stub/identifyVoice:o
  *  - \c /wp3Stub/trackFace:o
  *  - \c /wp3Stub/trackObject:o
  *  - \c /wp3Stub/getHeadGazePoint:o
  *
  * <b>Port types </b>
  *
  * The functional specification only names the ports to be used to communicate with the component 
  * but doesn't say anything about the data transmitted on the ports. This is defined by the following code. 
  *
  * \c BufferedPort<VectorOf<double>>		getEyeGazeIn; 
  * \c BufferedPort<VectorOf<double>>		getGripLocationIn; 
  * \c BufferedPort<VectorOf<double>>		getHeadGazeIn; 
  * \c BufferedPort<VectorOf<double>>		getObjectTableDistanceIn; 
  * \c BufferedPort<VectorOf<double>>		getObjectsIn; 
  * \c BufferedPort<VectorOf<double>>		identifyFaceIn; 
  * \c BufferedPort<VectorOf<double>>		identifyFaceExpressionIn; 
  * \c BufferedPort<VectorOf<double>>		identifyObjectIn; 
  * \c BufferedPort<VectorOf<int>>		identifyTrajectoryIn; 
  * \c BufferedPort<VectorOf<double>>		trackFaceIn; 
  * \c BufferedPort<VectorOf<double>>		trackObjectIn; 
  * \c BufferedPort<VectorOf<double>>		trackHandIn; 
  * \c BufferedPort<VectorOf<double>>		getSoundDirectionIn; 
  * \c BufferedPort<VectorOf<int>>		checkMutualGazeOut; 
  * \c BufferedPort<VectorOf<double>>		getFacesOut; 
  * \c BufferedPort<VectorOf<double>>		getSoundDirectionOut; 
  * \c BufferedPort<VectorOf<double>>		identifyFaceExpressionOut; 
  * \c BufferedPort<Bottle>		recognizeSpeechOut; 
  * \c BufferedPort<VectorOf<double>>		getEyeGazeOut; 
  * \c BufferedPort<VectorOf<double>>		getEyesOut; 
  * \c BufferedPort<VectorOf<double>>		getArmAngleOut; 
  * \c BufferedPort<VectorOf<double>>		getBodyOut; 
  * \c BufferedPort<VectorOf<double>>		getGripLocationOut; 
  * \c BufferedPort<VectorOf<double>>		getBodyPoseOut; 
  * \c BufferedPort<VectorOf<double>>		getHandsOut; 
  * \c BufferedPort<VectorOf<double>>		getHeadOut; 
  * \c BufferedPort<VectorOf<double>>		getHeadGazeOut; 
  * \c BufferedPort<VectorOf<double>>		getObjectsOut; 
  * \c BufferedPort<VectorOf<double>>		getObjectTableDistanceOut; 
  * \c BufferedPort<VectorOf<double>>		identifyFaceOut; 
  * \c BufferedPort<VectorOf<double>>		identifyObjectOut; 
  * \c BufferedPort<VectorOf<double>>		identifyTrajectoryOut; 
  * \c BufferedPort<VectorOf<int>>		identifyVoiceOut; 
  * \c BufferedPort<VectorOf<double>>		trackFaceOut; 
  * \c BufferedPort<VectorOf<double>>		trackObjectOut; 
  * \c BufferedPort<VectorOf<double>>		getHeadGazePointOut; 
  *
  * \section in_files_sec Input Data Files
  *
  * None
  *
  * \section out_data_sec Output Data Files
  *
  * None
  *
  * \section conf_file_sec Configuration Files
  *
  * \c wp3Stub.ini   
  *
  * \section example_sec Example Instantiation of the Component
  * 
  * <tt>wp3Stub --name wp3Stub --context wp3Stub/config --from wp3Stub.ini </tt>
  *
  * \author 
  * 
  * <Emmanuel Senft>, <PLYM>  
  * 
  * Copyright (C) 2014 DREAM Consortium
  * 
  */
  
/* 
 * Copyright (C) 2014 DREAM Consortium
 * FP7 Project 611391 co-funded by the European Commission
 *
 * Author:  Emmanuel Senft, PLYM 
 * Email:   emmanuel.senft@plymouth.ac.uk 
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
  * 20/09/2016 Version 1.0: ... (Emmanuel Senft)
  */ 
 
#ifndef WP3STUB
#define WP3STUB

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

class Wp3StubYarpInterface;
class Wp3StubController;

class GetEyeGazeInAnalyser : public BufferedPort<VectorOf<double>>{
   virtual void onRead(VectorOf<double>& getEyeGazeInData);
   Wp3StubYarpInterface *_wp3StubYarpInterface;
public:
   void setWp3Stub(Wp3StubYarpInterface* yarpInterface);
};

class GetGripLocationInAnalyser : public BufferedPort<VectorOf<double>>{
   virtual void onRead(VectorOf<double>& getGripLocationInData);
   Wp3StubYarpInterface *_wp3StubYarpInterface;
public:
   void setWp3Stub(Wp3StubYarpInterface* yarpInterface);
};

class GetHeadGazeInAnalyser : public BufferedPort<VectorOf<double>>{
   virtual void onRead(VectorOf<double>& getHeadGazeInData);
   Wp3StubYarpInterface *_wp3StubYarpInterface;
public:
   void setWp3Stub(Wp3StubYarpInterface* yarpInterface);
};

class GetObjectTableDistanceInAnalyser : public BufferedPort<VectorOf<double>>{
   virtual void onRead(VectorOf<double>& getObjectTableDistanceInData);
   Wp3StubYarpInterface *_wp3StubYarpInterface;
public:
   void setWp3Stub(Wp3StubYarpInterface* yarpInterface);
};

class GetObjectsInAnalyser : public BufferedPort<VectorOf<double>>{
   virtual void onRead(VectorOf<double>& getObjectsInData);
   Wp3StubYarpInterface *_wp3StubYarpInterface;
public:
   void setWp3Stub(Wp3StubYarpInterface* yarpInterface);
};

class IdentifyFaceInAnalyser : public BufferedPort<VectorOf<double>>{
   virtual void onRead(VectorOf<double>& identifyFaceInData);
   Wp3StubYarpInterface *_wp3StubYarpInterface;
public:
   void setWp3Stub(Wp3StubYarpInterface* yarpInterface);
};

class IdentifyFaceExpressionInAnalyser : public BufferedPort<VectorOf<double>>{
   virtual void onRead(VectorOf<double>& identifyFaceExpressionInData);
   Wp3StubYarpInterface *_wp3StubYarpInterface;
public:
   void setWp3Stub(Wp3StubYarpInterface* yarpInterface);
};

class IdentifyObjectInAnalyser : public BufferedPort<VectorOf<double>>{
   virtual void onRead(VectorOf<double>& identifyObjectInData);
   Wp3StubYarpInterface *_wp3StubYarpInterface;
public:
   void setWp3Stub(Wp3StubYarpInterface* yarpInterface);
};

class IdentifyTrajectoryInAnalyser : public BufferedPort<VectorOf<int>>{
   virtual void onRead(VectorOf<int>& identifyTrajectoryInData);
   Wp3StubYarpInterface *_wp3StubYarpInterface;
public:
   void setWp3Stub(Wp3StubYarpInterface* yarpInterface);
};

class TrackFaceInAnalyser : public BufferedPort<VectorOf<double>>{
   virtual void onRead(VectorOf<double>& trackFaceInData);
   Wp3StubYarpInterface *_wp3StubYarpInterface;
public:
   void setWp3Stub(Wp3StubYarpInterface* yarpInterface);
};

class TrackObjectInAnalyser : public BufferedPort<VectorOf<double>>{
   virtual void onRead(VectorOf<double>& trackObjectInData);
   Wp3StubYarpInterface *_wp3StubYarpInterface;
public:
   void setWp3Stub(Wp3StubYarpInterface* yarpInterface);
};

class TrackHandInAnalyser : public BufferedPort<VectorOf<double>>{
   virtual void onRead(VectorOf<double>& trackHandInData);
   Wp3StubYarpInterface *_wp3StubYarpInterface;
public:
   void setWp3Stub(Wp3StubYarpInterface* yarpInterface);
};

class GetSoundDirectionInAnalyser : public BufferedPort<VectorOf<double>>{
   virtual void onRead(VectorOf<double>& getSoundDirectionInData);
   Wp3StubYarpInterface *_wp3StubYarpInterface;
public:
   void setWp3Stub(Wp3StubYarpInterface* yarpInterface);
};



class Wp3StubThread : public yarp::os::Thread{
private:
	/* class variables */
	yarp::os::BufferedPort<VectorOf<double>>* _getEyeGazeIn;
	yarp::os::BufferedPort<VectorOf<double>>* _getGripLocationIn;
	yarp::os::BufferedPort<VectorOf<double>>* _getHeadGazeIn;
	yarp::os::BufferedPort<VectorOf<double>>* _getObjectTableDistanceIn;
	yarp::os::BufferedPort<VectorOf<double>>* _getObjectsIn;
	yarp::os::BufferedPort<VectorOf<double>>* _identifyFaceIn;
	yarp::os::BufferedPort<VectorOf<double>>* _identifyFaceExpressionIn;
	yarp::os::BufferedPort<VectorOf<double>>* _identifyObjectIn;
	yarp::os::BufferedPort<VectorOf<int>>* _identifyTrajectoryIn;
	yarp::os::BufferedPort<VectorOf<double>>* _trackFaceIn;
	yarp::os::BufferedPort<VectorOf<double>>* _trackObjectIn;
	yarp::os::BufferedPort<VectorOf<double>>* _trackHandIn;
	yarp::os::BufferedPort<VectorOf<double>>* _getSoundDirectionIn;
	yarp::os::BufferedPort<VectorOf<int>>* _checkMutualGazeOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getFacesOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getSoundDirectionOut;
	yarp::os::BufferedPort<VectorOf<double>>* _identifyFaceExpressionOut;
	yarp::os::BufferedPort<Bottle>* _recognizeSpeechOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getEyeGazeOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getEyesOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getArmAngleOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getBodyOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getGripLocationOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getBodyPoseOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getHandsOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getHeadOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getHeadGazeOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getObjectsOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getObjectTableDistanceOut;
	yarp::os::BufferedPort<VectorOf<double>>* _identifyFaceOut;
	yarp::os::BufferedPort<VectorOf<double>>* _identifyObjectOut;
	yarp::os::BufferedPort<VectorOf<double>>* _identifyTrajectoryOut;
	yarp::os::BufferedPort<VectorOf<int>>* _identifyVoiceOut;
	yarp::os::BufferedPort<VectorOf<double>>* _trackFaceOut;
	yarp::os::BufferedPort<VectorOf<double>>* _trackObjectOut;
	yarp::os::BufferedPort<VectorOf<double>>* _getHeadGazePointOut;
	Wp3StubYarpInterface* _yarpInterface;
	GetEyeGazeInAnalyser *_getEyeGazeInAnalyser;
	GetGripLocationInAnalyser *_getGripLocationInAnalyser;
	GetHeadGazeInAnalyser *_getHeadGazeInAnalyser;
	GetObjectTableDistanceInAnalyser *_getObjectTableDistanceInAnalyser;
	GetObjectsInAnalyser *_getObjectsInAnalyser;
	IdentifyFaceInAnalyser *_identifyFaceInAnalyser;
	IdentifyFaceExpressionInAnalyser *_identifyFaceExpressionInAnalyser;
	IdentifyObjectInAnalyser *_identifyObjectInAnalyser;
	IdentifyTrajectoryInAnalyser *_identifyTrajectoryInAnalyser;
	TrackFaceInAnalyser *_trackFaceInAnalyser;
	TrackObjectInAnalyser *_trackObjectInAnalyser;
	TrackHandInAnalyser *_trackHandInAnalyser;
	GetSoundDirectionInAnalyser *_getSoundDirectionInAnalyser;
	
public:
	/* class methods */
	Wp3StubThread(BufferedPort<VectorOf<double>>* getEyeGazeIn, BufferedPort<VectorOf<double>>* getGripLocationIn, BufferedPort<VectorOf<double>>* getHeadGazeIn, BufferedPort<VectorOf<double>>* getObjectTableDistanceIn, BufferedPort<VectorOf<double>>* getObjectsIn, BufferedPort<VectorOf<double>>* identifyFaceIn, BufferedPort<VectorOf<double>>* identifyFaceExpressionIn, BufferedPort<VectorOf<double>>* identifyObjectIn, BufferedPort<VectorOf<int>>* identifyTrajectoryIn, BufferedPort<VectorOf<double>>* trackFaceIn, BufferedPort<VectorOf<double>>* trackObjectIn, BufferedPort<VectorOf<double>>* trackHandIn, BufferedPort<VectorOf<double>>* getSoundDirectionIn, BufferedPort<VectorOf<int>>* checkMutualGazeOut, BufferedPort<VectorOf<double>>* getFacesOut, BufferedPort<VectorOf<double>>* getSoundDirectionOut, BufferedPort<VectorOf<double>>* identifyFaceExpressionOut, BufferedPort<Bottle>* recognizeSpeechOut, BufferedPort<VectorOf<double>>* getEyeGazeOut, BufferedPort<VectorOf<double>>* getEyesOut, BufferedPort<VectorOf<double>>* getArmAngleOut, BufferedPort<VectorOf<double>>* getBodyOut, BufferedPort<VectorOf<double>>* getGripLocationOut, BufferedPort<VectorOf<double>>* getBodyPoseOut, BufferedPort<VectorOf<double>>* getHandsOut, BufferedPort<VectorOf<double>>* getHeadOut, BufferedPort<VectorOf<double>>* getHeadGazeOut, BufferedPort<VectorOf<double>>* getObjectsOut, BufferedPort<VectorOf<double>>* getObjectTableDistanceOut, BufferedPort<VectorOf<double>>* identifyFaceOut, BufferedPort<VectorOf<double>>* identifyObjectOut, BufferedPort<VectorOf<double>>* identifyTrajectoryOut, BufferedPort<VectorOf<int>>* identifyVoiceOut, BufferedPort<VectorOf<double>>* trackFaceOut, BufferedPort<VectorOf<double>>* trackObjectOut, BufferedPort<VectorOf<double>>* getHeadGazePointOut);
   void setYarpInterface(Wp3StubYarpInterface* yarpInterface);
	bool threadInit();
	void threadRelease();
	void sendToCheckMutualGaze(VectorOf<int> data);
	void sendToGetFaces(VectorOf<double> data);
	void sendToGetSoundDirection(VectorOf<double> data);
	void sendToIdentifyFaceExpression(VectorOf<double> data);
	void sendToRecognizeSpeech(Bottle data);
	void sendToGetEyeGaze(VectorOf<double> data);
	void sendToGetEyes(VectorOf<double> data);
	void sendToGetArmAngle(VectorOf<double> data);
	void sendToGetBody(VectorOf<double> data);
	void sendToGetGripLocation(VectorOf<double> data);
	void sendToGetBodyPose(VectorOf<double> data);
	void sendToGetHands(VectorOf<double> data);
	void sendToGetHead(VectorOf<double> data);
	void sendToGetHeadGaze(VectorOf<double> data);
	void sendToGetObjects(VectorOf<double> data);
	void sendToGetObjectTableDistance(VectorOf<double> data);
	void sendToIdentifyFace(VectorOf<double> data);
	void sendToIdentifyObject(VectorOf<double> data);
	void sendToIdentifyTrajectory(VectorOf<double> data);
	void sendToIdentifyVoice(VectorOf<int> data);
	void sendToTrackFace(VectorOf<double> data);
	void sendToTrackObject(VectorOf<double> data);
	void sendToGetHeadGazePoint(VectorOf<double> data);
	void run();
};

class Wp3Stub : public yarp::os::RFModule{
private:
	/* module parameters */
	std::string _moduleName;
	std::string _getEyeGazeInName;
	std::string _getGripLocationInName;
	std::string _getHeadGazeInName;
	std::string _getObjectTableDistanceInName;
	std::string _getObjectsInName;
	std::string _identifyFaceInName;
	std::string _identifyFaceExpressionInName;
	std::string _identifyObjectInName;
	std::string _identifyTrajectoryInName;
	std::string _trackFaceInName;
	std::string _trackObjectInName;
	std::string _trackHandInName;
	std::string _getSoundDirectionInName;
	std::string _checkMutualGazeOutName;
	std::string _getFacesOutName;
	std::string _getSoundDirectionOutName;
	std::string _identifyFaceExpressionOutName;
	std::string _recognizeSpeechOutName;
	std::string _getEyeGazeOutName;
	std::string _getEyesOutName;
	std::string _getArmAngleOutName;
	std::string _getBodyOutName;
	std::string _getGripLocationOutName;
	std::string _getBodyPoseOutName;
	std::string _getHandsOutName;
	std::string _getHeadOutName;
	std::string _getHeadGazeOutName;
	std::string _getObjectsOutName;
	std::string _getObjectTableDistanceOutName;
	std::string _identifyFaceOutName;
	std::string _identifyObjectOutName;
	std::string _identifyTrajectoryOutName;
	std::string _identifyVoiceOutName;
	std::string _trackFaceOutName;
	std::string _trackObjectOutName;
	std::string _getHeadGazePointOutName;
	std::string _handlerPortName;

	/* class variables */
	yarp::os::BufferedPort<VectorOf<double>> _getEyeGazeIn;
	yarp::os::BufferedPort<VectorOf<double>> _getGripLocationIn;
	yarp::os::BufferedPort<VectorOf<double>> _getHeadGazeIn;
	yarp::os::BufferedPort<VectorOf<double>> _getObjectTableDistanceIn;
	yarp::os::BufferedPort<VectorOf<double>> _getObjectsIn;
	yarp::os::BufferedPort<VectorOf<double>> _identifyFaceIn;
	yarp::os::BufferedPort<VectorOf<double>> _identifyFaceExpressionIn;
	yarp::os::BufferedPort<VectorOf<double>> _identifyObjectIn;
	yarp::os::BufferedPort<VectorOf<int>> _identifyTrajectoryIn;
	yarp::os::BufferedPort<VectorOf<double>> _trackFaceIn;
	yarp::os::BufferedPort<VectorOf<double>> _trackObjectIn;
	yarp::os::BufferedPort<VectorOf<double>> _trackHandIn;
	yarp::os::BufferedPort<VectorOf<double>> _getSoundDirectionIn;
	yarp::os::BufferedPort<VectorOf<int>> _checkMutualGazeOut;
	yarp::os::BufferedPort<VectorOf<double>> _getFacesOut;
	yarp::os::BufferedPort<VectorOf<double>> _getSoundDirectionOut;
	yarp::os::BufferedPort<VectorOf<double>> _identifyFaceExpressionOut;
	yarp::os::BufferedPort<Bottle> _recognizeSpeechOut;
	yarp::os::BufferedPort<VectorOf<double>> _getEyeGazeOut;
	yarp::os::BufferedPort<VectorOf<double>> _getEyesOut;
	yarp::os::BufferedPort<VectorOf<double>> _getArmAngleOut;
	yarp::os::BufferedPort<VectorOf<double>> _getBodyOut;
	yarp::os::BufferedPort<VectorOf<double>> _getGripLocationOut;
	yarp::os::BufferedPort<VectorOf<double>> _getBodyPoseOut;
	yarp::os::BufferedPort<VectorOf<double>> _getHandsOut;
	yarp::os::BufferedPort<VectorOf<double>> _getHeadOut;
	yarp::os::BufferedPort<VectorOf<double>> _getHeadGazeOut;
	yarp::os::BufferedPort<VectorOf<double>> _getObjectsOut;
	yarp::os::BufferedPort<VectorOf<double>> _getObjectTableDistanceOut;
	yarp::os::BufferedPort<VectorOf<double>> _identifyFaceOut;
	yarp::os::BufferedPort<VectorOf<double>> _identifyObjectOut;
	yarp::os::BufferedPort<VectorOf<double>> _identifyTrajectoryOut;
	yarp::os::BufferedPort<VectorOf<int>> _identifyVoiceOut;
	yarp::os::BufferedPort<VectorOf<double>> _trackFaceOut;
	yarp::os::BufferedPort<VectorOf<double>> _trackObjectOut;
	yarp::os::BufferedPort<VectorOf<double>> _getHeadGazePointOut;
	yarp::os::Port _handlerPort;

	/* pointer to a new thread */
	Wp3StubThread* _wp3StubThread;
   Wp3StubController* _wp3StubController;
   Wp3StubYarpInterface* _wp3StubYarpInterface;
public:
	/* class methods */
	bool configure(yarp::os::ResourceFinder &rf);
	bool interruptModule();
	bool close();
	bool respond(const yarp::os::Bottle& command, Bottle& reply);
	double getPeriod();
	bool updateModule();
};

#endif
