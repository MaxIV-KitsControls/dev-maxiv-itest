/*----- PROTECTED REGION ID(Itest2811ChannelClass.cpp) ENABLED START -----*/
static const char *RcsId      = "$Id:  $";
static const char *TagName    = "$Name:  $";
static const char *CvsPath    = "$Source:  $";
static const char *SvnPath    = "$HeadURL:  $";
static const char *HttpServer = "http://www.esrf.eu/computing/cs/tango/tango_doc/ds_doc/";
//=============================================================================
//
// file :        Itest2811ChannelClass.cpp
//
// description : C++ source for the Itest2811ChannelClass. A singleton
//               class derived from DeviceClass. It implements the
//               command list and all properties and methods required
//               by the �name� once per process.
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


#include <Itest2811ChannelClass.h>

/*----- PROTECTED REGION END -----*/

//-------------------------------------------------------------------
/**
 *	Create Itest2811ChannelClass singleton and
 *	return it in a C function for Python usage
 */
//-------------------------------------------------------------------
extern "C" {
#ifdef _TG_WINDOWS_

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_Itest2811Channel_class(const char *name) {
		return Itest2811Channel_ns::Itest2811ChannelClass::init(name);
	}
}


namespace Itest2811Channel_ns
{


//===================================================================
//	Initialize pointer for singleton pattern
//===================================================================
Itest2811ChannelClass *Itest2811ChannelClass::_instance = NULL;

//--------------------------------------------------------
/**
 * method : 		Itest2811ChannelClass::Itest2811ChannelClass(string &s)
 * description : 	constructor for the Itest2811ChannelClass
 *
 * @param s	The class name
 */
//--------------------------------------------------------
Itest2811ChannelClass::Itest2811ChannelClass(string &s):DeviceClass(s)
{
	cout2 << "Entering Itest2811ChannelClass constructor" << endl;
	set_default_property();
	get_class_property();
	write_class_property();

	/*----- PROTECTED REGION ID(Itest2811Channel::Class::constructor) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::Class::constructor

	cout2 << "Leaving Itest2811ChannelClass constructor" << endl;
}


//--------------------------------------------------------
/**
 * method : 		Itest2811ChannelClass::~Itest2811ChannelClass()
 * description : 	destructor for the Itest2811ChannelClass
 */
//--------------------------------------------------------
Itest2811ChannelClass::~Itest2811ChannelClass()
{
	/*----- PROTECTED REGION ID(Itest2811Channel::Class::destructor) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::Class::destructor

	_instance = NULL;
}


//--------------------------------------------------------
/**
 * method : 		Itest2811ChannelClass::init
 * description : 	Create the object if not already done.
 *                  Otherwise, just return a pointer to the object
 *
 * @param	name	The class name
 */
//--------------------------------------------------------
Itest2811ChannelClass *Itest2811ChannelClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new Itest2811ChannelClass(s);
		}
		catch (bad_alloc)
		{
			throw;
		}		
	}		
	return _instance;
}

//--------------------------------------------------------
/**
 * method : 		Itest2811ChannelClass::instance
 * description : 	Check if object already created,
 *                  and return a pointer to the object
 */
//--------------------------------------------------------
Itest2811ChannelClass *Itest2811ChannelClass::instance()
{
	if (_instance == NULL)
	{
		cerr << "Class is not initialised !!" << endl;
		exit(-1);
	}
	return _instance;
}




//===================================================================
//	Command execution method calls
//===================================================================
//--------------------------------------------------------
/**
 * method : 		OnClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *OnClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "OnClass::execute(): arrived" << endl;

	
	((static_cast<Itest2811Channel *>(device))->on());
	return new CORBA::Any();
}
//--------------------------------------------------------
/**
 * method : 		OffClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *OffClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "OffClass::execute(): arrived" << endl;

	
	((static_cast<Itest2811Channel *>(device))->off());
	return new CORBA::Any();
}
//--------------------------------------------------------
/**
 * method : 		ResetClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *ResetClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "ResetClass::execute(): arrived" << endl;

	
	((static_cast<Itest2811Channel *>(device))->reset());
	return new CORBA::Any();
}




//===================================================================
//	Properties management
//===================================================================

//--------------------------------------------------------
/**
 * method : 		Itest2811ChannelClass::get_class_property
 * description : 	Get the class property for specified name.
 *
 * @param	name  The property name
 */
