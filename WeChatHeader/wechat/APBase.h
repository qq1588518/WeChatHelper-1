//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDBCoding.h"

@class NSString, PublicWifiCache, PublicWifiPageInfo;

@interface APBase : MMObject <WCDBCoding>
{
    NSString *ssid;
    NSString *mac;
    unsigned int opCode;
    PublicWifiCache *cache;
    unsigned int scene;
    NSString *qrCode;
    NSString *mpUrl;
    NSString *mid;
    NSString *checkUrl;
    NSString *sessionKey;
    NSString *password;
    unsigned int retcode;
    NSString *errMsg;
    int actionCode;
    unsigned int protocolType;
    int _state;
    NSString *bannerText;
    NSString *showUrl;
    double expiredTime;
    NSString *retMsg;
    long long m___rowID;
    PublicWifiPageInfo *_pageInfo;
}

+ (id)dummyObject;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
- (void).cxx_destruct;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) int actionCode; // @synthesize actionCode;
@property(copy, nonatomic) NSString *bannerText; // @synthesize bannerText;
@property(nonatomic) __weak PublicWifiCache *cache; // @synthesize cache;
- (_Bool)canStartWithCurrSSID:(id)arg1;
- (void)cancel;
@property(copy, nonatomic) NSString *checkUrl; // @synthesize checkUrl;
- (const WCDBCondition_9620f531 *)db_actionCode;
- (const WCDBCondition_22fabacd *)db_bannerText;
- (const WCDBCondition_22fabacd *)db_checkUrl;
- (const WCDBCondition_d49cb843 *)db_expiredTime;
- (const WCDBCondition_22fabacd *)db_mac;
- (const WCDBCondition_22fabacd *)db_mid;
- (const WCDBCondition_22fabacd *)db_mpUrl;
- (const WCDBCondition_c6db074e *)db_opCode;
- (const WCDBCondition_c6db074e *)db_protocolType;
- (const WCDBCondition_22fabacd *)db_qrCode;
- (const WCDBCondition_22fabacd *)db_retMsg;
- (const WCDBCondition_c6db074e *)db_retcode;
- (const WCDBCondition_22fabacd *)db_showUrl;
- (const WCDBCondition_22fabacd *)db_ssid;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(nonatomic) double expiredTime; // @synthesize expiredTime;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (void)handleHomeBarClicked:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSString *mac; // @synthesize mac;
@property(copy, nonatomic) NSString *mid; // @synthesize mid;
@property(copy, nonatomic) NSString *mpUrl; // @synthesize mpUrl;
@property(nonatomic) unsigned int opCode; // @synthesize opCode;
@property(retain, nonatomic) PublicWifiPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(copy, nonatomic) NSString *password; // @synthesize password;
@property(nonatomic) unsigned int protocolType; // @synthesize protocolType;
@property(copy, nonatomic) NSString *qrCode; // @synthesize qrCode;
@property(copy, nonatomic) NSString *retMsg; // @synthesize retMsg;
@property(nonatomic) unsigned int retcode; // @synthesize retcode;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey;
@property(copy, nonatomic) NSString *showUrl; // @synthesize showUrl;
@property(retain, nonatomic) NSString *ssid; // @synthesize ssid;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
