//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AppRecordMessageNodeView.h"

@class UILabel;

@interface AppNoteMessageNodeView : AppRecordMessageNodeView
{
    UILabel *m_TitleLabel;
    UILabel *m_ContentLabel;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)createDashLine;
- (id)cutImage:(id)arg1 toFitSize:(struct CGSize)arg2;
- (id)getDisplayImgDatas:(id)arg1;
- (int)getImgDataCount:(id)arg1;
- (void)initSourceView;
- (void)layoutSubviewsImgText:(id)arg1;
- (void)layoutSubviewsImgs:(id)arg1;
- (void)layoutSubviewsInternal;
- (void)layoutSubviewsOnlyText:(id)arg1;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)updateBkgImage:(_Bool)arg1;

@end

