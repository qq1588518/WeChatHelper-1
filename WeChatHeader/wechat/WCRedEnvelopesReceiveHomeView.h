//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class MMWebImageView, NSDictionary, UIButton, UIImageView, UIView;

@interface WCRedEnvelopesReceiveHomeView : MMUIView
{
    id <WCRedEnvelopesReceiveHomeViewDelegate> m_delegate;
    UIImageView *m_backgroundView;
    UIButton *openRedEnvelopesButton;
    UIImageView *openAnimationImageView;
    struct CGRect m_frame;
    NSDictionary *m_dicBaseInfo;
    _Bool m_bSuccessAnmation;
    UIView *oRedView;
    UIView *oTopHeaderView;
    MMWebImageView *imageView;
    MMWebImageView *maskImageView;
}

- (void).cxx_destruct;
- (void)OnCancelButtonDone;
- (void)OnOpenList;
- (void)OnOpenRedEnvelopes;
- (void)endAnimation;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (void)refreshViewWithData:(id)arg1;
- (void)removeView;
- (void)showAnimation;
- (void)showSuccessOpenAnimation;
- (void)startReceiveAnimation;
- (void)stopReceiveAnimation;

@end

