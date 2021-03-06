//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCCardEntryTips : MMObject <PBCoding>
{
    _Bool bShowNew;
    _Bool bShowRedDot;
    _Bool bNeedCheck;
    NSString *nsRedDotBuff;
    NSString *nsTipWording;
    NSString *nsTipIconUrl;
    NSString *nsCardId;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool bNeedCheck; // @synthesize bNeedCheck;
@property(nonatomic) _Bool bShowNew; // @synthesize bShowNew;
@property(nonatomic) _Bool bShowRedDot; // @synthesize bShowRedDot;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (void)loadFromCache;
@property(retain, nonatomic) NSString *nsCardId; // @synthesize nsCardId;
@property(retain, nonatomic) NSString *nsRedDotBuff; // @synthesize nsRedDotBuff;
@property(retain, nonatomic) NSString *nsTipIconUrl; // @synthesize nsTipIconUrl;
@property(retain, nonatomic) NSString *nsTipWording; // @synthesize nsTipWording;
- (id)pathForCache;
- (void)saveToCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

