//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "WCBizPickerViewDelegate.h"

@class NSArray, NSString, UIImageView, UILabel, UIPickerView, WCMallPayProductInfo;

@interface WCMallProductsPickerItem : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate, WCBizPickerViewDelegate>
{
    NSArray *m_arrProducts;
    WCMallPayProductInfo *m_oSelectedPayProductInfo;
    UIPickerView *m_pickerView;
    UIImageView *m_oRightCrossImageView;
    UILabel *m_oPriceLabel;
}

- (void).cxx_destruct;
- (void)SetText;
- (void)SetText:(unsigned int)arg1;
- (void)UIPickerViewDidCancel;
- (void)UIPickerViewDidFinish;
- (void)becomeFirstResponder;
- (void)dealloc;
- (id)getSelectedProductInfo;
- (id)getValue;
- (void)initView:(struct CGRect)arg1;
- (_Bool)multiComponets;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)productInfoInProductComponentForRow:(unsigned long long)arg1 inPickerView:(id)arg2;
- (void)setPriceLabelText:(id)arg1;
- (void)setProductsList:(id)arg1;
- (void)setSeletedProduct:(id)arg1;
- (void)setSeletedProductLatestInfo:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)updateFlowProducts:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

