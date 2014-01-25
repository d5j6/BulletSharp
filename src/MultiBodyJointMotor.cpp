#include "StdAfx.h"

#ifndef DISABLE_FEATHERSTONE

#include "MultiBody.h"
#include "MultiBodyJointMotor.h"

MultiBodyJointMotor::MultiBodyJointMotor(btMultiBodyJointMotor* native)
	: MultiBodyConstraint(native)
{
}

MultiBodyJointMotor::MultiBodyJointMotor(MultiBody^ body, int link, int linkDoF, float desiredVelocity, float maxMotorImpulse)
	: MultiBodyConstraint(new btMultiBodyJointMotor(body->_native, link, linkDoF, desiredVelocity, maxMotorImpulse))
{
}

#endif
