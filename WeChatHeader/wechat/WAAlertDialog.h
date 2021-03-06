//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class MMUILabel, UIButton, UIImageView, UIView;

@interface WAAlertDialog : MMObject
{
    UIButton *_backgroundBtn;
    UIView *_contentView;
    UIImageView *_contentBg;
    MMUILabel *_tipsTitleLabel;
    MMUILabel *_tipsContentLabel;
    id <WAAlertDialogDelegate> _delegate;
    UIView *_view;
}

- (void).cxx_destruct;
- (id)bulidNSAttributedStringText:(id)arg1;
@property(nonatomic) __weak id <WAAlertDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hide;
- (id)initWithWebView:(id)arg1;
- (void)onClickBtn:(id)arg1;
- (void)setButtonColor:(id)arg1 withTag:(long long)arg2;
- (void)setButtonTitle:(id)arg1 cancel:(id)arg2;
- (void)setContent:(id)arg1 title:(id)arg2;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)updateSubViewsFrame;

@end

