/*----- PROTECTED REGION ID(Itest2811ChannelClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        Itest2811ChannelClass.h
//
// description : Include for the Itest2811ChannelClass root class.
//               This class is the singleton class for.
//               the Itest2811Channel device class..
//               It contains all properties and methods which the .
//               Itest2811Channel requires only once e.g. the commands.
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


#ifndef ITEST2811CHANNELCLASS_H
#define ITEST2811CHANNELCLASS_H

#include <tango.h>
#include <Itest2811Channel.h>

/*----- PROTECTED REGION END -----*/

namespace Itest2811Channel_ns
{
	/*----- PROTECTED REGION ID(Itest2811Channel::classes for dynamic creation) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::classes for dynamic creation



//=========================================
//	Define classes for attributes
//=========================================
//	Attribute Current class definition
class CurrentAttrib: public Tango::Attr
{
public:
	CurrentAttrib():Attr("Current",
	                   Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~CurrentAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Itest2811Channel *>(dev))->read_Current(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Itest2811Channel *>(dev))->write_Current(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Itest2811Channel *>(dev))->is_Current_allowed(ty);}
};

//	Attribute Voltage class definition
class VoltageAttrib: public Tango::Attr
{
public:
	VoltageAttrib():Attr("Voltage",
	                   Tango::DEV_DOUBLE, Tango::READ) {};
	~VoltageAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Itest2811Channel *>(dev))->read_Voltage(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Itest2811Channel *>(dev))->is_Voltage_allowed(ty);}
};

//	Attribute Impedance class definition
class ImpedanceAttrib: public Tango::Attr
{
public:
	ImpedanceAttrib():Attr("Impedance",
	                   Tango::DEV_DOUBLE, Tango::READ) {};
	~ImpedanceAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Itest2811Channel *>(dev))->read_Impedance(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Itest2811Channel *>(dev))->is_Impedance_allowed(ty);}
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
	{return (static_cast<Itest2811Channel *>(dev))->is_On_allowed(any);}
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
	{return (static_cast<Itest2811Channel *>(dev))->is_Off_allowed(any);}
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
	{return (static_cast<Itest2811Channel *>(dev))->is_Reset_allowed(any);}
};





/**
 *	The TemplateDevServClass singleton definition
 */

class
#ifdef _TG_WINDOWS_
	__declspec(dllexport)
#endif
	Itest2811ChannelClass : public Tango::DeviceClass
{
	/*----- PROTECTED REGION ID(Itest2811Channel::Additionnal DServer data members) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::Additionnal DServer data members



public:
//	write class properties data members
	Tango::DbData	cl_prop;
	Tango::DbData	cl_def_prop;
	Tango::DbData	dev_def_prop;

//	Method prototypes
	static Itest2811ChannelClass *init(const char *);
	static Itest2811ChannelClass *instance();
	~Itest2811ChannelClass();
	Tango::DbDatum	get_class_property(string &);
	Tango::DbDatum	get_default_device_property(string &);
	Tango::DbDatum	get_default_class_property(string &);
	
protected:
	Itest2811ChannelClass(string &);
	static Itest2811ChannelClass *_instance;
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

#endif	//	ITEST2811CHANNELCLASS_H

