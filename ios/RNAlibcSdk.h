
// #if __has_include("RCTBridgeModule.h")
// #import "RCTBridgeModule.h"
// #else
// #import <React/RCTBridgeModule.h>
// #endif

#if __has_include(<React/RCTBridgeModule.h>)
  #import <React/RCTBridgeModule.h>
#else
  #import "RCTBridgeModule.h"
#endif

@interface RNAlibcSdk : NSObject <RCTBridgeModule>

@end
  