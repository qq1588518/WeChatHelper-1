//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IStrangerContactMgrExt.h"
#import "IWCCardPkgExt.h"
#import "IWCShareCardPkgExt.h"
#import "IdleTimerUtilExt.h"

@class MMTimer, NSArray, NSMutableArray, NSString, WCCardData, WCCardDataCardInfo, WCCardDataCardTPInfo, WCCardDynamicCodeGenerator, WCCardEnterInfo, WCCardUsedStoreInfo, WCShareCardData;

@interface WCNewCardDetailLogicController : MMObject <IWCShareCardPkgExt, IWCCardPkgExt, IdleTimerUtilExt, IStrangerContactMgrExt>
{
    double _oldBrightness;
    double _toBrightness;
    MMTimer *brightTimer;
    unsigned int _getItemInfoEventID;
    unsigned int _acceptItemEventID;
    unsigned int _giftItemEventID;
    unsigned int _getShopsEventID;
    _Bool _bNeedGetCardDataFromSvr;
    _Bool _bIsFromBathView;
    _Bool _isConsumedNotify;
    _Bool _bIsShareCardDetailMode;
    int _cardStatus;
    unsigned int _cardItemFromScene;
    WCCardEnterInfo *_cardEnterInfo;
    WCCardData *_cardData;
    WCCardDynamicCodeGenerator *_dynamicCodeGenerator;
    WCShareCardData *_shareCardData;
    NSMutableArray *_arrShareCardDataList;
    NSMutableArray *_arrUsedShareCardList;
    NSString *_nsConsumedBoxID;
    WCCardUsedStoreInfo *_oneUsedStoreInfo;
    NSArray *_usedStoreList;
    WCCardDataCardInfo *_curCardInfo;
    WCCardDataCardTPInfo *_curCardTPInfo;
    unsigned long long _addCardState;
    id <WCNewCardDetailLogicDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)acceptCard:(_Bool)arg1;
