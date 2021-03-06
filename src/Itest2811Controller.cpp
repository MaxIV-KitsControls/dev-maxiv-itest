/*----- PROTECTED REGION ID(Itest2811Controller.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        Itest2811Controller.cpp
//
// description : C++ source for the Itest2811Controller and its commands.
//               The class is derived from Device. It represents the
//               CORBA servant object which will be accessed from the
//               network. All commands which can be executed on the
//               Itest2811Controller are implemented in this file.
//
// project :     BILT multi channel power supply.
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


#include <Itest2811Controller.h>
#include <Itest2811ControllerClass.h>

/*----- PROTECTED REGION END -----*/


/**
 *	Itest2811Controller class description:
 *	By this device server for slow  or human control.
 */

//================================================================
//
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name  |  Method name
//----------------------------------------------------------------
//  State         |  dev_state
//  Status        |  dev_status
//  On            |  on
//  Off           |  off
//  Reset         |  reset
//================================================================
//	Attributes managed are:
//	Currents:	
//	Voltages:	
//	Impedances:	
//	SetCurrentsRMS:	
//	SetCurrentsAverage:	
//	FramesPerSecond:	
//	ErrorsPerSecond:	
//	ErrorCounters:	
//	Temperatures:	




namespace Itest2811Controller_ns
{
	/*----- PROTECTED REGION ID(Itest2811Controller::namespace_starting) ENABLED START -----*/

	//	static initializations

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::namespace_starting



//--------------------------------------------------------
/**
 *	Method      : Itest2811Controller::Itest2811Controller()
 *	Description : Constructors for a Tango device
 *	              implementing the class Itest2811Controller
 */
//--------------------------------------------------------
Itest2811Controller::Itest2811Controller(Tango::DeviceClass *cl, string &s)
 	: Tango::Device_4Impl(cl, s.c_str())
{
	/*----- PROTECTED REGION ID(Itest2811Controller::constructor_1) ENABLED START -----*/

	init_device();

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::constructor_1
}
//--------------------------------------------------------
Itest2811Controller::Itest2811Controller(Tango::DeviceClass *cl, const char *s)
 	: Tango::Device_4Impl(cl, s)
{
	/*----- PROTECTED REGION ID(Itest2811Controller::constructor_2) ENABLED START -----*/

	init_device();

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::constructor_2
}
//--------------------------------------------------------
Itest2811Controller::Itest2811Controller(Tango::DeviceClass *cl, const char *s, const char *d)
 	: Tango::Device_4Impl(cl, s, d)
{
	/*----- PROTECTED REGION ID(Itest2811Controller::constructor_3) ENABLED START -----*/

	init_device();

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::constructor_3
}


//--------------------------------------------------------
/**
 *	Method      : Itest2811Controller::delete_device()()
 *	Description : will be called at device destruction or at init command
 */
//--------------------------------------------------------
void Itest2811Controller::delete_device()
{
	DEBUG_STREAM << "Itest2811Controller::delete_device() " << device_name << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::delete_device) ENABLED START -----*/

	//	Delete device allocated objects

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::delete_device
	
	
}


//--------------------------------------------------------
/**
 *	Method      : Itest2811Controller::init_device()
 *	Description : //	will be called at device initialization.
 */
//--------------------------------------------------------
void Itest2811Controller::init_device()
{
	DEBUG_STREAM << "Itest2811Controller::init_device() create device " << device_name << endl;
	

	/*----- PROTECTED REGION ID(Itest2811Controller::init_device_before) ENABLED START -----*/

	//	Initialization before get_device_property() call

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::init_device_before
	
	//	Get the device properties (if any) from database
	get_device_property();
	
	
	/*----- PROTECTED REGION ID(Itest2811Controller::init_device) ENABLED START -----*/

	//	Initialize device

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::init_device
}



//--------------------------------------------------------
/**
 *	Method      : Itest2811Controller::get_device_property()
 *	Description : Read database to initialize property data members.
 */