//--------------------------------------------------------
Tango::DbDatum Itest2811ChannelClass::get_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, returns  an empty DbDatum
	return Tango::DbDatum(prop_name);
}


//--------------------------------------------------------
/**
 *	Method      : Itest2811Channel::Itest2811ChannelClass::get_default_device_property()()
 *	Description : Return the default value for device property.
 */
//--------------------------------------------------------
Tango::DbDatum Itest2811ChannelClass::get_default_device_property(string &prop_name)
{
	for (unsigned int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}


//--------------------------------------------------------
/**
 *	Method      : Itest2811Channel::Itest2811ChannelClass::get_default_class_property()()
 *	Description : Return the default value for class property.
 */
//--------------------------------------------------------
Tango::DbDatum Itest2811ChannelClass::get_default_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}


//--------------------------------------------------------
/**
 *	Method      : Itest2811Channel::Itest2811ChannelClass::get_class_property()
 *	Description : //	Add your own code to initialize
 */
//--------------------------------------------------------
void Itest2811ChannelClass::get_class_property()
{
}


//--------------------------------------------------------
/**
 *	Method      : Itest2811Channel::Itest2811ChannelClass::set_default_property()
 *	Description : Set default property (class and device) for wizard.
 *	              For each property, add to wizard property name and description.
 *	              If default value has been set, add it to wizard property and.
 *	              store it in a DbDatum.
 */
//--------------------------------------------------------
void Itest2811ChannelClass::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;
	vector<string>	vect_data;
	
	//	Set Default Class Properties

	//	Set Default Device Properties

	prop_name = "Magnet";
	prop_desc = "Name of the Magnet";
	prop_def  = "none\n";
	vect_data.clear();
	vect_data.push_back("none");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "Pole";
	prop_desc = "The number of the channel or Pole of the Bilt power supply [1-5]";
	prop_def  = "-1\n";
	vect_data.clear();
	vect_data.push_back("-1");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "IP";
	prop_desc = "";
	prop_def  = "127.0.0.1\n";
	vect_data.clear();
	vect_data.push_back("127.0.0.1");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "Channel";
	prop_desc = "Channel number corresponds to the location of the powersupply card in the controller rack";
	prop_def  = "";
	vect_data.clear();
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
}


//--------------------------------------------------------
/**
 *	Method      : Itest2811Channel::Itest2811ChannelClass::write_class_property()
 *	Description : Set class description fields as property in database
 */
