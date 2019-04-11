/*----- PROTECTED REGION ID(RA153_18Class.h) ENABLED START -----*/
//=============================================================================
//
// file :        RA153_18Class.h
//
// description : Include for the RA153_18 root class.
//               This class is the singleton class for
//                the RA153_18 device class.
//               It contains all properties and methods which the 
//               RA153_18 requires only once e.g. the commands.
//
// project :     
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
//
// PNPI Kirill Pshenichny (c) 2019
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef RA153_18Class_H
#define RA153_18Class_H

#include <tango.h>
#include <RA153_18.h>


/*----- PROTECTED REGION END -----*/	//	RA153_18Class.h


namespace RA153_18_ns
{
/*----- PROTECTED REGION ID(RA153_18Class::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	RA153_18Class::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute rPosition class definition
class rPositionAttrib: public Tango::Attr
{
public:
	rPositionAttrib():Attr("rPosition",
			Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~rPositionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<RA153_18 *>(dev))->read_rPosition(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<RA153_18 *>(dev))->write_rPosition(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<RA153_18 *>(dev))->is_rPosition_allowed(ty);}
};

//	Attribute aPosition class definition
class aPositionAttrib: public Tango::Attr
{
public:
	aPositionAttrib():Attr("aPosition",
			Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~aPositionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<RA153_18 *>(dev))->read_aPosition(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<RA153_18 *>(dev))->write_aPosition(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<RA153_18 *>(dev))->is_aPosition_allowed(ty);}
};

//	Attribute LeftEnd class definition
class LeftEndAttrib: public Tango::Attr
{
public:
	LeftEndAttrib():Attr("LeftEnd",
			Tango::DEV_BOOLEAN, Tango::READ) {};
	~LeftEndAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<RA153_18 *>(dev))->read_LeftEnd(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<RA153_18 *>(dev))->is_LeftEnd_allowed(ty);}
};

//	Attribute RightEnd class definition
class RightEndAttrib: public Tango::Attr
{
public:
	RightEndAttrib():Attr("RightEnd",
			Tango::DEV_BOOLEAN, Tango::READ) {};
	~RightEndAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<RA153_18 *>(dev))->read_RightEnd(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<RA153_18 *>(dev))->is_RightEnd_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command Stop class definition
class StopClass : public Tango::Command
{
public:
	StopClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	StopClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~StopClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<RA153_18 *>(dev))->is_Stop_allowed(any);}
};


/**
 *	The RA153_18Class singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  RA153_18Class : public Tango::DeviceClass
#else
class RA153_18Class : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(RA153_18Class::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	RA153_18Class::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static RA153_18Class *init(const char *);
		static RA153_18Class *instance();
		~RA153_18Class();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		RA153_18Class(string &);
		static RA153_18Class *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void pipe_factory();
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

}	//	End of namespace

#endif   //	RA153_18_H