//--------------------------------------------------------
void Itest2811Controller::get_device_property()
{
	/*----- PROTECTED REGION ID(Itest2811Controller::get_device_property_before) ENABLED START -----*/

	//	Initialize property data members

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::get_device_property_before


	//	Read device properties from database.
	Tango::DbData	dev_prop;
	dev_prop.push_back(Tango::DbDatum("IPAddress"));
	dev_prop.push_back(Tango::DbDatum("MagnetNumber"));
	dev_prop.push_back(Tango::DbDatum("UpdatePeriod"));
	dev_prop.push_back(Tango::DbDatum("Channels"));

	//	is there at least one property to be read ?
	if (dev_prop.size()>0)
	{
		//	Call database and extract values
		if (Tango::Util::instance()->_UseDb==true)
			get_db_device()->get_property(dev_prop);
	
		//	get instance on Itest2811ControllerClass to get class property
		Tango::DbDatum	def_prop, cl_prop;
		Itest2811ControllerClass	*ds_class =
			(static_cast<Itest2811ControllerClass *>(get_device_class()));
		int	i = -1;

		//	Try to initialize IPAddress from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  iPAddress;
		else {
			//	Try to initialize IPAddress from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  iPAddress;
		}
		//	And try to extract IPAddress value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  iPAddress;

		//	Try to initialize MagnetNumber from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  magnetNumber;
		else {
			//	Try to initialize MagnetNumber from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  magnetNumber;
		}
		//	And try to extract MagnetNumber value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  magnetNumber;

		//	Try to initialize UpdatePeriod from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  updatePeriod;
		else {
			//	Try to initialize UpdatePeriod from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  updatePeriod;
		}
		//	And try to extract UpdatePeriod value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  updatePeriod;

		//	Try to initialize Channels from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  channels;
		else {
			//	Try to initialize Channels from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  channels;
		}
		//	And try to extract Channels value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  channels;


	}
	/*----- PROTECTED REGION ID(Itest2811Controller::get_device_property_after) ENABLED START -----*/

	//	Check device property data members init

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::get_device_property_after

}


//--------------------------------------------------------
/**
 *	Method      : Itest2811Controller::always_executed_hook()
 *	Description : method always executed before any command is executed
 */
//--------------------------------------------------------
void Itest2811Controller::always_executed_hook()
{
	INFO_STREAM << "Itest2811Controller::always_executed_hook()  " << device_name << endl;
	
	/*----- PROTECTED REGION ID(Itest2811Controller::always_executed_hook) ENABLED START -----*/

	//	code always executed before all requests

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::always_executed_hook
}




//--------------------------------------------------------
/**
 *	Method      : Itest2811Controller::read_attr_hardware()
 *	Description : Hardware acquisition for attributes.
 */
//--------------------------------------------------------
void Itest2811Controller::read_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "Itest2811Controller::read_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::read_attr_hardware) ENABLED START -----*/

	//	Add your own code

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::read_attr_hardware

}


//--------------------------------------------------------
/**
 *	Read Currents attribute
 *	Description: The measured currents of the three poles.
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 3
 */
//--------------------------------------------------------
void Itest2811Controller::read_Currents(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Itest2811Controller::read_Currents(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::read_Currents) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_Currents_read, 3);

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::read_Currents
}
	
//--------------------------------------------------------
/**
 *	Write Currents attribute values to hardware.
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 3
 */
//--------------------------------------------------------	
void Itest2811Controller::write_Currents(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Itest2811Controller::write_Currents(Tango::Attribute &attr) entering... " << endl;
	
	//	Retrieve number of write values
	int	w_length = attr.get_write_value_length();

	//	Retrieve pointer on write values (Do not delete !)
	const Tango::DevDouble	*w_val;
	attr.get_write_value(w_val);
	
	/*----- PROTECTED REGION ID(Itest2811Controller::write_Currents) ENABLED START -----*/

	

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::write_Currents
}