//--------------------------------------------------------
void Itest2811ChannelClass::write_class_property()
{
	//	First time, check if database used
	if (Tango::Util::_UseDb == false)
		return;

	Tango::DbData	data;
	string	classname = get_name();
	string	header;
	string::size_type	start, end;

	//	Put title
	Tango::DbDatum	title("ProjectTitle");
	string	str_title("BILT channel interface");
	title << str_title;
	data.push_back(title);

	//	Put Description
	Tango::DbDatum	description("Description");
	vector<string>	str_desc;
	str_desc.push_back("The Bilt multi channel power supply has three individual channels. This class offers an interface to an individual channel of the power supply.");
	description << str_desc;
	data.push_back(description);
		
	//	put cvs or svn location
	string	filename("Itest2811Channel");
	filename += "Class.cpp";
	
	// check for cvs information
	string	src_path(CvsPath);
	start = src_path.find("/");
	if (start!=string::npos)
	{
		end   = src_path.find(filename);
		if (end>start)
		{
			string	strloc = src_path.substr(start, end-start);
			//	Check if specific repository
			start = strloc.find("/cvsroot/");
			if (start!=string::npos && start>0)
			{
				string	repository = strloc.substr(0, start);
				if (repository.find("/segfs/")!=string::npos)
					strloc = "ESRF:" + strloc.substr(start, strloc.length()-start);
			}
			Tango::DbDatum	cvs_loc("cvs_location");
			cvs_loc << strloc;
			data.push_back(cvs_loc);
		}
	}
	// check for svn information
	else
	{
		string	src_path(SvnPath);
		start = src_path.find("://");
		if (start!=string::npos)
		{
			end = src_path.find(filename);
			if (end>start)
			{
				header = "$HeadURL: ";
				start = header.length();
				string	strloc = src_path.substr(start, (end-start));
				
				Tango::DbDatum	svn_loc("svn_location");
				svn_loc << strloc;
				data.push_back(svn_loc);
			}
		}
	}

	//	Get CVS or SVN revision tag
	
	// CVS tag
	string	tagname(TagName);
	header = "$Name: ";
	start = header.length();
	string	endstr(" $");
	
	end   = tagname.find(endstr);
	if (end!=string::npos && end>start)
	{
		string	strtag = tagname.substr(start, end-start);
		Tango::DbDatum	cvs_tag("cvs_tag");
		cvs_tag << strtag;
		data.push_back(cvs_tag);
	}
	
	// SVN tag
	string	svnpath(SvnPath);
	header = "$HeadURL: ";
	start = header.length();
	
	end   = svnpath.find(endstr);
	if (end!=string::npos && end>start)
	{
		string	strloc = svnpath.substr(start, end-start);
		
		string tagstr ("/tags/");
		start = strloc.find(tagstr);
		if ( start!=string::npos )
		{
			start = start + tagstr.length();
			end   = strloc.find(filename);
			string	strtag = strloc.substr(start, end-start-1);
			
			Tango::DbDatum	svn_tag("svn_tag");
			svn_tag << strtag;
			data.push_back(svn_tag);
		}
	}

	//	Get URL location
	string	httpServ(HttpServer);
	if (httpServ.length()>0)
	{
		Tango::DbDatum	db_doc_url("doc_url");
		db_doc_url << httpServ;
		data.push_back(db_doc_url);
	}

	//  Put inheritance
	Tango::DbDatum	inher_datum("InheritedFrom");
	vector<string> inheritance;
	inheritance.push_back("Device_4Impl");
	inher_datum << inheritance;
	data.push_back(inher_datum);

	//	Call database and and values
	get_db_class()->put_property(data);
}




//===================================================================
//	Factory methods
//===================================================================


//--------------------------------------------------------
/**
 * method : 		Itest2811ChannelClass::device_factory
 * description : 	Create the device object(s)
 *                  and store them in the device list
 *
 * @param	*devlist_ptr	The device name list
 */
//--------------------------------------------------------
void Itest2811ChannelClass::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{

	/*----- PROTECTED REGION ID(Itest2811Channel::Class::device_factory_before) ENABLED START -----*/

	//	Add your own code

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::Class::device_factory_before

	//	Create devices and add it into the device list
	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
		device_list.push_back(new Itest2811Channel(this, (*devlist_ptr)[i]));							 
	}

	//	Manage dynamic attributes if any
	erase_dynamic_attributes(devlist_ptr, get_class_attr()->get_attr_list());

	//	Export devices to the outside world
	for (unsigned long i=1 ; i<=devlist_ptr->length() ; i++)
	{
		//	Add dynamic attributes if any
		Itest2811Channel *dev = static_cast<Itest2811Channel *>(device_list[device_list.size()-i]);
		dev->add_dynamic_attributes();

		//	Check before if database used.
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(dev);
		else
			export_device(dev, dev->get_name().c_str());
	}

	/*----- PROTECTED REGION ID(Itest2811Channel::Class::device_factory_after) ENABLED START -----*/

	//	Add your own code

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::Class::device_factory_after

	
}


