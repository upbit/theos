/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASTask.h"

@class NSArray;

@interface ASGetOptionsTask : ASTask {
	NSArray* _versionArray;
	NSArray* _commandArray;
}
+(void)__setUsePort:(BOOL)port;
// inherited: -(id)httpMethod;
// inherited: -(id)requestBody;
// inherited: -(BOOL)_shouldAuth;
// inherited: -(int)commandCode;
// inherited: -(BOOL)expectsWBXML;
// inherited: -(int)connectionActionForResponse:(id)response;
// inherited: -(BOOL)processContext:(id)context;
// inherited: -(id)_url;
// inherited: -(void)finishWithError:(id)error;
// inherited: -(void)dealloc;
-(id)versionArray;
-(void)setVersionArray:(id)array;
-(id)commandArray;
-(void)setCommandArray:(id)array;
// inherited: -(BOOL)requiresEASVersionInformaton;
@end