//--------------------------------------------------------
/**
 *	Read Voltages attribute
 *	Description: The measured voltages of the three poles.
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 3
 */
//--------------------------------------------------------
void Itest2811Controller::read_Voltages(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Itest2811Controller::read_Voltages(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::read_Voltages) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_Voltages_read, 3);

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::read_Voltages
}

//--------------------------------------------------------
/**
 *	Read Impedances attribute
 *	Description: Calculated impedances for the three poles.
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 3
 */
//--------------------------------------------------------
void Itest2811Controller::read_Impedances(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Itest2811Controller::read_Impedances(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::read_Impedances) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_Impedances_read, 3);

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::read_Impedances
}

//--------------------------------------------------------
/**
 *	Read SetCurrentsRMS attribute
 *	Description: Statistic when driven by the Libera. One RMS value for every pole\nof the magnet.\nRMS value of the AC setpoint applied on the DAC during the last second.\nX=sqr( (sum(setAC)*sum(setAC)) / n - ((sum(setAC)/n) *(sum(setAC)/n)) )
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 3
 */
//--------------------------------------------------------
void Itest2811Controller::read_SetCurrentsRMS(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Itest2811Controller::read_SetCurrentsRMS(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::read_SetCurrentsRMS) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_SetCurrentsRMS_read, 3);

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::read_SetCurrentsRMS
}

//--------------------------------------------------------
/**
 *	Read SetCurrentsAverage attribute
 *	Description: Statistic when driven by the Libera. One average value for every pole\nof the magnet.\nAverage value of the AC setpoint applied on the DAC during the last second.
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 3
 */
//--------------------------------------------------------
void Itest2811Controller::read_SetCurrentsAverage(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Itest2811Controller::read_SetCurrentsAverage(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::read_SetCurrentsAverage) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_SetCurrentsAverage_read, 3);

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::read_SetCurrentsAverage
}

//--------------------------------------------------------
/**
 *	Read FramesPerSecond attribute
 *	Description: Number of settings applied during the last second
 *
 *	Data type:	Tango::DevULong
 *	Attr type:	Spectrum  max = 3
 */
//--------------------------------------------------------
void Itest2811Controller::read_FramesPerSecond(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Itest2811Controller::read_FramesPerSecond(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::read_FramesPerSecond) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_FramesPerSecond_read, 3);

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::read_FramesPerSecond
}

//--------------------------------------------------------
/**
 *	Read ErrorsPerSecond attribute
 *	Description: Errors detected during the last second
 *
 *	Data type:	Tango::DevULong
 *	Attr type:	Spectrum  max = 3
 */
//--------------------------------------------------------
void Itest2811Controller::read_ErrorsPerSecond(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Itest2811Controller::read_ErrorsPerSecond(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::read_ErrorsPerSecond) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_ErrorsPerSecond_read, 3);

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::read_ErrorsPerSecond
}

//--------------------------------------------------------
/**
 *	Read ErrorCounters attribute
 *	Description: Statistic when driven by the Libera.\nThe total number of errors since the last reset for the \nthree poles.
 *
 *	Data type:	Tango::DevULong
 *	Attr type:	Spectrum  max = 3
 */
//--------------------------------------------------------
void Itest2811Controller::read_ErrorCounters(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Itest2811Controller::read_ErrorCounters(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::read_ErrorCounters) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_ErrorCounters_read, 3);

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::read_ErrorCounters
}

//--------------------------------------------------------
/**
 *	Read Temperatures attribute
 *	Description: Temperature measurements for the three poles.
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum  max = 6
 */
//--------------------------------------------------------
void Itest2811Controller::read_Temperatures(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Itest2811Controller::read_Temperatures(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::read_Temperatures) ENABLED START -----*/

	//	Set the attribute value
	attr.set_value(attr_Temperatures_read, 6);

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::read_Temperatures
}



