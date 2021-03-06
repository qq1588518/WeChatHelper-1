//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WAAppTaskMgrExt.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface WARequestMgr : MMService <WAAppTaskMgrExt, MMService>
{
    NSMutableDictionary *_dicAppID2RequestHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
}

- (void).cxx_destruct;
- (void)clearAllRequestHandler;
- (void)clearRequestHandlerWithAppID:(id)arg1;
- (void)dealloc;
- (id)getAndNewRequestHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2;
- (id)init;
- (void)onAppTaskTerminate:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)requestWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 url:(id)arg3 data:(id)arg4 httpHeaders:(id)arg5 method:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (_Bool)verifyMethod:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

