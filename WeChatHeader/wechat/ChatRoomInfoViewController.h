//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "AddMemLogicDelegate.h"
#import "ChatRoomManagementDelegate.h"
#import "ChatRoomMemberGridViewDelegate.h"
#import "DelMemLogicDelegate.h"
#import "IAutoSetRemarkExt.h"
#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "IOplogExt.h"
#import "MMTableViewInfoDelegate.h"
#import "UIAlertViewDelegate.h"
#import "ViewMemLogicDelegate.h"
#import "WCActionSheetDelegate.h"
#import "contactInfoDelegate.h"
#import "tableViewDelegate.h"

@class AddMemLogic, CContact, ChangeOwnerLogic, DelMemLogic, DelaySwitchSettingLogic, MMTableViewInfo, NSArray, NSIndexPath, NSString, NameEditorViewController, UIButton, UIView, ViewMemLogic;

@interface ChatRoomInfoViewController : MMUIViewController <tableViewDelegate, ChatRoomMemberGridViewDelegate, MMTableViewInfoDelegate, contactInfoDelegate, IContactMgrExt, IGroupMgrExt, UIAlertViewDelegate, WCActionSheetDelegate, IAutoSetRemarkExt, IOplogExt, AddMemLogicDelegate, ViewMemLogicDelegate, DelMemLogicDelegate, ChatRoomManagementDelegate>
{
    CContact *m_chatRoomContact;
    NSArray *m_arrMemberList;
    id <chatRoomInfoDelegate><chatRoomSettingDelegate> m_delegate;
    UIButton *m_muteButton;
    UIView *m_titleView;
    _Bool m_bDeleteStatus;
    _Bool m_bFromAddressBook;
    _Bool m_isChatStatusNotifyOpen;
    MMTableViewInfo *m_tableViewInfo;
    AddMemLogic *m_addMemLogic;
    ViewMemLogic *m_viewMemLogic;
    DelMemLogic *m_delMemLogic;
    ChangeOwnerLogic *m_changeOwnerLogic;
    _Bool m_isShowDislayName;
    _Bool m_bIsShowNotificationSectionIndexAtFirst;
    NSIndexPath *m_notificationSectionIndex;
    _Bool m_bIsShowNickNameSectionIndexAtFirst;
    NSIndexPath *m_showNicknameSectionIndex;
    _Bool m_bIsShowAnnouncementSectionIndexAtFirst;
    NSIndexPath *m_showAnnouncementSectionIndex;
    _Bool m_bEnterDescView;
    unsigned long long m_nCellCnt;
    unsigned long long m_nCellCol;
    NameEditorViewController *m_CurrentVC;
    _Bool m_bIsShowViewMoreBtn;
    UIButton *m_viewMoreBtn;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    int _m_searchScene;
}

- (void).cxx_destruct;
- (void)OnChangeGroup:(id)arg1;
- (void)OnChangeMemberDisplayName:(id)arg1;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)OnSetChatRoomTopic:(id)arg1 ErrorInfo:(id)arg2 Success:(_Bool)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addMember;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)canShowUpgradeStatus;
- (void)changeSetting;
- (void)checkNeedReload:(id)arg1;
- (void)dealloc;
- (void)doReset;
- (id)getDisplayName;
- (_Bool)getSessionTopped;
- (void)hideCoverView;
- (id)init;
- (void)initData;
- (void)initFooterView;
- (void)initTitleView;
- (void)initView;
- (_Bool)isTopSessionCountExceed;
- (void)loadMemberList;
@property(nonatomic) _Bool m_bFromAddressBook; // @synthesize m_bFromAddressBook;
@property(nonatomic) _Bool m_bIsShowAnnouncementSectionIndexAtFirst; // @synthesize m_bIsShowAnnouncementSectionIndexAtFirst;
@property(nonatomic) _Bool m_bIsShowNickNameSectionIndexAtFirst; // @synthesize m_bIsShowNickNameSectionIndexAtFirst;
@property(nonatomic) _Bool m_bIsShowNotificationSectionIndexAtFirst; // @synthesize m_bIsShowNotificationSectionIndexAtFirst;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
@property(nonatomic) __weak id <chatRoomInfoDelegate><chatRoomSettingDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIButton *m_muteButton; // @synthesize m_muteButton;
@property(nonatomic) int m_searchScene; // @synthesize m_searchScene=_m_searchScene;
- (void)makeDescCell:(id)arg1 cellInfo:(id)arg2;
- (id)makeDescView;
- (id)makeEnterBtn;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListSection:(id)arg1;
- (void)makeQRInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeViewMoreBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)onAddMemLogicStop:(_Bool)arg1;
- (void)onClear:(id)arg1;
- (void)onDelMemLogicStop:(_Bool)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onDeleteMember:(id)arg1;
- (void)onEditAndSearch;
- (void)onEnterChat;
- (void)onExpose;
- (void)onModifyContact:(id)arg1;
- (void)onQRCodeView;
- (void)onQuit:(id)arg1;
- (void)onTopSession:(_Bool)arg1;
- (void)onViewMemLogicStop:(_Bool)arg1;
- (void)openContactInfo:(id)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)processModContact:(id)arg1;
- (_Bool)quitChatRoom;
- (void)reloadMemberListAndView;
- (void)reloadProfileTableData;
- (void)reloadTableData;
- (void)removeCoverView;
- (void)resortMemList;
- (void)setChatRoomDisplayName:(id)arg1 vc:(id)arg2;
- (void)setMuteStatus:(id)arg1;
- (void)setShowDisplayName:(id)arg1;
- (void)setShowRemoveMember;
- (void)setTopSession:(id)arg1;
- (_Bool)setUpdateNotifyMuted:(_Bool)arg1;
- (void)showAdminViewDesc;
- (void)showAdminViewName;
- (void)showChatBackgroundConfig;
- (void)showDelMemView;
- (void)showGroupManage;
- (void)showImageBrowser;
- (void)showMoreMember;
- (void)showMoreMemberEx;
- (void)showSetRoomDisplayName;
- (void)startCoverAnimOnIndexPath:(id)arg1;
- (void)switchSaveToAddressBook:(id)arg1;
- (void)toggleWatchContact:(id)arg1;
- (void)updateMemberView;
- (void)updateTitleView;
- (void)updateToNormalStatusEx;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

