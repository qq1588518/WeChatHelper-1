//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JSApiScopeConfirmWindow, MMBrandHeadImageView, NSMutableArray, NSString, UIButton, UILabel, UITableView;

@interface JSAPIScopeConfirmContainterView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UIView *_titleSplitLine;
    MMBrandHeadImageView *_appIconImageView;
    UILabel *_scopeDescriptionLabel;
    UIView *_tableSplitLine;
    UITableView *_scopeTableView;
    UIView *_buttonSplitLine;
    UIView *_buttonVerticalSpliteLine;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    NSMutableArray *_arrSelect;
    JSApiScopeConfirmWindow *_weakConfirmWindow;
}

- (void).cxx_destruct;
- (id)confirmWindow;
- (struct CGRect)contentViewFrame;
- (unsigned long long)designContentWidth;
- (double)designNoTableContentHeightToContentWidthRatio;
- (double)designTableHeightToContentWidthRatio;
- (void)initData;
- (void)initTableView;
- (void)initView;
- (void)layoutSubviews;
- (void)onClickButtonCancel:(id)arg1;
- (void)onClickButtonConfirm:(id)arg1;
@property(nonatomic) __weak JSApiScopeConfirmWindow *weakConfirmWindow; // @synthesize weakConfirmWindow=_weakConfirmWindow;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titleText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
