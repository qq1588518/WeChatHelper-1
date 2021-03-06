//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class GiftCenterData, NSString, RankSummaryData, RecentPlayCommModule, RecentPlayRecommendBannerData, RecentPlayRecommendTopic;

@interface RecentPlayGameSubItemData : MMObject <PBCoding>
{
    RecentPlayRecommendBannerData *recommendBanner;
    GiftCenterData *giftCenter;
    RecentPlayRecommendTopic *recommendTopic;
    RankSummaryData *rankSummary;
    RecentPlayCommModule *commModule;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) RecentPlayCommModule *commModule; // @synthesize commModule;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) GiftCenterData *giftCenter; // @synthesize giftCenter;
- (void)parse:(id)arg1;
@property(retain, nonatomic) RankSummaryData *rankSummary; // @synthesize rankSummary;
@property(retain, nonatomic) RecentPlayRecommendBannerData *recommendBanner; // @synthesize recommendBanner;
@property(retain, nonatomic) RecentPlayRecommendTopic *recommendTopic; // @synthesize recommendTopic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