//--------------------------------------------------------
/**
 *	Method      : Itest2811Channel::Itest2811ChannelClass::attribute_factory()
 *	Description : Create the attribute object(s)
 *	              and store them in the attribute list
 */
//--------------------------------------------------------
void Itest2811ChannelClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	/*----- PROTECTED REGION ID(Itest2811Channel::Class::attribute_factory_before) ENABLED START -----*/

	//	Add your own code

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::Class::attribute_factory_before

	//	Attribute : Current
	CurrentAttrib	*current = new CurrentAttrib();
	Tango::UserDefaultAttrProp	current_prop;
	current_prop.set_description("The DC current of the selected pole.");
	current_prop.set_label("DC Current");
	current_prop.set_unit("A");
	//	standard_unit	not set for	Current
	//	display_unit	not set for	Current
	current_prop.set_format("%6.4f");
	current_prop.set_max_value("5.0");
	current_prop.set_min_value("-5.0");
	//	max_alarm	not set for	Current
	//	min_alarm	not set for	Current
	//	max_warning	not set for	Current
	//	min_warning	not set for	Current
	//	delta_t	not set for	Current
	//	delta_val	not set for	Current

	current->set_default_properties(current_prop);
	current->set_polling_period(0);
	current->set_disp_level(Tango::OPERATOR);
	//	Not memorized

	//	Current does not fire change event
	//	Current does not fire archive event
	//	Current does not fire data_ready event

	att_list.push_back(current);
	
	//	Attribute : Voltage
	VoltageAttrib	*voltage = new VoltageAttrib();
	Tango::UserDefaultAttrProp	voltage_prop;
	voltage_prop.set_description("The measured voltage of the selected pole.");
	voltage_prop.set_label("Voltage");
	voltage_prop.set_unit("V");
	//	standard_unit	not set for	Voltage
	//	display_unit	not set for	Voltage
	voltage_prop.set_format("%6.4f");
	//	max_value	not set for	Voltage
	//	min_value	not set for	Voltage
	//	max_alarm	not set for	Voltage
	//	min_alarm	not set for	Voltage
	//	max_warning	not set for	Voltage
	//	min_warning	not set for	Voltage
	//	delta_t	not set for	Voltage
	//	delta_val	not set for	Voltage

	voltage->set_default_properties(voltage_prop);
	voltage->set_polling_period(0);
	voltage->set_disp_level(Tango::OPERATOR);
	//	Not memorized

	//	Voltage does not fire change event
	//	Voltage does not fire archive event
	//	Voltage does not fire data_ready event

	att_list.push_back(voltage);
	
	//	Attribute : Impedance
	ImpedanceAttrib	*impedance = new ImpedanceAttrib();
	Tango::UserDefaultAttrProp	impedance_prop;
	impedance_prop.set_description("Calculated impedance of the selected pole.");
	impedance_prop.set_label("Impedance");
	impedance_prop.set_unit("Ohm");
	//	standard_unit	not set for	Impedance
	//	display_unit	not set for	Impedance
	impedance_prop.set_format("%4.2f");
	//	max_value	not set for	Impedance
	//	min_value	not set for	Impedance
	//	max_alarm	not set for	Impedance
	//	min_alarm	not set for	Impedance
	//	max_warning	not set for	Impedance
	//	min_warning	not set for	Impedance
	//	delta_t	not set for	Impedance
	//	delta_val	not set for	Impedance

	impedance->set_default_properties(impedance_prop);
	impedance->set_polling_period(0);
	impedance->set_disp_level(Tango::OPERATOR);
	//	Not memorized

	//	Impedance does not fire change event
	//	Impedance does not fire archive event
	//	Impedance does not fire data_ready event

	att_list.push_back(impedance);
	

	//	Create a list of static attributes
	create_static_attribute_list(get_class_attr()->get_attr_list());

	/*----- PROTECTED REGION ID(Itest2811Channel::Class::attribute_factory_after) ENABLED START -----*/

	//	Add your own code

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::Class::attribute_factory_after

}



