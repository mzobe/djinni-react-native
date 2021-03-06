// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from main.djinni

#import "RVJavascriptArray.h"
#import "RVJavascriptCallback.h"
#import "RVJavascriptMap.h"
#import "RVJavascriptPromise.h"
#import "RVReactBridge.h"
#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
@class RCDemoModule;

extern NSString * __nonnull const RCDemoModuleEVENTNAME;
extern NSString * __nonnull const RCDemoModuleSTRINGCONSTANT;
extern int32_t const RCDemoModuleINTCONSTANT;
extern double const RCDemoModuleDOUBLECONSTANT;
extern BOOL const RCDemoModuleBOOLCONSTANT;

@interface RCDemoModule : NSObject<RCTBridgeModule>

+ (nullable RCDemoModule *)create:(nullable id<RVReactBridge>)bridge;

- (void)testPromise:(nonnull RCTPromiseResolveBlock)resolver
           rejecter:(nonnull RCTPromiseRejectBlock)rejecter;

- (void)testCallback:(nonnull RCTResponseSenderBlock)callback;

- (void)testMap:(nullable NSDictionary *)map
       resolver:(nonnull RCTPromiseResolveBlock)resolver
       rejecter:(nonnull RCTPromiseRejectBlock)rejecter;

- (void)testArray:(nullable NSArray *)array
         callback:(nonnull RCTResponseSenderBlock)callback;

- (void)testBool:(BOOL)value
        resolver:(nonnull RCTPromiseResolveBlock)resolver
        rejecter:(nonnull RCTPromiseRejectBlock)rejecter;

- (void)testPrimitives:(int)i
                     d:(double)d
              callback:(nonnull RCTResponseSenderBlock)callback;

- (void)testString:(nullable NSString *)value
          resolver:(nonnull RCTPromiseResolveBlock)resolver
          rejecter:(nonnull RCTPromiseRejectBlock)rejecter;

- (void)testEventWithArray:(nullable NSArray *)value;

- (void)testEventWithMap:(nullable NSDictionary *)value;

@end
