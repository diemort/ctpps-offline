#ifndef RecoTotemRP_RPRecoDataFormats_RPFittedTrackCollection_h
#define RecoTotemRP_RPRecoDataFormats_RPFittedTrackCollection_h


#include "DataFormats/TotemRPDetId/interface/TotemRPIdTypes.h"
#include "RecoTotemRP/RPRecoDataFormats/interface/RPFittedTrack.h"

#include <map>


class RPFittedTrackCollection : public std::map<unsigned int, RPFittedTrack>
{
};


#endif