//--------------------------------------------------------
/**
 *	Method      : Itest2811Controller::add_dynamic_attributes()
 *	Description : Create the dynamic attributes if any at server startup
 *	              for specified device.
 */
//--------------------------------------------------------
void Itest2811Controller::add_dynamic_attributes()
{
	
	/*----- PROTECTED REGION ID(Itest2811Controller::add_dynamic_attributes) ENABLED START -----*/

	//	Add your own code to create and add dynamic attributes if any

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::add_dynamic_attributes()
}



//========================================================
//	Command execution methods
//========================================================

//--------------------------------------------------------
/**
 *	Execute the State command:
 *	Description: This command gets the device state (stored in its <i>device_state</i> data member) and returns it to the caller.
 *
 *	@param argin none.
 *	@returns State Code
 */
//--------------------------------------------------------
Tango::DevState Itest2811Controller::dev_state()
{
	DEBUG_STREAM << "Itest2811Controller::State()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::dev_state) ENABLED START -----*/

	Tango::DevState	argout = Tango::UNKNOWN; // replace by your own algorithm

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::dev_state

	set_state(argout);    // Give the state to Tango.
	if (argout!=Tango::ALARM)
		DeviceImpl::dev_state();
	return get_state();  // Return it after Tango management.

}

//--------------------------------------------------------
/**
 *	Execute the Status command:
 *	Description: This command gets the device status (stored in its <i>device_status</i> data member) and returns it to the caller.
 *
 *	@param argin none.
 *	@returns Status description
 */
//--------------------------------------------------------
Tango::ConstDevString Itest2811Controller::dev_status()
{
	DEBUG_STREAM << "Itest2811Controller::Status()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::dev_status) ENABLED START -----*/

	string	status = "Device is OK";
		//	Add your own status management

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::dev_status

	set_status(status);               // Give the status to Tango.
	return DeviceImpl::dev_status();  // Return it.

}

//--------------------------------------------------------
/**
 *	Execute the On command:
 *	Description: Turns on power supply.
 *
 *	@param argin 
 *	@returns 
 */
//--------------------------------------------------------
void Itest2811Controller::on()
{
	DEBUG_STREAM << "Itest2811Controller::On()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::on) ENABLED START -----*/

	//	Add your own code

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::on

}

//--------------------------------------------------------
/**
 *	Execute the Off command:
 *	Description: Turns of power supply
 *
 *	@param argin 
 *	@returns 
 */
//--------------------------------------------------------
void Itest2811Controller::off()
{
	DEBUG_STREAM << "Itest2811Controller::Off()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::off) ENABLED START -----*/

	//	Add your own code

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::off

}

//--------------------------------------------------------
/**
 *	Execute the Reset command:
 *	Description: Reset faults and alarms
 *
 *	@param argin 
 *	@returns 
 */
//--------------------------------------------------------
void Itest2811Controller::reset()
{
	DEBUG_STREAM << "Itest2811Controller::Reset()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(Itest2811Controller::reset) ENABLED START -----*/

	//	Add your own code

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::reset

}


	/*----- PROTECTED REGION ID(Itest2811Controller::namespace_ending) ENABLED START -----*/

	//	Additional Methods
// //--------------------------------------------------------
// /**
//  *	Execute the SetPoleAcCurrent command:
//  *	Description: Set the AC current for one Pole.
//  *	             [0] = pole number, [1] = current
//  *
//  *	@param argin [0] = pole number, [1] = current
//  *	@returns 
//  */
// //--------------------------------------------------------
// void Itest2811Controller::set_pole_ac_current(const Tango::DevVarDoubleArray *argin)
// {
// 	DEBUG_STREAM << "Itest2811Controller::SetPoleAcCurrent()  - " << device_name << endl;
// 	//	Add your own code
// }

