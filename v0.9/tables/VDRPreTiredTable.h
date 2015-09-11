#ifndef _VDR_PRETIRED_TABLE_H_
#define _VDR_PRETIRED_TABLE_H_

#include "MultiRowWithUniqueIndexTable.h"
#include "LargeTableBase.h"
#include "TableNameDef.h"

using namespace std;

typedef enum
{
    VDR_HY_PRETIRED_DRIVER_LICENSE_NUM=0,
    VDR_HY_PRETIRED_BEGIN_TIME,
    VDR_HY_PRETIRED_BEGIN_LONGITUDE,
    VDR_HY_PRETIRED_BEGIN_LATITUDE,
    VDR_HY_PRETIRED_BEGIN_ALTITUDE,
    VDR_HY_PRETIRED_END_TIME,
    VDR_HY_PRETIRED_END_LONGITUDE,
    VDR_HY_PRETIRED_END_LATITUDE,
    VDR_HY_PRETIRED_END_ALTITUDE,
    VDR_HY_PRETIRED_RUNNING_TIME,
    VDR_HY_PRETIRED_DRIVING_TOTAL_TIME,
    VDR_HY_PRETIRED_METER_TODAY,
    VDR_HY_PRETIRED_RUN_TIME,
    VDR_HY_PRETIRED_FLAG_TIRED,
    VDR_HY_PRETIRED_COLNUM_BUTT
}ENUM_VDR_HY_PRETIRED_COL;

class VDRHyPreTiredTable : public MultiRowWithUniqueIndexTable
{
public:
    VDRHyPreTiredTable();
};

#endif