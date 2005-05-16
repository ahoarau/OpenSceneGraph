// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/BoundingBox>
#include <osg/BoundingSphere>
#include <osg/Vec3>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osg::BoundingSphere)
	I_Constructor0();
	I_Constructor2(IN, const osg::Vec3 &, center, IN, float, radius);
	I_Constructor1(IN, const osg::BoundingSphere &, bs);
	I_Constructor1(IN, const osg::BoundingBox &, bb);
	I_Method0(void, init);
	I_Method0(bool, valid);
	I_Method2(void, set, IN, const osg::Vec3 &, center, IN, float, radius);
	I_Method0(osg::Vec3 &, center);
	I_Method0(const osg::Vec3 &, center);
	I_Method0(float &, radius);
	I_Method0(float, radius);
	I_Method0(float, radius2);
	I_Method1(void, expandBy, IN, const osg::Vec3 &, v);
	I_Method1(void, expandRadiusBy, IN, const osg::Vec3 &, v);
	I_Method1(void, expandBy, IN, const osg::BoundingSphere &, sh);
	I_Method1(void, expandRadiusBy, IN, const osg::BoundingSphere &, sh);
	I_Method1(void, expandBy, IN, const osg::BoundingBox &, bb);
	I_Method1(void, expandRadiusBy, IN, const osg::BoundingBox &, bb);
	I_Method1(bool, contains, IN, const osg::Vec3 &, v);
	I_Method1(bool, intersects, IN, const osg::BoundingSphere &, bs);
END_REFLECTOR

