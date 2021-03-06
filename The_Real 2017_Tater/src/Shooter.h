/*
 * Shooter.h
 *
 *  Created on: Oct 11, 2014
 *      Author: Oomkes
 */
#include "WPILib.h"
#include "RobotMap.h"
#include "UserInterface.h"
#include <thread>

enum ShotType
{
	NO_SHOT,
	HIGH_SHOT,
	TRUSS_SHOT,
	BUMP_SHOT,
	CUSTOM_SHOT
};

/*
 * Description:
 */
class Shooter {
	Solenoid pow;
	ShotType m_shotType;
	int m_state;
	int m_recordButton;
	int m_loopCount;
	std::thread *m_thread;
	
public:
	Shooter();
	~Shooter();
	void HighShot(void);
	void Run(TaterUserInput *);
	void Run2(TaterUserInput *);
	void Run3(TaterUserInput *);
	ShotType GetShotType();
	void Complete();
	void SolenoidOn(bool value);
	void Init(void);

};