//--------------------------------------------------------
/**
 *	Method      : Itest2811Channel::Itest2811ChannelClass::command_factory()
 *	Description : Create the command object(s)
 *	              and store them in the command list
 */
//--------------------------------------------------------
void Itest2811ChannelClass::command_factory()
{
	/*----- PROTECTED REGION ID(Itest2811Channel::Class::command_factory_before) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::Class::command_factory_before


	
	//	Create On command object
	OnClass	*pOnCmd =
		new OnClass("On",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::EXPERT);
	command_list.push_back(pOnCmd);


	
	//	Create Off command object
	OffClass	*pOffCmd =
		new OffClass("Off",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::EXPERT);
	command_list.push_back(pOffCmd);


	
	//	Create Reset command object
	ResetClass	*pResetCmd =
		new ResetClass("Reset",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::EXPERT);
	command_list.push_back(pResetCmd);




	/*----- PROTECTED REGION ID(Itest2811Channel::Class::command_factory_after) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::Class::command_factory_after

}




//===================================================================
//	Dynamic attributes related methods
//===================================================================


//--------------------------------------------------------
/**
 * method : 		Itest2811ChannelClass::create_static_attribute_list
 * description : 	Create the a list of static attributes
 *
 * @param	att_list	the ceated attribute list 
 */
//--------------------------------------------------------
void Itest2811ChannelClass::create_static_attribute_list(vector<Tango::Attr *> &att_list)
{
	for (unsigned long i=0 ; i<att_list.size() ; i++)
	{
		string att_name(att_list[i]->get_name());
		transform(att_name.begin(), att_name.end(), att_name.begin(), ::tolower);
		defaultAttList.push_back(att_name);
	}

	cout2 << defaultAttList.size() << " attributes in default list" << endl;


	/*----- PROTECTED REGION ID(Itest2811Channel::Class::create_static_att_list) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::Class::create_static_att_list

}


//--------------------------------------------------------
/**
 * method : 		Itest2811ChannelClass::erase_dynamic_attributes
 * description : 	delete the dynamic attributes if any.
 *
 * @param	devlist_ptr	the device list pointer
 * @param	list of all attributes
 */
//--------------------------------------------------------
void Itest2811ChannelClass::erase_dynamic_attributes(const Tango::DevVarStringArray *devlist_ptr, vector<Tango::Attr *> &att_list)
{
	Tango::Util *tg = Tango::Util::instance();

	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{	
		Tango::DeviceImpl *dev_impl = tg->get_device_by_name(((string)(*devlist_ptr)[i]).c_str());
		Itest2811Channel *dev = static_cast<Itest2811Channel *> (dev_impl);
		
		vector<Tango::Attribute *> &dev_att_list = dev->get_device_attr()->get_attribute_list();
		vector<Tango::Attribute *>::iterator ite_att;
		for (ite_att=dev_att_list.begin() ; ite_att != dev_att_list.end() ; ++ite_att)
		{
			string att_name((*ite_att)->get_name_lower());
			if ((att_name == "state") || (att_name == "status"))
				continue;
			vector<string>::iterator ite_str = find(defaultAttList.begin(), defaultAttList.end(), att_name);
			if (ite_str == defaultAttList.end())
			{
				cout2 << att_name << " is a UNWANTED dynamic attribute for device " << (*devlist_ptr)[i] << endl;
				Tango::Attribute &att = dev->get_device_attr()->get_attr_by_name(att_name.c_str());
				dev->remove_attribute(att_list[att.get_attr_idx()],true);
				--ite_att;
			}
		}
	}
	/*----- PROTECTED REGION ID(Itest2811Channel::Class::erase_dynamic_attributes) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::Class::erase_dynamic_attributes

}



	/*----- PROTECTED REGION ID(Itest2811Channel::Class::Additional Methods) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	Itest2811Channel::Class::Additional Methods

} //	namespace
