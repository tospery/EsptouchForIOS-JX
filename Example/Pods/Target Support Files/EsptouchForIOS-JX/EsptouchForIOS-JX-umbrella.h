#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ESPAES.h"
#import "ESPTools.h"
#import "ESPVersionMacro.h"
#import "ESP_ByteUtil.h"
#import "ESP_CRC8.h"
#import "ESP_NetUtil.h"
#import "ESP_WifiUtil.h"

FOUNDATION_EXPORT double EsptouchForIOS_JXVersionNumber;
FOUNDATION_EXPORT const unsigned char EsptouchForIOS_JXVersionString[];

