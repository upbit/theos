/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>
#import "UISelectedItemPrivate.h"

@class DOMHTMLOptGroupElement;

@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UISelectedItemPrivate> {
	DOMHTMLOptGroupElement* _node;
}
@property(retain, nonatomic) DOMHTMLOptGroupElement* _node;
-(id)initWithHTMLOptGroupNode:(id)htmloptGroupNode;
-(id)node;
-(BOOL)selected;
-(void)setSelected:(BOOL)selected;
-(void)unselect;
-(void)dealloc;
@end

