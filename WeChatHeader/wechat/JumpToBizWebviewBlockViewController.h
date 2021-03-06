//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "JumpToBizWebviewLogicHelperDelegate.h"
#import "UIAlertViewDelegate.h"

@class JumpToBizWebviewData, JumpToBizWebviewLogicHelper, MMLoadingView, NSString;

@interface JumpToBizWebviewBlockViewController : MMUIViewController <JumpToBizWebviewLogicHelperDelegate, UIAlertViewDelegate>
{
    JumpToBizWebviewData *_infoData;
    JumpToBizWebviewLogicHelper *_logicHelper;
    MMLoadingView *_loadingView;
    id <JumpToBizWebviewBlockViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <JumpToBizWebviewBlockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithInfoData:(id)arg1;
- (void)onJumpToBizWebview:(int)arg1 WithErrMsg:(id)arg2 WithUrl:(id)arg3;
- (void)onReturn;
- (void)showFailViewWithErrMsg:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

