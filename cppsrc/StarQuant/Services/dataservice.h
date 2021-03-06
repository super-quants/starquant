#ifndef _StarQuant_Services_DataService_H_
#define _StarQuant_Services_DataService_H_

#include <memory>
#include <Common/config.h>

namespace StarQuant
{

    //void MarketDataService(std::shared_ptr<marketdatafeed>, int32_t);
    void DataBoardService();
    void BarAggregatorServcie();
    void TickRecordingService();
    void TickReplayService(const std::string& filetoreplay,int32_t tickinterval=0);
}

#endif
