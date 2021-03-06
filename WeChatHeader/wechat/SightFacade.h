//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMMNewSessionMgrExt.h"
#import "IMsgExt.h"
#import "MMService.h"
#import "MMovieCompressorDelegate.h"
#import "SightCaptureDelegate.h"
#import "SightMomentDraftTipsViewControllerDelegate.h"
#import "SightTipsShakeViewControllerDelegate.h"

@class CMMotionManager, MMObject<SightCaptureLogic>, MMWindowController, MainFrameSightViewController, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SightDraftMgr, UIImage;

@interface SightFacade : MMService <SightTipsShakeViewControllerDelegate, IMMNewSessionMgrExt, SightMomentDraftTipsViewControllerDelegate, MMService, IMsgExt, SightCaptureDelegate, MMovieCompressorDelegate>
{
    _Bool m_preventCamera;
    MMWindowController *m_sightDraftTipsWindow;
    MMWindowController *m_sightTipsWindow;
    MMWindowController *m_sightWindowController;
    MainFrameSightViewController *m_sightWindowView;
    NSMutableArray *m_distributeList;
    MMObject<SightCaptureLogic> *m_logic;
    SightDraftMgr *m_draftMgr;
    unsigned int m_compressorID;
    NSMutableDictionary *m_compressorDic;
    NSMutableArray *m_invalidateCompressor;
    unsigned int m_captureCounter;
    unsigned int m_continousCaptureID;
    CDStruct_1b6d18a9 m_lastCaptureTime;
    UIImage *m_blurImage;
    _Bool m_lightDetector;
    CMMotionManager *m_cmManager;
    _Bool _needShakeDetector;
    float _allowableSightMaxDuration;
    NSDictionary *_sightLimitationDictionary;
    NSArray *_allowableSightFPS;
    NSArray *_allowableSightFrameSize;
}

