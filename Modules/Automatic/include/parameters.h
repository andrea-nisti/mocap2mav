//
// Created by andreanistico on 21/02/17.
//

#ifndef MOCAP2MAV_PARAMETERS_H
#define MOCAP2MAV_PARAMETERS_H

namespace params_automatic {

    //Number of consecutive frames in which tracking is considered valid
    static const int    NFramesHold     = 200;

    //Number of consecutive frames in which tracking is considered not valid
    static const int    NFramesLost     = 100;

    //Number of consecutive frames in which tracking is considered valid
    //and robot is ready for compensation
    static const int    NFramesComp     = 50;

    //Platform dimension
    static const double platformLenght  = 2;

    //Max altitude for landing procedure
    static const double zMax            = 10;

    //Minimum altitude for landing procedure (before compensating, this value should be above the maximum platform altitude)
    static double       zMin            = 4;

    //Proportional gain times platform velocity
    static const double KpHoldV          = 1.03;

    //Proportional gain times horizontal error
    static const double KpHold           = 0.6;

    //Integral gain times integral horizontal error
    static const double KiHold          = 0.1;

    //Proportional gain for velocity tracking
    static const double KPCompV          = 0.1;

    //Integral clamping values
    static const double maxIntValue     = 5;
    static const double minIntValue     = -maxIntValue;

}

#endif //MOCAP2MAV_PARAMETERS_H
