/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VMUSection : NSObject {
	NSString* _sectionName;
	NSString* _segmentName;
	unsigned long long _addr;
	unsigned long long _size;
	unsigned _offset;
	unsigned _align;
	unsigned _reloff;
	unsigned _nreloc;
	unsigned _flags;
	unsigned _reserved1;
	unsigned _reserved2;
}
-(BOOL)isSection32;
-(BOOL)isSection64;
-(NSString*)sectionName;
-(NSString*)segmentName;
-(unsigned long long)addr;
-(unsigned long long)size;
-(unsigned)offset;
-(unsigned)align;
-(unsigned)reloff;
-(unsigned)nreloc;
-(unsigned)flags;
-(unsigned)reserved1;
-(unsigned)reserved2;
// inherited: -(id)description;
// inherited: -(void)dealloc;
@end

