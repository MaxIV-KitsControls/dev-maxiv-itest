/*----- PROTECTED REGION ID(Itest2811ChannelStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        Itest2811ChannelStateMachine.cpp
//
// description : C++ source for the Itest2811Channel and its alowed
//               methods for commands and attributes
//
// project :     BILT channel interface.
//
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// SVN only:
// $HeadURL:  $
//
// CVS only:
// $Source:  $
// $Log:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================



#include <Itest2811Channel.h>
#include <Itest2811ChannelClass.h>

/*----- PROTECTED REGION END -----*/


/*
 * Itest2811Channel states description:
 *
 * ON :	Magnet is ON, all three channels are ON. 
 * OFF :	Magnet is OFF, all three channels are OFF. 
 * FAULT :	Error detected by the BILT magnet. 
 * ALARM :	Alarm detected on one or more channels. 
 * UNKNOWN :	Communication fault 
 */

namespace Itest2811Channel_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Itest2811Channel::is_CurrentState_allowed()
 *	Description : Execution allowed for Current attribute.
 */
//--------------------------------------------------------

bool Itest2811Channel::is_Current_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Check if access type.
	if ( type!=Tango::READ_REQ )
	{
			//	Not any excluded states for Current attribute in WRITE access.
		
	/*----- PROTECTED REGION ID(Itest2811Channel::CurrentStateAllowed_WRITE) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::CurrentStateAllowed_WRITE

		return true;
	}
	else
		//	Not any excluded states for Current attribute in READ access.
	
	/*----- PROTECTED REGION ID(Itest2811Channel::read_CurrentStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::read_CurrentStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Itest2811Channel::is_VoltageState_allowed()
 *	Description : Execution allowed for Voltage attribute.
 */
//--------------------------------------------------------

bool Itest2811Channel::is_Voltage_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
		//	Not any excluded states for Voltage attribute in READ access.
	
	/*----- PROTECTED REGION ID(Itest2811Channel::read_VoltageStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::read_VoltageStateAllowed_READ

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Itest2811Channel::is_ImpedanceState_allowed()
 *	Description : Execution allowed for Impedance attribute.
 */
//--------------------------------------------------------

bool Itest2811Channel::is_Impedance_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
		//	Not any excluded states for Impedance attribute in READ access.
	
	/*----- PROTECTED REGION ID(Itest2811Channel::read_ImpedanceStateAllowed_READ) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::read_ImpedanceStateAllowed_READ

	return true;
}


//=================================================
//	Dynamic Attributes Allowed Methods
//=================================================


	/*----- PROTECTED REGION ID(Itest2811Channel::are_dynamic_attributes_allowed) ENABLED START -----*/

	//	Add your code to check if dynamic attributes are alowed

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::are_dynamic_attributes_allowed


//=================================================
//		Commands Allowed Methods
//=================================================


//--------------------------------------------------------
/**
 *	Method      : Itest2811Channel::is_OnState_allowed()
 *	Description : Execution allowed for On command.
 */
//--------------------------------------------------------

bool Itest2811Channel::is_On_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for On command.

	/*----- PROTECTED REGION ID(Itest2811Channel::OnStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::OnStateAllowed

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Itest2811Channel::is_OffState_allowed()
 *	Description : Execution allowed for Off command.
 */
//--------------------------------------------------------

bool Itest2811Channel::is_Off_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Off command.

	/*----- PROTECTED REGION ID(Itest2811Channel::OffStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::OffStateAllowed

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Itest2811Channel::is_ResetState_allowed()
 *	Description : Execution allowed for Reset command.
 */
//--------------------------------------------------------

bool Itest2811Channel::is_Reset_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Reset command.

	/*----- PROTECTED REGION ID(Itest2811Channel::ResetStateAllowed) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::ResetStateAllowed

	return true;
}


	/*----- PROTECTED REGION ID(Itest2811Channel::are_dynamic_commands_allowed) ENABLED START -----*/

	//	Add your code to check if dynamic commands are alowed

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::are_dynamic_commands_allowed

}	// namespace Itest2811Channel_ns
