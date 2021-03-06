/*----- PROTECTED REGION ID(Itest2811Controller.h) ENABLED START -----*/
//=============================================================================
//
// file :        Itest2811Controller.h
//
// description : Include for the Itest2811Controller class.
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


#ifndef ITEST2811CONTROLLER_H
#define ITEST2811CONTROLLER_H


#include <tango.h>

/*----- PROTECTED REGION END -----*/


/**
 *	Itest2811Controller class Description:
 *	By this device server for slow  or human control.
 */

namespace Itest2811Controller_ns
{
	/*----- PROTECTED REGION ID(Itest2811Controller::Additional Class Declarations) ENABLED START -----*/

		//		Additional Class Declarations

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::Additional Class Declarations


class Itest2811Controller : public Tango::Device_4Impl
{


	/*----- PROTECTED REGION ID(Itest2811Controller::Data Members) ENABLED START -----*/

	//		Add your own data members

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::Data Members


//	Device property data members
public:		//	IPAddress:	IP Address of BILT controller.
	//	Each controller includes several magnets and
	//	each magnet includes 3 power supplies,
	//	for corrections in the X, Y and Z planes.
	string	iPAddress;
	//	MagnetNumber:	Magnet number from 1 to 48
	Tango::DevShort	magnetNumber;
	//	UpdatePeriod:	The update period  for the data reading from the power supply in milli seconds.
	Tango::DevLong	updatePeriod;
	//	Channels:	
	string	channels;
	
//	Attribute data members
public:
	Tango::DevDouble	*attr_Currents_read;
	Tango::DevDouble	*attr_Voltages_read;
	Tango::DevDouble	*attr_Impedances_read;
	Tango::DevDouble	*attr_SetCurrentsRMS_read;
	Tango::DevDouble	*attr_SetCurrentsAverage_read;
	Tango::DevULong	*attr_FramesPerSecond_read;
	Tango::DevULong	*attr_ErrorsPerSecond_read;
	Tango::DevULong	*attr_ErrorCounters_read;
	Tango::DevDouble	*attr_Temperatures_read;



//	Constructors and destructors
public:
	/**
	 * Constructs a newly allocated Command object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	Itest2811Controller(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly allocated Command object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	Itest2811Controller(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly allocated Command object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	Itest2811Controller(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The object destructor.
	 */	
	~Itest2811Controller() {delete_device();};



//	Miscellaneous methods
public:
	/**
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/**
	 *	Initialize the device
	 */
	virtual void init_device();
	/**
	 *	Read the device properties from database
	 */
	 void get_device_property();
	/**
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	/**
	 *	Method      : Itest2811Controller::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	virtual void read_attr_hardware(vector<long> &attr_list);


	/**
	 *	Currents attribute related methods.
	 *	Description: The measured currents of the three poles.
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 3
	 */
	virtual void read_Currents(Tango::Attribute &attr);
	virtual void write_Currents(Tango::WAttribute &attr);
	virtual bool is_Currents_allowed(Tango::AttReqType type);



	/**
	 *	Voltages attribute related methods.
	 *	Description: The measured voltages of the three poles.
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 3
	 */
	virtual void read_Voltages(Tango::Attribute &attr);
	virtual bool is_Voltages_allowed(Tango::AttReqType type);



	/**
	 *	Impedances attribute related methods.
	 *	Description: Calculated impedances for the three poles.
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 3
	 */
	virtual void read_Impedances(Tango::Attribute &attr);
	virtual bool is_Impedances_allowed(Tango::AttReqType type);



	/**
	 *	SetCurrentsRMS attribute related methods.
	 *	Description: Statistic when driven by the Libera. One RMS value for every pole\nof the magnet.\nRMS value of the AC setpoint applied on the DAC during the last second.\nX=sqr( (sum(setAC)*sum(setAC)) / n - ((sum(setAC)/n) *(sum(setAC)/n)) )
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 3
	 */
	virtual void read_SetCurrentsRMS(Tango::Attribute &attr);
	virtual bool is_SetCurrentsRMS_allowed(Tango::AttReqType type);



	/**
	 *	SetCurrentsAverage attribute related methods.
	 *	Description: Statistic when driven by the Libera. One average value for every pole\nof the magnet.\nAverage value of the AC setpoint applied on the DAC during the last second.
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 3
	 */
	virtual void read_SetCurrentsAverage(Tango::Attribute &attr);
	virtual bool is_SetCurrentsAverage_allowed(Tango::AttReqType type);



	/**
	 *	FramesPerSecond attribute related methods.
	 *	Description: Number of settings applied during the last second
	 *
	 *	Data type:	Tango::DevULong
	 *	Attr type:	Spectrum  max = 3
	 */
	virtual void read_FramesPerSecond(Tango::Attribute &attr);
	virtual bool is_FramesPerSecond_allowed(Tango::AttReqType type);



	/**
	 *	ErrorsPerSecond attribute related methods.
	 *	Description: Errors detected during the last second
	 *
	 *	Data type:	Tango::DevULong
	 *	Attr type:	Spectrum  max = 3
	 */
	virtual void read_ErrorsPerSecond(Tango::Attribute &attr);
	virtual bool is_ErrorsPerSecond_allowed(Tango::AttReqType type);



	/**
	 *	ErrorCounters attribute related methods.
	 *	Description: Statistic when driven by the Libera.\nThe total number of errors since the last reset for the \nthree poles.
	 *
	 *	Data type:	Tango::DevULong
	 *	Attr type:	Spectrum  max = 3
	 */
	virtual void read_ErrorCounters(Tango::Attribute &attr);
	virtual bool is_ErrorCounters_allowed(Tango::AttReqType type);



	/**
	 *	Temperatures attribute related methods.
	 *	Description: Temperature measurements for the three poles.
	 *
	 *	Data type:	Tango::DevDouble
	 *	Attr type:	Spectrum  max = 6
	 */
	virtual void read_Temperatures(Tango::Attribute &attr);
	virtual bool is_Temperatures_allowed(Tango::AttReqType type);




	/**
	 *	Method      : Itest2811Controller::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	void add_dynamic_attributes();

//	Command related methods
public: 
	/**
	 *	Command State related methods.
	 */
	virtual Tango::DevState dev_state();

	/**
	 *	Command Status related methods.
	 */
	virtual Tango::ConstDevString dev_status();

	/**
	 *	Command On related methods.
	 */
	virtual void on();
	virtual bool is_On_allowed(const CORBA::Any &any);

	/**
	 *	Command Off related methods.
	 */
	virtual void off();
	virtual bool is_Off_allowed(const CORBA::Any &any);

	/**
	 *	Command Reset related methods.
	 */
	virtual void reset();
	virtual bool is_Reset_allowed(const CORBA::Any &any);



	/*----- PROTECTED REGION ID(Itest2811Controller::Additional Method prototypes) ENABLED START -----*/

	//	Additional Method prototypes

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::Additional Method prototypes

};

	/*----- PROTECTED REGION ID(Itest2811Controller::Additional Classes Definitions) ENABLED START -----*/

	//	Additional Classes definitions

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::Additional Classes Definitions

} //	namespace

#endif	//	ITEST2811CONTROLLER_H
