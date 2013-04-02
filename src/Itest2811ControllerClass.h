/*----- PROTECTED REGION ID(Itest2811ControllerClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        Itest2811ControllerClass.h
//
// description : Include for the Itest2811ControllerClass root class.
//               This class is the singleton class for.
//               the Itest2811Controller device class..
//               It contains all properties and methods which the .
//               Itest2811Controller requires only once e.g. the commands.
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


#ifndef ITEST2811CONTROLLERCLASS_H
#define ITEST2811CONTROLLERCLASS_H

#include <tango.h>
#include <Itest2811Controller.h>

/*----- PROTECTED REGION END -----*/

namespace Itest2811Controller_ns
{
	/*----- PROTECTED REGION ID(Itest2811Controller::classes for dynamic creation) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::classes for dynamic creation



//=========================================
//	Define classes for attributes
//=========================================
//	Attribute Currents class definition
class CurrentsAttrib: public Tango::SpectrumAttr
{
public:
	CurrentsAttrib():SpectrumAttr("Currents",
	                   Tango::DEV_DOUBLE, Tango::READ_WRITE, 3) {};
	~CurrentsAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Itest2811Controller *>(dev))->read_Currents(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Itest2811Controller *>(dev))->write_Currents(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Itest2811Controller *>(dev))->is_Currents_allowed(ty);}
};

//	Attribute Voltages class definition
class VoltagesAttrib: public Tango::SpectrumAttr
{
public:
	VoltagesAttrib():SpectrumAttr("Voltages",
	                   Tango::DEV_DOUBLE, Tango::READ, 3) {};
	~VoltagesAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Itest2811Controller *>(dev))->read_Voltages(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Itest2811Controller *>(dev))->is_Voltages_allowed(ty);}
};

//	Attribute Impedances class definition
class ImpedancesAttrib: public Tango::SpectrumAttr
{
public:
	ImpedancesAttrib():SpectrumAttr("Impedances",
	                   Tango::DEV_DOUBLE, Tango::READ, 3) {};
	~ImpedancesAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Itest2811Controller *>(dev))->read_Impedances(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Itest2811Controller *>(dev))->is_Impedances_allowed(ty);}
};

//	Attribute SetCurrentsRMS class definition
class SetCurrentsRMSAttrib: public Tango::SpectrumAttr
{
public:
	SetCurrentsRMSAttrib():SpectrumAttr("SetCurrentsRMS",
	                   Tango::DEV_DOUBLE, Tango::READ, 3) {};
	~SetCurrentsRMSAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Itest2811Controller *>(dev))->read_SetCurrentsRMS(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Itest2811Controller *>(dev))->is_SetCurrentsRMS_allowed(ty);}
};

//	Attribute SetCurrentsAverage class definition
class SetCurrentsAverageAttrib: public Tango::SpectrumAttr
{
public:
	SetCurrentsAverageAttrib():SpectrumAttr("SetCurrentsAverage",
	                   Tango::DEV_DOUBLE, Tango::READ, 3) {};
	~SetCurrentsAverageAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Itest2811Controller *>(dev))->read_SetCurrentsAverage(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Itest2811Controller *>(dev))->is_SetCurrentsAverage_allowed(ty);}
};

//	Attribute FramesPerSecond class definition
class FramesPerSecondAttrib: public Tango::SpectrumAttr
{
public:
	FramesPerSecondAttrib():SpectrumAttr("FramesPerSecond",
	                   Tango::DEV_ULONG, Tango::READ, 3) {};
	~FramesPerSecondAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Itest2811Controller *>(dev))->read_FramesPerSecond(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Itest2811Controller *>(dev))->is_FramesPerSecond_allowed(ty);}
};

//	Attribute ErrorsPerSecond class definition
class ErrorsPerSecondAttrib: public Tango::SpectrumAttr
{
public:
	ErrorsPerSecondAttrib():SpectrumAttr("ErrorsPerSecond",
	                   Tango::DEV_ULONG, Tango::READ, 3) {};
	~ErrorsPerSecondAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Itest2811Controller *>(dev))->read_ErrorsPerSecond(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Itest2811Controller *>(dev))->is_ErrorsPerSecond_allowed(ty);}
};

//	Attribute ErrorCounters class definition
class ErrorCountersAttrib: public Tango::SpectrumAttr
{
public:
	ErrorCountersAttrib():SpectrumAttr("ErrorCounters",
	                   Tango::DEV_ULONG, Tango::READ, 3) {};
	~ErrorCountersAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Itest2811Controller *>(dev))->read_ErrorCounters(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Itest2811Controller *>(dev))->is_ErrorCounters_allowed(ty);}
};

//	Attribute Temperatures class definition
class TemperaturesAttrib: public Tango::SpectrumAttr
{
public:
	TemperaturesAttrib():SpectrumAttr("Temperatures",
	                   Tango::DEV_DOUBLE, Tango::READ, 6) {};
	~TemperaturesAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Itest2811Controller *>(dev))->read_Temperatures(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Itest2811Controller *>(dev))->is_Temperatures_allowed(ty);}
};






//=========================================
//	Define classes for commands
//=========================================
//	Command On class definition
class OnClass : public Tango::Command
{
public:
	OnClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	OnClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~OnClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Itest2811Controller *>(dev))->is_On_allowed(any);}
};

//	Command Off class definition
class OffClass : public Tango::Command
{
public:
	OffClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	OffClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~OffClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Itest2811Controller *>(dev))->is_Off_allowed(any);}
};

//	Command Reset class definition
class ResetClass : public Tango::Command
{
public:
	ResetClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ResetClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ResetClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Itest2811Controller *>(dev))->is_Reset_allowed(any);}
};





/**
 *	The TemplateDevServClass singleton definition
 */

class
#ifdef _TG_WINDOWS_
	__declspec(dllexport)
#endif
	Itest2811ControllerClass : public Tango::DeviceClass
{
	/*----- PROTECTED REGION ID(Itest2811Controller::Additionnal DServer data members) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Controller::Additionnal DServer data members



public:
//	write class properties data members
	Tango::DbData	cl_prop;
	Tango::DbData	cl_def_prop;
	Tango::DbData	dev_def_prop;

//	Method prototypes
	static Itest2811ControllerClass *init(const char *);
	static Itest2811ControllerClass *instance();
	~Itest2811ControllerClass();
	Tango::DbDatum	get_class_property(string &);
	Tango::DbDatum	get_default_device_property(string &);
	Tango::DbDatum	get_default_class_property(string &);
	
protected:
	Itest2811ControllerClass(string &);
	static Itest2811ControllerClass *_instance;
	void command_factory();
	void attribute_factory(vector<Tango::Attr *> &);
	void write_class_property();
	void set_default_property();
	void get_class_property();
	string get_cvstag();
	string get_cvsroot();

private:
	void device_factory(const Tango::DevVarStringArray *);
	void create_static_attribute_list(vector<Tango::Attr *> &);
	void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
	vector<string>	defaultAttList;
	Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);


};

}	//	namespace

#endif	//	ITEST2811CONTROLLERCLASS_H
