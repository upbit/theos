/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "MLMusicLibrary_SQL.h"

@class ML3MusicLibrary;

__attribute__((visibility("hidden")))
@interface ML3MusicLibraryImpl : MLMusicLibrary_SQL {
@private
	ML3MusicLibrary* _library3;
}
+(id)geniusDatabasePath;
+(BOOL)isPersistentIDForPlaylist:(long long)playlist;
+(Class)implClassForEvaluatingQuery:(id)evaluatingQuery;
+(void)recursiveEvaluationLockLock;
+(void)recursiveEvaluationLockUnlock;
+(void)_dbSyncWillBegin;
+(void)_dbSyncDidEnd;
+(void)_dbSaveCoalesceBegin;
+(void)_dbSaveCoalesceEnd;
+(unsigned long long)syncGenerationID;
-(id)initWithBasePath:(id)basePath;
-(void)dealloc;
-(void)mediaFolderPathDidChangeNotification:(id)mediaFolderPath;
-(void)beginPreloadingItems;
-(void)endPreloadingItems;
@end

