/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSURLConnection, NSFileHandle, NSString, NSURL;
@protocol SubCalURLRequestDelegate;

@interface SubCalURLRequest : NSObject {
	NSURL* _url;
	id<SubCalURLRequestDelegate> _delegate;
	NSString* _username;
	NSString* _password;
	double _timestamp;
	NSURLConnection* _connection;
	NSMutableData* _connectionData;
	BOOL _useFileCache;
	NSString* _filePath;
	NSFileHandle* _fileHandle;
	BOOL _sendDataUpdateCallback;
}
@property(readonly, retain, nonatomic) NSURL* url;
@property(assign) id<SubCalURLRequestDelegate> delegate;
@property(retain, nonatomic) NSString* username;
@property(retain, nonatomic) NSString* password;
@property(assign) double timestamp;
@property(assign) BOOL useFileCache;
@property(readonly, retain, nonatomic) NSString* filePath;
@property(retain, nonatomic) NSMutableData* connectionData;
+(id)_cachedICSFilesDirectory;
+(void)_initializeFileCache;
-(id)initWithURL:(id)url;
// inherited: -(void)dealloc;
-(void)_setHeadersOnRequest:(id)request;
-(void)startConnection;
-(void)cancel;
-(void)_finishWithError:(id)error;
-(BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;
-(void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)_openFileHandle;
-(void)_receivedDataForFile:(id)file;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
@end

