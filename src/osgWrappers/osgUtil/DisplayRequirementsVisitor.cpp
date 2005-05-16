// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/DisplaySettings>
#include <osg/Geode>
#include <osg/Node>
#include <osg/StateSet>
#include <osgUtil/DisplayRequirementsVisitor>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgUtil::DisplayRequirementsVisitor)
	I_BaseType(osg::NodeVisitor);
	I_Constructor0();
	I_Method1(void, setDisplaySettings, IN, osg::DisplaySettings *, ds);
	I_Method0(const osg::DisplaySettings *, getDisplaySettings);
	I_Method1(void, applyStateSet, IN, osg::StateSet &, stateset);
	I_Method1(void, apply, IN, osg::Node &, node);
	I_Method1(void, apply, IN, osg::Geode &, geode);
	I_WriteOnlyProperty(osg::DisplaySettings *, DisplaySettings);
END_REFLECTOR

