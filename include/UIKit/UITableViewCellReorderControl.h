/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIControl.h>
#import "UIKit-Structs.h"

@class UITableViewCell;

@interface UITableViewCellReorderControl : UIControl {
	UITableViewCell* _cell;
	CGPoint _downPoint;
}
+(id)grabberImage;
+(CGSize)defaultSize;
-(id)initWithTableViewCell:(id)tableViewCell;
-(void)layoutSubviews;
-(BOOL)shouldTrack;
-(void)setFrame:(CGRect)frame;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)cancelTrackingWithEvent:(id)event;
@end

