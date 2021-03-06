//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactSelectViewDelegate.h"
#import "GroupSelectContactsViewControllerDelegate.h"
#import "MMSearchBarDelegate.h"
#import "NewContactsSearchPanelViewDelegate.h"
#import "SelectTagContactsViewControllerDelegate.h"
#import "TipsViewDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "WCActionSheetDelegate.h"

@class ContactSelectView, NSDictionary, NSIndexPath, NSMutableDictionary, NSString, NewContactsSearchPanelView, TipsView, UIBarButtonItem, UIButton, UIView;

@interface MultiSelectContactsViewController : MMUIViewController <SelectTagContactsViewControllerDelegate, ContactSelectViewDelegate, UISearchDisplayDelegate, MMSearchBarDelegate, WCActionSheetDelegate, NewContactsSearchPanelViewDelegate, GroupSelectContactsViewControllerDelegate, TipsViewDelegate>
{
    id <MultiSelectContactsViewControllerDelegate> m_delegate;
    NSDictionary *m_dicExistContact;
    NSDictionary *m_dicIgnoreContact;
    _Bool m_bShowHistoryGroup;
    _Bool m_bShowRadarCreateRoom;
    _Bool m_bShowBrandContact;
    NSMutableDictionary *m_dicMultiSelect;
    NSIndexPath *m_indexPathToBeDeleted;
    NewContactsSearchPanelView *m_panelView;
    UIButton *m_panelBtn;
    UIBarButtonItem *m_panelBtnItem;
    unsigned int m_uiGroupScene;
    unsigned long long m_memberCountLimit;
    NSString *m_showTip;
    TipsView *m_tipView;
    _Bool m_tempForbidLayout;
    ContactSelectView *m_selectView;
    int m_commonSearchScene;
    UIView *_tableFooterView;
    NSString *nsCurrentSearchText;
    _Bool _m_bKeepCurViewAfterSelect;
}

- (void).cxx_destruct;
- (void)UpdateForChatGroup:(id)arg1;
- (void)cancelSearch;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)dealloc;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)doTagSearch:(id)arg1 arrContacts:(id)arg2;
- (unsigned long long)getTotalSelectCount;
- (double)heightForSearchViewTable:(id)arg1;
- (id)init;
- (void)initTitleArea;
- (void)initView;
- (_Bool)isExisted:(id)arg1;
- (_Bool)isIgnore:(id)arg1;
@property(nonatomic) _Bool m_bKeepCurViewAfterSelect; // @synthesize m_bKeepCurViewAfterSelect=_m_bKeepCurViewAfterSelect;
@property(nonatomic) _Bool m_bShowBrandContact; // @synthesize m_bShowBrandContact;
@property(nonatomic) _Bool m_bShowHistoryGroup; // @synthesize m_bShowHistoryGroup;
@property(nonatomic) _Bool m_bShowRadarCreateRoom; // @synthesize m_bShowRadarCreateRoom;
@property(nonatomic) int m_commonSearchScene; // @synthesize m_commonSearchScene;
@property(nonatomic) __weak id <MultiSelectContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(retain, nonatomic) NSDictionary *m_dicIgnoreContact; // @synthesize m_dicIgnoreContact;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(nonatomic) unsigned long long m_memberCountLimit; // @synthesize m_memberCountLimit;
@property(retain, nonatomic) UIButton *m_panelBtn; // @synthesize m_panelBtn;
@property(retain, nonatomic) UIBarButtonItem *m_panelBtnItem; // @synthesize m_panelBtnItem;
@property(retain, nonatomic) NSString *m_showTip; // @synthesize m_showTip;
@property(nonatomic) unsigned int m_uiGroupScene; // @synthesize m_uiGroupScene;
- (id)makeFiterContactToTagSearchView:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)onContactSelectSearch:(id)arg1;
- (void)onDone:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onGroupMultiSelectContactReturn:(id)arg1;
- (void)onGroupSelectContactReturn:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (void)onSelectDoneWithContacts:(id)arg1;
- (void)onSelectHistoryGroup;
- (void)onSelectRadarCreateRoom;
- (_Bool)onShouldSelectContact:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchTextFieldDidBeginEditing;
- (void)tryShowSelectTip:(unsigned long long)arg1 currentSelectCount:(unsigned long long)arg2;
- (void)updatePanelBtn;
- (void)updatePanelView:(id)arg1;
- (void)updateSelectedHeadImgView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

