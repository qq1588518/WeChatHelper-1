//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayOverseaMainWalletData.h"

@class NSArray, WCPayOverseaReadActivityList, WCPayOverseaTypeInfoObject;

@interface WCPayOverseaMainWalletPayFunctionData : WCPayOverseaMainWalletData
{
    NSArray *_m_functionList;
    WCPayOverseaTypeInfoObject *_m_typeInfo;
    WCPayOverseaReadActivityList *_m_readList;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
@property(retain, nonatomic) NSArray *m_functionList; // @synthesize m_functionList=_m_functionList;
@property(retain, nonatomic) WCPayOverseaReadActivityList *m_readList; // @synthesize m_readList=_m_readList;
@property(retain, nonatomic) WCPayOverseaTypeInfoObject *m_typeInfo; // @synthesize m_typeInfo=_m_typeInfo;
- (unsigned long long)rowCount;

@end

