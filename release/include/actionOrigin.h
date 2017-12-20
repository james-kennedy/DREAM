/** @file actionOrigin.h
*
* Version 1.0
*
* Generated by YarpGenerator, Emmanuel Senft, PLYM
*
*
* \defgroup DREAM_cognitiveComponent sharedResources
*
* Header class to define stepId if actions are not from the script. Positive id are for steps, and negative if origin is another component.
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
* <Emmanuel Senft>, <Plymouth University>
*
* Copyright (C) 2014 DREAM Consortium
*
*/

/*
* Copyright (C) 2014 DREAM Consortium
* FP7 Project 611391 co-funded by the European Commission
*
* Author:  Emmanuel Senft, Plymouth University
* Email:   emmanuel.senft@plymouth.ac.uk
* Website: www.dream2020.eu
*
* This program comes with ABSOLUTELY NO WARRANTY
*/

/*
* Audit Trail
* -----------
* 27/06/2016 Version 1.0: ... (Emmanuel Senft)
*/

#ifndef ACTIONORIGIN
#define ACTIONORIGIN

#include <string>

// List of ids of moveSequence behaviours

/* ------------------------------- */
/*        ACTION COMMANDS         */
/* ------------------------------- */

const int _ORIGIN_UNDEFINED_ = -1;
const int _ORIGIN_THERAPIST_ = -2;
const int _ORIGIN_ATTENTION_REACTION_ = -3;
const int _ORIGIN_DELIBERATIVE_ = -4;
const int _ORIGIN_ACTUATION_ = -5;


#endif