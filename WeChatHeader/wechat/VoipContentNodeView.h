//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

@class UIImageView;

@interface VoipContentNodeView : BaseMessageNodeView
{
    UIImageView *m_oUnreadImageView;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)asyncStartNetDetect;
- (void)dealloc;
- (void)layoutSubviewsInternal;
@property(retain, nonatomic) UIImageView *m_oUnreadImageView; // @synthesize m_oUnreadImageView;
- (void)onClearResource;
- (void)onClicked;
- (void)onDisappear;
- (void)onLongPressed;
- (void)onLongTouch;
- (void)onMenuItemWillHide;
- (void)onMoreOperate:(id)arg1;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)startVideoVoip;
- (void)startVoiceVoip;
- (void)tapVoiceVoipNodeView;
- (void)tapVoipNodeView;
- (void)updateBkgImage:(_Bool)arg1;
- (void)updateStatus:(id)arg1;

@end

