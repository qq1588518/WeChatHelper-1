//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMPatchMgrExt.h"
#import "MMResourceMgrExt.h"

@class MMSafeModeReport, NSDictionary, NSMutableArray, NSString;

@interface MMSafeModeMgr : NSObject <MMResourceMgrExt, MMPatchMgrExt>
{
    NSString *m_crashUsrName;
    NSMutableArray *m_localUsrNameMd5List;
    NSDictionary *m_serverConfig;
    NSMutableArray *m_deleteListFromLocalConfig;
    NSMutableArray *m_uploadListFromLocalConfig;
    NSMutableArray *m_deleteListFromServerConfig;
    NSMutableArray *m_uploadListFromServerConfig;
    _Bool m_hasBackup;
    int m_continuousCrashCount;
    unsigned long long m_safeModeScene;
    MMSafeModeReport *m_safeModeReport;
    struct MMSMUploadFileObserver *m_observer;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)backupFilesInUploadList;
- (void)backupLogsFromConfigs;
- (void)clearAllFlags;
- (void)clearUnnecessaryFiles;
- (id)currentUploadFiles;
- (void)dealloc;
- (id)deleteListFromConfigs;
- (void)didEnterWeChat;
- (void)doCrashReport;
- (id)documentsPath;
- (id)documentsUserPaths;
- (long long)getUploadFilesSize;
- (void)handleDidBecomeActiveNotification;
- (void)handleResignActiveNotification;
- (id)init;
- (void)initCrashUsrName;
- (void)initDeleteAndUploadListFromLocalConfig;
- (void)initDeleteAndUploadListFromServerConfig;
- (_Bool)isServerConfigValid;
- (id)libraryPath;
- (id)libraryUserPaths;
- (void)onCrashReportFinished;
- (void)onPatchCodeUpdateFail:(unsigned int)arg1 errorCode:(long long)arg2;
- (void)onPatchCodeUpdateSuccess:(unsigned int)arg1;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onSingalCrash:(struct __siginfo *)arg1;
- (void)reportDataWithKey:(int)arg1 value:(int)arg2;
- (id)rootPath;
- (unsigned long long)safeModeScene;
- (void)setCrashUsrName:(id)arg1;
- (_Bool)shouldEnterSafeMode;
- (id)transformPath:(id)arg1;
- (_Bool)tryUpdateServerConfig;
- (void)updatePatchConfig;
- (void)updateSafeModeConfig;
- (void)updateServerConfig;
- (id)uploadFileTempPath;
- (id)uploadFileZipName;
- (id)uploadListFromConfigs;
- (void)uploadLogsAndSpecialFiles;
- (int)uploadLogsDaysFromConfigs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

