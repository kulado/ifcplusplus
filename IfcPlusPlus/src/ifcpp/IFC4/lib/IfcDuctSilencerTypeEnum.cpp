/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDuctSilencerTypeEnum.h"

// TYPE IfcDuctSilencerTypeEnum = ENUMERATION OF	(FLATOVAL	,RECTANGULAR	,ROUND	,USERDEFINED	,NOTDEFINED);
IfcDuctSilencerTypeEnum::IfcDuctSilencerTypeEnum() {}
IfcDuctSilencerTypeEnum::~IfcDuctSilencerTypeEnum() {}
shared_ptr<IfcPPObject> IfcDuctSilencerTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcDuctSilencerTypeEnum> copy_self( new IfcDuctSilencerTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDuctSilencerTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDUCTSILENCERTYPEENUM("; }
	if( m_enum == ENUM_FLATOVAL )
	{
		stream << ".FLATOVAL.";
	}
	else if( m_enum == ENUM_RECTANGULAR )
	{
		stream << ".RECTANGULAR.";
	}
	else if( m_enum == ENUM_ROUND )
	{
		stream << ".ROUND.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcDuctSilencerTypeEnum> IfcDuctSilencerTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDuctSilencerTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDuctSilencerTypeEnum>(); }
	shared_ptr<IfcDuctSilencerTypeEnum> type_object( new IfcDuctSilencerTypeEnum() );
	if( boost::iequals( arg, L".FLATOVAL." ) )
	{
		type_object->m_enum = IfcDuctSilencerTypeEnum::ENUM_FLATOVAL;
	}
	else if( boost::iequals( arg, L".RECTANGULAR." ) )
	{
		type_object->m_enum = IfcDuctSilencerTypeEnum::ENUM_RECTANGULAR;
	}
	else if( boost::iequals( arg, L".ROUND." ) )
	{
		type_object->m_enum = IfcDuctSilencerTypeEnum::ENUM_ROUND;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDuctSilencerTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDuctSilencerTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}