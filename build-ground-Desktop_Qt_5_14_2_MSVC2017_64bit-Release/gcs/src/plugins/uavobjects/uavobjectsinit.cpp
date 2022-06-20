/**
 ******************************************************************************
 *
 * @file       uavobjectsinit.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       This is an automatically generated file.
 *             DO NOT modify manually. 
 *
 * @brief      The UAVUObjects GCS plugin 
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "uavobjectsinit.h"

#include "accelgyrosettings.h"
#include "accelsensor.h"
#include "accelstate.h"
#include "accessorydesired.h"
#include "actuatorcommand.h"
#include "actuatordesired.h"
#include "actuatorsettings.h"
#include "airspeedsensor.h"
#include "airspeedsettings.h"
#include "objectpersistence.h"


/**
 * Function used to initialize the first instance of each object.
 * This file is automatically updated by the UAVObjectGenerator.
 */
void UAVObjectsInitialize(UAVObjectManager *objMngr)
{
    objMngr->registerObject( new AccelGyroSettings() );
    AccelGyroSettings::registerQMLTypes();
    objMngr->registerObject( new AccelSensor() );
    AccelSensor::registerQMLTypes();
    objMngr->registerObject( new AccelState() );
    AccelState::registerQMLTypes();
    objMngr->registerObject( new AccessoryDesired() );
    AccessoryDesired::registerQMLTypes();
    objMngr->registerObject( new ActuatorCommand() );
    ActuatorCommand::registerQMLTypes();
    objMngr->registerObject( new ActuatorDesired() );
    ActuatorDesired::registerQMLTypes();
    objMngr->registerObject( new ActuatorSettings() );
    ActuatorSettings::registerQMLTypes();
    objMngr->registerObject( new AirspeedSensor() );
    AirspeedSensor::registerQMLTypes();
    objMngr->registerObject( new AirspeedSettings() );
    AirspeedSettings::registerQMLTypes();
    objMngr->registerObject( new ObjectPersistence() );
    ObjectPersistence::registerQMLTypes();

}
