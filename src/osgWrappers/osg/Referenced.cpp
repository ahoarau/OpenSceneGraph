// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Referenced>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osg::DeleteHandler)
	I_Constructor0();
	I_Method0(void, flush);
	I_Method1(void, doDelete, IN, const osg::Referenced *, object);
	I_Method1(void, requestDelete, IN, const osg::Referenced *, object);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Referenced)
	I_Constructor0();
	I_Constructor1(IN, const osg::Referenced &, x);
	I_Method1(void, setThreadSafeRefUnref, IN, bool, threadSafe);
	I_Method0(bool, getThreadSafeRefUnref);
	I_Method0(void, ref);
	I_Method0(void, unref);
	I_Method0(void, unref_nodelete);
	I_Method0(int, referenceCount);
	I_Property(bool, ThreadSafeRefUnref);
END_REFLECTOR

