/****************************************************************************
*
* This is a part of TOTEM offline software.
* Authors: 
*  Jan Kašpar (jan.kaspar@gmail.com) 
*
****************************************************************************/

#include "TotemAnalysis/TotemNtuplizer/interface/RawMetaDataNtuplizer.h"

// TODO: use DataFormats/TotemDigi/interface/TotemTriggerCounters.h instead
//#include "DataFormats/TotemDigi/interface/TotemRawEvent.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/ESHandle.h"

#include "TTree.h"

#include <map>

using namespace std;
using namespace edm;

ClassImp(EventMetaData)

//----------------------------------------------------------------------------------------------------

RawMetaDataNtuplizer::RawMetaDataNtuplizer(const edm::ParameterSet &ps) : Ntuplizer(ps),
    fedInfosLabel(ps.getParameter< edm::InputTag >("FEDInfosLabel"))
{
}

//----------------------------------------------------------------------------------------------------

void RawMetaDataNtuplizer::CreateBranches(const edm::EventSetup&, TTree *tree)
{
  tree->Branch("event_info.", &data);
}

//----------------------------------------------------------------------------------------------------

void RawMetaDataNtuplizer::FillEvent(const edm::Event &event, const edm::EventSetup &es)
{
  // use fedInfosLabel
  /*
  Handle< TotemRawEvent > input;
  event.getByLabel(rawEventLabel, input);
  */

  data.run_no = event.id().run();
  data.event_no = event.id().event();
  data.timestamp = event.time().unixTime();
  data.daq_event_number = 0;

  /*
  data.optoRx_Id.clear();
  data.optoRx_BX.clear();
  data.optoRx_LV1.clear();
  for (const auto &it : input->getOptoRxMetaData())
  {
    data.optoRx_Id.push_back(it.first);
    data.optoRx_BX.push_back(it.second.BX);
    data.optoRx_LV1.push_back(it.second.LV1);
  }

  */
}
