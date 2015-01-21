/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <Foundation/NSObject.h>
#import <UIKit/UIColor.h>
#import <Availability2.h>

@class NSString;

@interface UIColor ()
+(void)initialize;
+(id)allocWithZone:(NSZone*)zone;
#if __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_3_2	// these 2 colors are public in 3.2
+(UIColor*)lightTextColor;
+(UIColor*)darkTextColor;
#endif
+(UIColor*)tableSeparatorDarkColor;
+(UIColor*)tableSeparatorLightColor;
+(UIColor*)tableBackgroundColor;
+(UIColor*)tableSelectionColor;
+(UIColor*)sectionListBorderColor;
+(UIColor*)sectionHeaderBackgroundColor;
+(UIColor*)sectionHeaderOpaqueBackgroundColor;
+(UIColor*)sectionHeaderBorderColor;
+(UIColor*)tableCellBlueTextColor;
+(UIColor*)tableCellGrayTextColor;
+(UIColor*)textFieldAtomBlueColor;
+(UIColor*)textFieldAtomPurpleColor;
+(UIColor*)infoTextOverPinStripeTextColor;
-(Class)classForCoder;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)set;
-(void)setFill;
-(void)setStroke;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(CGColorRef)cgColor;
-(NSString*)styleString;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_1
+(UIColor*)tableCellValue1BlueColor;
+(UIColor*)tableCellValue2BlueColor;
#endif
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
+(UIColor*)tableGroupedSeparatorLightColor;
+(UIColor*)tableCellPlainBackgroundColor;
+(UIColor*)tableCellGroupedBackgroundColor;
+(UIColor*)tableShadowColor;
+(UIColor*)tableGroupedTopShadowColor;
-(CGFloat)alphaComponent;
#endif
@end

@interface UIColor (UIColorSystemColorsPrivate)
+(UIColor*)underPageBackgroundColor;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
+(UIColor*)noContentDarkGradientBackgroundColor;
+(UIColor*)noContentLightGradientBackgroundColor;
#endif
@end

