/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/Foundation.h>
#import <Availability2.h>

@class SBIcon, SBIconList;

@interface SBMovePlan : NSObject {
	SBIcon* _icon;
	SBIconList* _source;
	SBIconList* _destination;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	NSInteger _index;
#endif
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
	NSInteger _x;
	NSInteger _y;
#endif
}
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(id)initWithIcon:(SBIcon *)icon index:(NSInteger)index source:(SBIconList *)source destination:(SBIconList *)destination;
-(NSInteger)index;
#endif
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
-(id)initWithIcon:(SBIcon *)icon x:(NSInteger)x y:(NSInteger)y source:(SBIconList *)source destination:(SBIconList *)destination;
-(NSInteger)x;
-(NSInteger)y;
#endif
// inherited: -(void)dealloc;
-(SBIconList *)destination;
-(SBIconList *)source;
-(SBIcon *)icon;
@end

