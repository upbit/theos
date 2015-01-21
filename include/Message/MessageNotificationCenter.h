/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import "WeakReferenceHolder.h"
#import <Foundation/NSNotification.h>

@class NSMutableArray, NSMutableDictionary;

@interface MessageNotificationCenter : NSNotificationCenter <WeakReferenceHolder> {
	NSMutableDictionary* _notificationMapping;
	NSMutableArray* _queuedObjects;
	int _generationNumber;
}
// in a protocol: -(void)dealloc;
// inherited: -(void)addObserver:(id)observer selector:(SEL)selector name:(id)name object:(id)object;
-(id)copyAllObserversForNotificationName:(id)notificationName andObject:(id)object;
// inherited: -(void)postNotification:(id)notification;
// inherited: -(void)postNotificationName:(id)name object:(id)object userInfo:(id)info;
-(void)_removeEntryForObserver:(id)observer name:(id)name object:(id)object;
// inherited: -(void)removeObserver:(id)observer name:(id)name object:(id)object;
// in a protocol: -(void)objectWillBeDeallocated:(id)object;
-(id)copyWithZone:(NSZone*)zone;
// in a protocol: -(id)retain;
-(void)release;
// in a protocol: -(unsigned)retainCount;
@end

