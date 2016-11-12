//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseContactInfoAssist.h"

#import "ICertInfoMgrExt.h"
#import "IEnterpriseBrandContactMgrExt.h"
#import "IEnterpriseContactMgrExt.h"
#import "IKFContactMgrExt.h"
#import "IWCDeviceBrandMgrExt.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CertInfo, MMBrandHeadImageView, MMTableView, NSArray, NSMutableArray, NSString, UIButton, UIView, WCADPageWrap;

@interface BrandUserContactInfoAssist : CBaseContactInfoAssist <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, IWCDeviceBrandMgrExt, IKFContactMgrExt, IEnterpriseContactMgrExt, IEnterpriseBrandContactMgrExt, ICertInfoMgrExt>
{
    UIButton *_viewMsgBtn;
    UIButton *_followBtn;
    _Bool _isSettingsChanged;
    _Bool _isMuteChanged;
    _Bool _isTopSessionSwitchOn;
    _Bool _isClickedTopSessionSwitch;
    _Bool _isEnterpriseSessionTopChanged;
    _Bool _needGetWorker;
    NSArray *_bindWorkerList;
    MMBrandHeadImageView *m_brandHeadView;
    NSMutableArray *m_arrData;
    UIView *m_titleView;
    MMTableView *m_tableView;
    CertInfo *m_certInfo;
    WCADPageWrap *_profilePageWrap;
    unsigned int _lastCertificationFlag;
    unsigned int _searchFromIndex;
    NSString *_searchKeyword;
    NSString *_searchExtraParamsString;
}

