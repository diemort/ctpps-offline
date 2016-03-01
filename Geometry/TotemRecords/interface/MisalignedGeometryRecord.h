/****************************************************************************
*
* This is a part of TOTEM offline software.
* Authors: 
*	Jan Kaspar (jan.kaspar@gmail.com) 
*    
* $$RCSfile: MisalignedGeometryRecord.h,v $: $
* $Revision: 9977 $
* $Date: 2015-01-12 15:00:26 +0100 (Mon, 12 Jan 2015) $
*
****************************************************************************/

#ifndef RECORDS_MISALIGNEDGEOMETRYRECORD_H
#define RECORDS_MISALIGNEDGEOMETRYRECORD_H

#include "FWCore/Framework/interface/DependentRecordImplementation.h"
#include "Geometry/TotemRecords/interface/MeasuredGeometryRecord.h"

#include "boost/mpl/vector.hpp"

#include "TotemAlignment/RPRecords/interface/RPMisalignedAlignmentRecord.h"

/**
 * \ingroup TotemRPGeometry
 * \brief Event setup record containing the misaligned geometry information. It is used for 
 * alignment studies only.
 **/
class MisalignedGeometryRecord : public edm::eventsetup::DependentRecordImplementation
						   <MisalignedGeometryRecord, boost::mpl::vector<MeasuredGeometryRecord, RPMisalignedAlignmentRecord /*, ... */> >
{
};

#endif

