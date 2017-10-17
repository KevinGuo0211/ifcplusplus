/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcCurve.h"
#include "ifcpp/IFC4/include/IfcGrid.h"
#include "ifcpp/IFC4/include/IfcGridAxis.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcVirtualGridIntersection.h"

// ENTITY IfcGridAxis 
IfcGridAxis::IfcGridAxis() {}
IfcGridAxis::IfcGridAxis( int id ) { m_id = id; }
IfcGridAxis::~IfcGridAxis() {}
shared_ptr<IfcPPObject> IfcGridAxis::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcGridAxis> copy_self( new IfcGridAxis() );
	if( m_AxisTag ) { copy_self->m_AxisTag = dynamic_pointer_cast<IfcLabel>( m_AxisTag->getDeepCopy(options) ); }
	if( m_AxisCurve ) { copy_self->m_AxisCurve = dynamic_pointer_cast<IfcCurve>( m_AxisCurve->getDeepCopy(options) ); }
	if( m_SameSense ) { copy_self->m_SameSense = dynamic_pointer_cast<IfcBoolean>( m_SameSense->getDeepCopy(options) ); }
	return copy_self;
}
void IfcGridAxis::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCGRIDAXIS" << "(";
	if( m_AxisTag ) { m_AxisTag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_AxisCurve ) { stream << "#" << m_AxisCurve->m_id; } else { stream << "$"; }
	stream << ",";
	if( m_SameSense ) { m_SameSense->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcGridAxis::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcGridAxis::toString() const { return L"IfcGridAxis"; }
void IfcGridAxis::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcGridAxis, expecting 3, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_AxisTag = IfcLabel::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_AxisCurve, map );
	m_SameSense = IfcBoolean::createObjectFromSTEP( args[2], map );
}
void IfcGridAxis::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	vec_attributes.push_back( std::make_pair( "AxisTag", m_AxisTag ) );
	vec_attributes.push_back( std::make_pair( "AxisCurve", m_AxisCurve ) );
	vec_attributes.push_back( std::make_pair( "SameSense", m_SameSense ) );
}
void IfcGridAxis::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	if( m_PartOfW_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> PartOfW_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_PartOfW_inverse.size(); ++i )
		{
			if( !m_PartOfW_inverse[i].expired() )
			{
				PartOfW_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcGrid>( m_PartOfW_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "PartOfW_inverse", PartOfW_inverse_vec_obj ) );
	}
	if( m_PartOfV_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> PartOfV_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_PartOfV_inverse.size(); ++i )
		{
			if( !m_PartOfV_inverse[i].expired() )
			{
				PartOfV_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcGrid>( m_PartOfV_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "PartOfV_inverse", PartOfV_inverse_vec_obj ) );
	}
	if( m_PartOfU_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> PartOfU_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_PartOfU_inverse.size(); ++i )
		{
			if( !m_PartOfU_inverse[i].expired() )
			{
				PartOfU_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcGrid>( m_PartOfU_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "PartOfU_inverse", PartOfU_inverse_vec_obj ) );
	}
	if( m_HasIntersections_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> HasIntersections_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_HasIntersections_inverse.size(); ++i )
		{
			if( !m_HasIntersections_inverse[i].expired() )
			{
				HasIntersections_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcVirtualGridIntersection>( m_HasIntersections_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasIntersections_inverse", HasIntersections_inverse_vec_obj ) );
	}
}
void IfcGridAxis::setInverseCounterparts( shared_ptr<IfcPPEntity> )
{
}
void IfcGridAxis::unlinkFromInverseCounterparts()
{
}