CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

SET(MODULENAME attentionReactionSubsystem)
PROJECT(${MODULENAME})

FIND_PACKAGE(YARP)
SET(CMAKE_MODULE_PATH ${YARP_MODULE_PATH} ${CMAKE_MODULE_PATH})

FILE(GLOB folder_source src/attentionReactionSubsystemMain.cpp src/attentionReactionSubsystemConfiguration.cpp src/attentionReactionSubsystemComputation.cpp src/attentionReactionController.cpp src/attentionReactionYarpInterface.cpp src/attentionSystem.cpp src/eyeBlinking.cpp)
FILE(GLOB folder_header src/attentionReactionSubsystem.h src/attentionReactionController.h src/attentionReactionYarpInterface.h src/attentionSystem.h src/eyeBlinking.h)

SOURCE_GROUP("Source Files" FILES ${folder_source})
SOURCE_GROUP("Header Files" FILES ${folder_header})

INCLUDE_DIRECTORIES(${YARP_INCLUDE_DIRS})

ADD_EXECUTABLE(${MODULENAME} ${folder_source} ${folder_header})
 
TARGET_LINK_LIBRARIES(${MODULENAME} ${YARP_LIBRARIES})

INSTALL(TARGETS ${MODULENAME} DESTINATION bin) 