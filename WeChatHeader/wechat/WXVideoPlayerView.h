//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "IMsgExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "SightViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCAVPlayerControlMrgExt.h"

@class CMessageWrap, MMTimer, NSString, NSURL, SightView, UIButton, UILabel;

@interface WXVideoPlayerView : MMUIView <SightViewDelegate, IVOIPUILogicMgrExt, WCAVPlayerControlMrgExt, UIAlertViewDelegate, IMsgExt>
{
    unsigned long long m_ui64PlayStartTime;
    unsigned long long _sightLegalityType;
    _Bool _mayBeIllegalAD;
    _Bool m_shouldRestartPlay;
    _Bool m_videoExpired;
    _Bool _isAnimating;
    NSURL *m_url;
    CMessageWrap *m_msgWrap;
    NSString *m_videoPath;
    MMTimer *m_updateTimer;
    UILabel *m_percentageLabel;
    UILabel *m_quitTips;
    UIButton *m_voiceModeButton;
    id <WXVideoPlayerViewDelegate> m_delegate;
    id <WXVideoPlayerViewTouchDelegate> m_touchDelegate;
    unsigned long long m_fullPlayTimes;
    UIButton *m_playAttachVideoButton;
    SightView *_sightView;
}

- (void).cxx_destruct;
- (void)InternalUpdateVideo:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnDownloadError:(id)arg1 isExpired:(_Bool)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnStartPlayVideo:(id)arg1;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnVideoMoovReady:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkLegalityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearPlayer;
- (void)dealloc;
- (void)genVideoPlayStat;
- (void)handleDownloadFail;
- (void)hideProgress;
- (void)hideQuitTips;
- (void)initView;
- (id)initWithMsgWrap:(id)arg1 VideoPath:(id)arg2 Frame:(struct CGRect)arg3;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (_Bool)isNeedPlayFromEveryDisplay;
- (_Bool)isNeedShowPlayWithAudioButton;
- (void)layoutSubviews;
@property(nonatomic) __weak id <WXVideoPlayerViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned long long m_fullPlayTimes; // @synthesize m_fullPlayTimes;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) UILabel *m_percentageLabel; // @synthesize m_percentageLabel;
@property(retain, nonatomic) UIButton *m_playAttachVideoButton; // @synthesize m_playAttachVideoButton;
@property(retain, nonatomic) UILabel *m_quitTips; // @synthesize m_quitTips;
@property(nonatomic) _Bool m_shouldRestartPlay; // @synthesize m_shouldRestartPlay;
@property(nonatomic) __weak id <WXVideoPlayerViewTouchDelegate> m_touchDelegate; // @synthesize m_touchDelegate;
@property(retain, nonatomic) MMTimer *m_updateTimer; // @synthesize m_updateTimer;
@property(retain, nonatomic) NSURL *m_url; // @synthesize m_url;
@property(nonatomic) _Bool m_videoExpired; // @synthesize m_videoExpired;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath;
@property(retain, nonatomic) UIButton *m_voiceModeButton; // @synthesize m_voiceModeButton;
- (void)onClickDetailButton;
- (void)onClickIconViewOfSightView:(id)arg1;
- (void)onClickPlayAttachVideoBtn;
- (void)onLongPress:(id)arg1;
- (_Bool)onPlayEnd:(_Bool)arg1;
- (void)onSingleTap:(id)arg1;
- (void)onVideoTotalTimeUpdate:(double)arg1 msgClientId:(id)arg2;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)pause;
- (void)pauseForDownloading;
- (void)playVideoOnDownloaded;
- (void)resetPlayerView;
- (void)resetViewPosition;
- (void)seekForBuffering:(unsigned int)arg1;
- (void)seekTo:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLegal:(_Bool)arg1;
- (void)setPlayAttachVideoButtonFrameWithPlayerHeight:(double)arg1;
@property(retain, nonatomic) SightView *sightView; // @synthesize sightView=_sightView;
- (void)setTouchDelegate:(id)arg1;
- (_Bool)shouldDownloadVideo;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (_Bool)startPlay;
- (void)stopPlay;
- (void)stopPlay:(id)arg1;
- (unsigned long long)totalTime;
- (void)updateProgress:(unsigned int)arg1;
- (void)updateTimerLabel;
- (void)whenDidActive;
- (void)whenGoingToResign;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
