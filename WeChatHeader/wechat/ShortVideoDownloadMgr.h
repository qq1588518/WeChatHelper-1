//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IMsgExt.h"
#import "IVideoExt.h"

@class NSMutableArray, ShortVideoDownloadWrap;

@interface ShortVideoDownloadMgr : MMObject <IVideoExt, IMsgExt>
{
    ShortVideoDownloadWrap *m_currTask;
    NSMutableArray *m_taskQueue;
    NSMutableArray *m_thumbQueue;
    NSMutableArray *m_autoDownloadTaskQueue;
    NSMutableArray *m_autoDownloadTaskWaitingQueue;
}

- (void).cxx_destruct;
- (_Bool)AddAutoDownloadShortVideo:(id)arg1;
- (void)DownloadShortVideo:(id)arg1 isAutoDownload:(_Bool)arg2;
- (_Bool)DownloadSightThumb:(id)arg1;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)OnThumbDownloadFailed:(id)arg1;
- (void)OnThumbDownloadOK:(id)arg1;
- (void)OnVideoDownloadFail:(id)arg1;
- (void)OnVideoDownloadOK:(id)arg1;
- (void)OnVideoDownloadPause:(id)arg1;
- (void)ResumeAutoDownloadQueue;
- (void)UpdateVideoMsg:(id)arg1;
- (_Bool)addMsgWrap:(id)arg1;
- (void)appendShortVideoTempFile:(id)arg1;
- (_Bool)checkMsgExist:(id)arg1 n64SvrID:(long long)arg2;
- (_Bool)checkMsgSame:(id)arg1 chatName:(id)arg2 n64SvrID:(long long)arg3;
- (void)checkTaskQueue;
- (void)dealloc;
- (void)handleSightThumbDownloadFail:(id)arg1;
- (void)handleSightThumbDownloadOK:(id)arg1;
- (void)handleSightVideoDownloadStatusUpdate:(id)arg1;
- (id)init;
- (_Bool)isInFlowControlForMsg:(id)arg1;
- (_Bool)isInQueue:(id)arg1;
@property(retain, nonatomic) ShortVideoDownloadWrap *m_currTask; // @synthesize m_currTask;
- (void)onAutoDownloadOK:(id)arg1;
- (void)onVideoDownloadEnd:(id)arg1;
- (id)pathOfShortVideoTempFile;
- (void)reflashShortVideoTempFile;
- (_Bool)removeAllDownloadTask:(id)arg1;
- (_Bool)removeAutoDownloadTask:(id)arg1 n64SvrID:(long long)arg2;
- (_Bool)removeDownloadTask:(id)arg1 n64SvrID:(long long)arg2;
- (_Bool)removeFailTask:(id)arg1 n64SvrID:(long long)arg2;
- (void)renameVideoFile:(id)arg1;
- (_Bool)shouldAutoDownload:(id)arg1;
- (_Bool)shouldAutoDownloadForNetwork;
- (void)stopDownload:(id)arg1;
- (void)updateThumbImageToMatchSightVideoIfNeededWithSightMessageWrap:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

