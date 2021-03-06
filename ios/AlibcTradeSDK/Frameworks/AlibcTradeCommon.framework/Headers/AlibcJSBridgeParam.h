/*
 * AlibcJSBridgeParam.h 
 *
 * 阿里百川电商
 * 项目名称：阿里巴巴电商 AlibcTradeCommon 
 * 版本号：3.1.1.93
 * 发布时间：2017-03-06
 * 开发团队：阿里巴巴百川商业化团队
 * 阿里巴巴电商SDK答疑群号：1229144682(阿里旺旺)
 * Copyright (c) 2016-2019 阿里巴巴-移动事业群-百川. All rights reserved.
 */

#import <Foundation/Foundation.h>

#ifndef AlibcJSBridgeParam_h
#define AlibcJSBridgeParam_h

@interface AlibcJSBridgeParam : NSObject
@property(nonatomic, copy) NSString *className;
@property(nonatomic, copy) NSString *requestId;
@property(nonatomic, copy) NSString *methodName;
@property(nonatomic, copy) NSDictionary *param;

- (instancetype)initWithURL:(NSURL *)url;

- (BOOL)isDataRight;
@end

@interface AlibcJSBridgeResult : NSObject
@property(nonatomic, strong) NSString *code;
@property(nonatomic, strong) NSString *msg;
@property(nonatomic, strong) NSDictionary *data;

+ (instancetype)build:(NSDictionary *)data;

+ (instancetype)build:(NSString *)code message:(NSString *)message data:(NSDictionary *)data;
@end

#endif