- (void).cxx_destruct;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnReceiveSight:(id)arg1;
- (void)OnSendSight:(id)arg1;
- (void)addDraft:(id)arg1;
@property(retain, nonatomic) NSArray *allowableSightFPS; // @synthesize allowableSightFPS=_allowableSightFPS;
@property(retain, nonatomic) NSArray *allowableSightFrameSize; // @synthesize allowableSightFrameSize=_allowableSightFrameSize;
@property(nonatomic) float allowableSightMaxDuration; // @synthesize allowableSightMaxDuration=_allowableSightMaxDuration;
@property(retain, nonatomic) UIImage *blurImage; // @synthesize blurImage=m_blurImage;
- (void)cancelCompress:(unsigned int)arg1;
- (void)cancelRecording:(unsigned int)arg1;
- (void)captureImage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)checkRequestAuthAccess;
- (void)closeLightBoots;
- (void)closeSightViewController;
- (void)closeSightWindow;
- (void)closeSightWindowWithMomentDraftTips;
- (unsigned int)compressSightVideo:(id)arg1 withVideoSize:(struct CGSize)arg2 andBitrate:(int)arg3;
- (void)compressVideoWithMMAsset:(id)arg1 toOutputUrl:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (float)currentMaxSightDurationForKey:(id)arg1;
- (void)dealloc;
- (void)detactImageLight:(id)arg1;
- (void)fadeOutSightWindow;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (id)genPreviewView:(struct CGRect)arg1;
- (double)getCameraHeight;
- (id)getDraftList;
- (id)getForwardContactList;
- (id)getSubImage:(struct CGRect)arg1 inImage:(id)arg2;
- (void)hideDraftTipsWindow;
- (id)init;
- (_Bool)isAuthStatusOK;
- (_Bool)isCameraOn;
- (_Bool)isLightBoostOn;
- (_Bool)isSupportSight;
- (_Bool)isSupportZoom;
- (_Bool)isTurnOnLegalityCheckForReceivedSight;
- (struct CGRect)jumpToMomentTimelineTopAtBackgroundWithMediaItem:(id)arg1;
- (unsigned long long)legalityTypeOfSight:(id)arg1;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFailed:(unsigned int)arg2;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned int)arg4;
- (void)moveOutSightWindow;
- (void)moveOutSightWindowWithMomentDraftTips:(_Bool)arg1;
- (_Bool)needCheckRequestAuthAccess;
@property(nonatomic) _Bool needShakeDetector; // @synthesize needShakeDetector=_needShakeDetector;
- (void)onBecomeActive;
- (void)onCameraAudioReady;
- (void)onCameraPreviewGap:(id)arg1;
- (void)onCameraPreviewReady:(id)arg1;
- (void)onCameraStop;
- (void)onCameraVideoReady;
- (void)onCloseTips;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onRecorderFailed:(unsigned int)arg1;
- (void)onRecorderFinished:(unsigned int)arg1 moviePath:(id)arg2 withThumb:(id)arg3;
- (void)onResignActive;
- (void)onSightDraftTipsTouchBegin;
- (void)openLightBoots;
- (id)pathOfSightOrderList;
- (_Bool)pauseCamera;
- (void)popUsrToListTop:(id)arg1;
- (unsigned int)prepareRecording:(struct CGSize)arg1 bitrate:(double)arg2 atCaptureScene:(unsigned long long)arg3;
@property(readonly, nonatomic) _Bool preventCamera; // @synthesize preventCamera=m_preventCamera;
- (void)processScreenCapture:(id)arg1;
- (void)realStartRecording;
- (void)releasePreviewView:(id)arg1;
- (void)removeDraft:(id)arg1;
- (void)removeUsrFromSightDistributeList:(id)arg1;
- (void)resumeMusicPlay;
- (void)savePreviewBlurImage:(id)arg1;
- (void)savePreviewCapture:(unsigned int)arg1;
@property(retain, nonatomic) NSDictionary *sightLimitationDictionary; // @synthesize sightLimitationDictionary=_sightLimitationDictionary;
- (void)showSightCameraFromMomentDraft:(id)arg1 withMaskImg:(id)arg2;
- (void)showSightDraftTipsWindow;
- (void)showSightShakeTipsWindowbyViewController:(id)arg1;
- (void)showSightWindowForMomentWithMask:(id)arg1 byViewController:(id)arg2 scene:(int)arg3;
- (void)showSightWindowWithBottomMask:(id)arg1 andTopMask:(id)arg2 maskAlpha:(double)arg3 iconCenter:(struct CGPoint)arg4 byViewController:(id)arg5;
- (float)sightCaptureMaxDurationWithScene:(unsigned long long)arg1;
- (struct CGSize)sightViewSizeWithImgSize:(struct CGSize)arg1;
- (void)startCamera;
- (void)startCamera:(_Bool)arg1;
- (void)startCamera:(_Bool)arg1 withAudio:(_Bool)arg2;
- (void)startCameraAudio;
- (void)startQRCodeScanner;
- (unsigned int)startRecording:(struct CGSize)arg1 bitrate:(double)arg2 atCaptureScene:(unsigned long long)arg3;
- (void)startShakeDector;
- (void)startSnapShotTimer;
- (void)statDraftSave:(unsigned int)arg1;
- (void)statDraftUse:(unsigned int)arg1 operation:(unsigned int)arg2;
- (void)statOper:(unsigned int)arg1 operation:(unsigned int)arg2 targetCount:(unsigned int)arg3;
- (void)statPlay:(unsigned int)arg1;
- (void)statSent:(unsigned int)arg1 target:(unsigned int)arg2;
- (void)stopCompressWithVideoAsset:(id)arg1;
- (void)stopRecording:(unsigned int)arg1;
- (void)stopShakeDetector;
- (void)stopSnapShotTimer;
- (struct CGSize)thumbImageSizeWithMediaItem:(id)arg1;
- (void)zoomCamera;
- (void)zoomInCamera;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

