//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

@class UIButton, UIImageView, UITextField, UIWindow;

@interface GraphicVerifyWindow : MMUIWindow
{
    UIImageView *m_codeImageView;
    UIButton *m_changeImgBtn;
    UIButton *m_verifyBtn;
    UIButton *m_cancelBtn;
    UITextField *m_textFieldCode;
    id <GraphicVerifyWindowDelegate> m_delegate;
    UIWindow *oldKeyWindow;
}

- (void).cxx_destruct;
- (id)init;
- (void)initHeaderView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)internalInit;
@property(retain, nonatomic) UIImageView *m_codeImageView; // @synthesize m_codeImageView;
- (void)makeKeyAndVisible;
@property(retain, nonatomic) UIWindow *oldKeyWindow; // @synthesize oldKeyWindow;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyChangeImage;
- (void)onNext;
- (void)resignKeyWindow;
- (void)setDelegate:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;

@end

