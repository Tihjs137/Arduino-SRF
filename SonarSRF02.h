//
// SonarSRF
// Arduino Library for controlling SRF sonar sensors
// http://www.arduino.cc/playground/Main/SonarSrf08
//
// MIT License
// Copyright(c) 2009 Zach Foresta
// Copyright(c) 2012 Philipp A. Mohrenweiser
// Copyright(c) 2012-2016 Leo Colombaro
//

#ifndef SonarSRF02_h
#define SonarSRF02_h

#include "SonarSRF.h"

class SonarSRF02 : public SonarSRF
{
public:
    void waitForCompletion();
};

#endif
