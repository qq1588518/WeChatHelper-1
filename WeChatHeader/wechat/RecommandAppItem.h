//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface RecommandAppItem : NSObject <PBCoding>
{
    NSString *_appID;
    NSString *_appName;
    NSString *_appIconUrl;
    NSString *_appDesc;
    NSString *_appSnsDesc;
    NSString *_appSnapShotUrl;
    NSString *_appDownloadUrl;
    NSString *_appCoverUrl;
    NSString *_appNameEn;
    NSString *_appNameTW;
    NSString *_appRcmIconUrl;
    NSString *_appIntroViewUrl;
    NSString *_appLaunchScheme;
    unsigned int _appInfoFlag;
    _Bool _appNotShowNew;
    _Bool appNotShowNew;
    unsigned int appInfoFlag;
    NSString *appID;
    NSString *appName;
    NSString *appIconUrl;
    NSString *appDesc;
    NSString *appSnsDesc;
    NSString *appSnapShotUrl;
    NSString *appDownloadUrl;
    NSString *appCoverUrl;
    NSString *appNameEn;
    NSString *appNameTW;
    NSString *appRcmIconUrl;
    NSString *appIntroViewUrl;
    NSString *appLaunchScheme;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appCoverUrl; // @synthesize appCoverUrl;
@property(retain, nonatomic) NSString *appDesc; // @synthesize appDesc;
@property(retain, nonatomic) NSString *appDownloadUrl; // @synthesize appDownloadUrl;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(retain, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl;
@property(nonatomic) unsigned int appInfoFlag; // @synthesize appInfoFlag;
@property(retain, nonatomic) NSString *appIntroViewUrl; // @synthesize appIntroViewUrl;
@property(retain, nonatomic) NSString *appLaunchScheme; // @synthesize appLaunchScheme;
@property(retain, nonatomic) NSString *appName; // @synthesize appName;
@property(retain, nonatomic) NSString *appNameEn; // @synthesize appNameEn;
@property(retain, nonatomic) NSString *appNameTW; // @synthesize appNameTW;
@property(nonatomic) _Bool appNotShowNew; // @synthesize appNotShowNew;
@property(retain, nonatomic) NSString *appRcmIconUrl; // @synthesize appRcmIconUrl;
@property(retain, nonatomic) NSString *appSnapShotUrl; // @synthesize appSnapShotUrl;
@property(retain, nonatomic) NSString *appSnsDesc; // @synthesize appSnsDesc;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

