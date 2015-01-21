/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import <Foundation/NSObject.h>

@interface NSObject (CKMessageEntryViewDelegate)
-(BOOL)messageEntryView:(id)view contentSizeChanged:(CGSize)changed animate:(BOOL)animate;
-(void)messageEntryViewSendButtonHit:(id)hit;
@end

@interface NSObject (CKSMSComposeControllerDelegate)
-(void)smsComposeControllerDataInserted:(id)inserted;
-(void)smsComposeControllerAppeared:(id)appeared;
-(void)smsComposeControllerCancelled:(id)cancelled;
-(void)smsComposeControllerSendStarted:(id)started;
@end

