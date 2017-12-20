/* 
 * Copyright (C) 2015 DREAM Consortium
 * FP7 Project 611391 co-funded by the European Commission
 *
 * Author:  Pablo G�mez, Vrije Universiteit Brussel
 * Email:   pablo.gomez.esteban@vub.ac.be
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
 * 13/08/15  First version validated (Pablo G�mez)
 */ 

#include "actuationSimulator.h" 

int main(int argc, char * argv[])
{
   /* initialize yarp network */ 
 
   Network yarp;

   /* create your module */

   ActuationSimulator actuationSimulator; 

   /* prepare and configure the resource finder */

   ResourceFinder rf;
   rf.setVerbose(true);
   rf.setDefaultConfigFile("actuationSimulator.ini");              // can be overridden by --from parameter
   rf.setDefaultContext("components/actuationSimulator/config");   // can be overridden by --context parameter
   rf.configure("DREAM_ROOT", argc, argv);                         // environment variable with root of configuration path
 
   /* run the module: runModule() calls configure first and, if successful, it then runs */

   actuationSimulator.runModule(rf);

   return 0;
}