// //--------------------------------------------------------
// /**
//  *	Execute the LocalPoleControl command:
//  *	Description: Set the AC current for one Pole.
//  *	             [0] = pole number, [1] = local control true/false
//  *
//  *	@param argin [0] = pole number, [1] = local control true/false
//  *	@returns 
//  */
// //--------------------------------------------------------
// void Itest2811Controller::local_pole_control(const Tango::DevVarShortArray *argin)
// {
// 	DEBUG_STREAM << "Itest2811Controller::LocalPoleControl()  - " << device_name << endl;
// 	//	Add your own code
// }

// //--------------------------------------------------------
// /**
//  *	Execute the SetPoleCurrent command:
//  *	Description: Set the current for one Pole.
//  *	             [0] = pole number, [1] = current
//  *
//  *	@param argin [0] = pole number, [1] = current
//  *	@returns 
//  */
// //--------------------------------------------------------
// void Itest2811Controller::set_pole_current(const Tango::DevVarDoubleArray *argin)
// {
// 	DEBUG_STREAM << "Itest2811Controller::SetPoleCurrent()  - " << device_name << endl;
// 	//	Add your own code
// }

// //--------------------------------------------------------
// /**
//  *	Execute the EnableAcCurrent command:
//  *	Description: Enables the dynamic 10kHz AC current settings from the Liberas.
//  *
//  *	@param argin 
//  *	@returns 
//  */
// //--------------------------------------------------------
// void Itest2811Controller::enable_ac_current()
// {
// 	DEBUG_STREAM << "Itest2811Controller::EnableAcCurrent()  - " << device_name << endl;
// 	//	Add your own code
// }

// //--------------------------------------------------------
// /**
//  *	Execute the DisableAcCurrent command:
//  *	Description: Disables the dynamic 10kHz AC current settings from the Liberas.
//  *
//  *	@param argin 
//  *	@returns 
//  */
// //--------------------------------------------------------
// void Itest2811Controller::disable_ac_current()
// {
// 	DEBUG_STREAM << "Itest2811Controller::DisableAcCurrent()  - " << device_name << endl;
// 	//	Add your own code
// }

// //--------------------------------------------------------
// /**
//  *	Execute the SetpointCheck command:
//  *	Description: Check the given current values against the specified limits.
//  *
//  *	@param argin Setpoint values for the Poles
//  *	@returns true when settings are OK
//  */
// //--------------------------------------------------------
// Tango::DevBoolean Itest2811Controller::setpoint_check(const Tango::DevVarDoubleArray *argin)
// {
// 	Tango::DevBoolean argout;
// 	DEBUG_STREAM << "Itest2811Controller::SetpointCheck()  - " << device_name << endl;
// 	//	Add your own code
// 	return argout;
// }

// //--------------------------------------------------------
// /**
//  *	Read Location attribute
//  *	Description: The pysical location of the power supply in the form:\n<Room: xxx Rack: yyy Number: zzz Channels: 123 or 456>
//  *
//  *	Data type:	Tango::DevString
//  *	Attr type:	Scalar 
//  */
// //--------------------------------------------------------
// void Itest2811Controller::read_Location(Tango::Attribute &attr)
// {
// 	DEBUG_STREAM << "Itest2811Controller::read_Location(Tango::Attribute &attr) entering... " << endl;
// 	//	Set the attribute value
// 	attr.set_value(attr_Location_read);
// }

// //--------------------------------------------------------
// /**
//  *	Read LocalControls attribute
//  *	Description: Indicated whether the individual channels are in local control mode for the \nAC current control. True = local control activated.
//  *
//  *	Data type:	Tango::DevBoolean
//  *	Attr type:	Spectrum  max = 5
//  */
// //--------------------------------------------------------
// void Itest2811Controller::read_LocalControls(Tango::Attribute &attr)
// {
// 	DEBUG_STREAM << "Itest2811Controller::read_LocalControls(Tango::Attribute &attr) entering... " << endl;
// 	//	Set the attribute value
// 	attr.set_value(attr_LocalControls_read, 5);
// }


	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::namespace_ending
} //	namespace
