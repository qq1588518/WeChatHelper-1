//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol WXGBackupLogicDelegate <NSObject>

@optional
- (void)onBackupLogicAlert:(unsigned long long)arg1;
- (void)onBackupLogicNotify:(unsigned long long)arg1;
- (void)onBackupTransferSpeed:(float)arg1;
- (void)onFirstPacketOK:(_Bool)arg1;
- (void)onProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
@end