- (void).cxx_destruct;
- (id)GetTableView;
- (void)OnUpdateCertInfo;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustNickNameAndUserNameLabelVerticalCenter;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (long long)calBusinessScopeCellHeight;
- (long long)calPrivilegesCellHeight;
- (long long)calRegisterBodyCellHeight;
- (long long)calSignatureCellHeight;
- (long long)calTrademarkBodyHeight;
- (long long)calVerifySourceCellHeight;
- (void)cancelFocus;
- (void)checkUpdateCertInfo;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned int)arg2;
- (void)dealloc;
- (id)getAlertMessageForVerifyLogic:(id)arg1;
- (id)getAlertTitleForVerifyLogic:(id)arg1;
- (id)getBrandInfoItemAndRemoveIt:(id)arg1 fromArray:(id)arg2;
- (id)getMatchDescription:(id)arg1;
- (id)getMatchTitle:(id)arg1;
- (id)getPrivilegeIcon:(id)arg1;
- (long long)getPrivilegeItemHeight:(id)arg1;
- (double)getRegisterBodyRightWidth;
- (double)getRightLabelWidth;
- (double)getTextFieldTopMarginVerifyLogic:(id)arg1;
- (id)getTitleKey:(id)arg1;
- (id)getUrlItemDescription:(id)arg1;
- (id)getUrlItemUrl:(id)arg1;
- (id)getVerifySourceAttributedString;
- (double)getVerifySourceRightWidth;
- (void)handleAddedContact;
- (id)hardcodeKFWorker;
- (_Bool)hasDeviceUserData;
- (void)initFooterView;
- (void)initHDHeadImage;
- (void)initHeadImage;
- (void)initHeaderView;
- (void)initNickNameLabel;
- (void)initTableView;
- (void)initTitleView;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (_Bool)isContactExpired;
- (_Bool)isDeviceBound;
- (_Bool)isFromNotifyMessage;
- (_Bool)isInCustomAlertMode;
- (_Bool)isTempBrandSession;
- (void)kvReportModifyWithUserName:(id)arg1 Type:(unsigned int)arg2;
@property(retain, nonatomic) NSMutableArray *m_arrData; // @synthesize m_arrData;
- (void)makeAllowPositionCell:(id)arg1;
- (void)makeBindWorkerCell:(id)arg1;
- (void)makeBlockMessageNotifyCell:(id)arg1;
- (void)makeBusinessScopeCell:(id)arg1;
- (void)makeCell:(id)arg1 row:(unsigned long long)arg2 section:(unsigned int)arg3;
- (void)makeDisableEnterpriseSubBrand:(id)arg1;
- (void)makeEnterEnterpriseCell:(id)arg1;
- (void)makeEnterpriseBlockMessageCell:(id)arg1;
- (void)makeEnterpriseBrandStikyOnTopCell:(id)arg1;
- (void)makeEnterpriseChatEntryCell:(id)arg1;
- (void)makeHideFromProfileCell:(id)arg1;
- (void)makeMerchantRatings:(id)arg1;
- (void)makeMerchantSecurityCell:(id)arg1;
- (void)makeNearFieldCell:(id)arg1;
- (void)makeNewMessageNotificationCell:(id)arg1;
- (void)makePrivilegesCell:(id)arg1;
- (void)makeRegisterBodyCell:(id)arg1;
- (void)makeServicePhoneCell:(id)arg1 withPhone:(id)arg2;
- (void)makeShowMessageCell:(id)arg1;
- (void)makeSignatureCell:(id)arg1;
- (void)makeTemplateMsgRecvCell:(id)arg1;
- (void)makeTopSessionCell:(id)arg1;
- (void)makeTrandemarkBodyCell:(id)arg1;
- (void)makeUrlCell:(id)arg1 withData:(id)arg2;
- (void)makeVerifySourceCell:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddToContacts;
- (void)onAllowPositionChanged:(id)arg1;
- (void)onBindDevice;
- (void)onBlockSwitchChanged:(id)arg1;
- (void)onCallServicePhone:(id)arg1;
- (void)onClearContent;
- (void)onClickNavRightButton;
- (void)onContactUpdated;
- (void)onEnableEnterpriseSubBrandBtnSwitched:(id)arg1;
- (void)onEnterEnterprise;
- (void)onEnterEnterpriseChat;
- (void)onEnterWebView:(id)arg1;
- (void)onEnterpriseBlockSwitchChanged:(id)arg1;
- (void)onEnterpriseBrandAttrChanged:(id)arg1;
- (void)onEnterpriseBrandSyncToSvrCompleted:(id)arg1 extParams:(id)arg2;
- (void)onEnterpriseStickyOnTopSwitchChanged:(id)arg1;
- (void)onGetKFContactsBindList:(id)arg1 errCode:(int)arg2;
- (void)onGetKFContactsDefaultList:(id)arg1 errCode:(int)arg2;
- (void)onNotificationSwitchChanged:(id)arg1;
- (void)onShowCancelFocusTips:(id)arg1;
- (void)onShowMessage;
- (void)onShowSwitchChanged:(id)arg1;
- (void)onSwitchEnableEnterpriseSubBrand;
- (void)onTemplateMsgRecv;
- (void)onTopSessionSwitchChanged:(id)arg1;
- (void)onUpdateKFContactsList:(id)arg1 errCode:(int)arg2;
- (void)onUpdateMyContactUserFlag:(id)arg1 bitMask:(unsigned int)arg2 errCode:(int)arg3;
- (void)onUpdateMyEnterpriseContact:(id)arg1 errCode:(int)arg2;
- (void)onWCDeviceBindEnd:(id)arg1 Error:(id)arg2;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)opLogToSvr;
- (void)opLogToSvrForTopSession;
- (void)profileDestory;
- (void)recordProfilePageWrap;
- (void)reloadRowData;
- (void)reloadTableView;
@property(retain, nonatomic) NSString *searchExtraParamsString; // @synthesize searchExtraParamsString=_searchExtraParamsString;
@property(nonatomic) unsigned int searchFromIndex; // @synthesize searchFromIndex=_searchFromIndex;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (_Bool)shouldEnterpriseStickyOnTop;
- (_Bool)shouldMuteEnterpriseNotification;
- (_Bool)shouldReceiveEnterpriseMessage;
- (_Bool)shouldReceiveMessage;
- (void)switchEnableEnterpriseSubBrand;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (unsigned int)transToReportScene:(unsigned int)arg1;
- (void)updateFooterView;
- (void)updateNavigationBarRightButton;
- (void)updateNickNameLabel;
- (void)updateTitleView;
- (double)widthForBusinessScopeTitleLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
