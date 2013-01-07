#ifndef _BT_INTEGRATED_DEVICE_H_
#define _BT_INTEGRATED_DEVICE_H_


#include "bt_types.h"
#include "bt_resource.h"


typedef struct _BT_INTEGRATED_DEVICE {
	const BT_i8    	   *name;
	BT_u32				id;
	BT_u32				ulTotalResources;
	const BT_RESOURCE  *pResources;
} BT_INTEGRATED_DEVICE;

#define BT_INTEGRATED_DEVICE_DEF	static const BT_ATTRIBUTE_SECTION(".bt.arch.devices") BT_INTEGRATED_DEVICE

const BT_RESOURCE *BT_GetIntegratedResource(const BT_INTEGRATED_DEVICE *pDevice, BT_u32 ulType, BT_u32 ulNum);

#endif