@property(nonatomic) unsigned long long addCardState; // @synthesize addCardState=_addCardState;
@property(retain, nonatomic) NSMutableArray *arrShareCardDataList; // @synthesize arrShareCardDataList=_arrShareCardDataList;
@property(retain, nonatomic) NSMutableArray *arrUsedShareCardList; // @synthesize arrUsedShareCardList=_arrUsedShareCardList;
- (_Bool)bCanDeleteCurCard;
- (_Bool)bHasEnoughCardDataToShow;
- (_Bool)bIsCardCanShareToFriend;
- (_Bool)bIsCardFromOutAppScene;
@property(nonatomic) _Bool bIsFromBathView; // @synthesize bIsFromBathView=_bIsFromBathView;
- (_Bool)bIsMemberCard;
- (_Bool)bIsMemberCardPreAccept;
- (_Bool)bIsNeedShowRightActionSheetItem;
@property(nonatomic) _Bool bIsShareCardDetailMode; // @synthesize bIsShareCardDetailMode=_bIsShareCardDetailMode;
- (_Bool)bIsShareCardFromSelf;
- (_Bool)bIsShareCardMode;
@property(nonatomic) _Bool bNeedGetCardDataFromSvr; // @synthesize bNeedGetCardDataFromSvr=_bNeedGetCardDataFromSvr;
- (_Bool)bNeedShowNuknowType;
- (_Bool)bNeedToCallDelegateShareCardConsumed;
- (_Bool)bUsingOfflinePay;
@property(retain, nonatomic) WCCardData *cardData; // @synthesize cardData=_cardData;
@property(retain, nonatomic) WCCardEnterInfo *cardEnterInfo; // @synthesize cardEnterInfo=_cardEnterInfo;
@property(nonatomic) unsigned int cardItemFromScene; // @synthesize cardItemFromScene=_cardItemFromScene;
@property(nonatomic) int cardStatus; // @synthesize cardStatus=_cardStatus;
- (void)commonInitData;
- (id)curCardData;
- (id)curCardEnterInfo;
@property(retain, nonatomic) WCCardDataCardInfo *curCardInfo; // @synthesize curCardInfo=_curCardInfo;
- (int)curCardStatus;
@property(retain, nonatomic) WCCardDataCardTPInfo *curCardTPInfo; // @synthesize curCardTPInfo=_curCardTPInfo;
- (void)dealloc;
@property(nonatomic) __weak id <WCNewCardDetailLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteConsumedCardFromCache:(id)arg1;
@property(retain, nonatomic) WCCardDynamicCodeGenerator *dynamicCodeGenerator; // @synthesize dynamicCodeGenerator=_dynamicCodeGenerator;
- (void)fullCardDataWithEnterInfo:(id)arg1;
- (id)genAcceptShareInfoWithCardList:(id)arg1;
- (id)genFailAcceptInfo;
- (id)genSuccessAcceptInfo;
- (void)getCardDataFromSvr;
- (id)getCardDataJsonContentIfExist;
- (unsigned int)getCardItemFromScene;
- (id)getCardTypeName;
- (unsigned long long)getCurAddCardState;
- (id)getCurCardDataSource;
- (id)getCurCardId;
- (id)getCurCardTpId;
- (id)getDynamicCodeGenerator;
- (int)getMarkScene;
- (id)getNearbyShopPboneNum;
- (id)getNearbyStoreInfo;
- (id)getOuterAppNameIfExist;
- (void)getPayCardListAndUsrInfoForPayIfNeed;
- (id)getServiceContact;
- (id)getShareCardData;
- (id)getShareCardDataByCardId:(id)arg1;
- (id)getShareCardDataList;
- (unsigned long long)getShareUserCount;
- (id)getShareUsername;
- (id)getUsedShareCardDataList;
- (id)getUsedStoreList;
- (void)giftMyCardTo:(id)arg1;
- (void)graduallyIncreaseBrightnessIfNeed;
- (void)graduallySetBrightness:(double)arg1;
- (void)handleCodeViewNeedMark:(_Bool)arg1 needNotify:(_Bool)arg2 markScene:(int)arg3;
- (void)handleShareCardAfterConsuemdOK;
- (_Bool)hasAnnounceReport;
- (void)initCardData;
- (id)initLogicControllerWithCardEnterInfo:(id)arg1 logicDelegate:(id)arg2;
- (id)initLogicControllerWithShareCardData:(id)arg1 withShareCardListIfExist:(id)arg2 withFromScene:(int)arg3 logicDelegate:(id)arg4;
- (_Bool)isCardDataExistInDB;
- (_Bool)isCardDataFailShareForCardTpId:(id)arg1;
- (_Bool)isCardDataUpdatedOneDayAgo;
@property(nonatomic) _Bool isConsumedNotify; // @synthesize isConsumedNotify=_isConsumedNotify;
- (_Bool)isGetCardDataEachTime;
- (_Bool)isHaveShowTipForCardId:(id)arg1;
- (_Bool)isShareCardDataFailShareForCardTpId:(id)arg1;
@property(retain, nonatomic) NSString *nsConsumedBoxID; // @synthesize nsConsumedBoxID=_nsConsumedBoxID;
- (void)onAcceptCard:(id)arg1 ErrCode:(int)arg2 ErrMsg:(id)arg3 EventID:(unsigned int)arg4;
- (void)onDeleteCardResponse:(id)arg1 retCode:(int)arg2;
- (void)onGetCardData:(id)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onGetUsedStoreList:(id)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onGiftCard:(id)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onIdleTimerUtilVoipQuit;
- (void)onMarkedResponse:(_Bool)arg1 success:(_Bool)arg2 andMarkUser:(id)arg3 markCardId:(id)arg4 expiredTime:(float)arg5 payQRCodeWording:(id)arg6;
- (void)onMarkedResponseError;
- (void)onMsgNotifyShareCardConsumed:(id)arg1 sharedCardId:(id)arg2 consumedBoxId:(id)arg3 subscribeAppUserName:(id)arg4 subscribeWording:(id)arg5 retMsg:(id)arg6;
- (void)onShareCard:(id)arg1 TpID:(id)arg2 successShareCardList:(id)arg3 andCardInfo:(id)arg4;
- (void)onShareMyCard:(id)arg1 Error:(int)arg2;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onUpdateShareCard:(id)arg1 Error:(int)arg2;
- (void)onUpdateShareCardList:(id)arg1;
- (void)onWCCardUpdate:(id)arg1;
@property(retain, nonatomic) WCCardUsedStoreInfo *oneUsedStoreInfo; // @synthesize oneUsedStoreInfo=_oneUsedStoreInfo;
- (void)recoverBrightnessIfNeed;
- (void)reloadAllViewControllerContent;
- (void)reloadViewControllerContent;
- (void)setForBatchViewCard;
- (void)setHaveShowTipForCardId:(id)arg1;
@property(retain, nonatomic) WCShareCardData *shareCardData; // @synthesize shareCardData=_shareCardData;
@property(retain, nonatomic) NSArray *usedStoreList; // @synthesize usedStoreList=_usedStoreList;
- (void)shareMyCardWithVisibleUserList:(id)arg1 invisibleUserList:(id)arg2 visibleTagIDList:(id)arg3 invisibleTagIDList:(id)arg4;
- (void)timerCheckUpdateBrightness;
- (void)trySetupDynamicCodeGenerator;
- (void)updateCardDataFromOuter:(id)arg1;
- (void)updateCardStatus;
- (void)updateShareCard:(id)arg1;
- (void)uploadCardPkgLocationReport;
- (void)uploadEnterBrandProfileKvReport;
- (void)uploadEnterCardDetailKvReport;
- (void)uploadOpenCellList0ItemViewReport:(id)arg1;
- (void)uploadOpenDetailViewReport;
- (void)uploadOpenOperationViewReport;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

