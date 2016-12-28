//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePopView.h"

#import "PopViewDelegate.h"

@class UIButton, UIImageView, UILabel;

@interface HongbaoPrePopView : BasePopView <PopViewDelegate>
{
    UIImageView *_contentView;
    UILabel *_titleLab;
    UILabel *_moneyLab;
    UILabel *_remarkLab;
    UILabel *_tipsLab;
    UIButton *_actionBtn;
    UIButton *_closeBtn;
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *tipsLab; // @synthesize tipsLab=_tipsLab;
@property(retain, nonatomic) UILabel *remarkLab; // @synthesize remarkLab=_remarkLab;
@property(retain, nonatomic) UILabel *moneyLab; // @synthesize moneyLab=_moneyLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)alertBtnHandler:(id)arg1;
- (void)setupInfo:(id)arg1 money:(id)arg2 remark:(id)arg3 tips:(id)arg4 btnTitle:(id)arg5;
- (id)initWithTitle:(id)arg1 money:(id)arg2 remark:(id)arg3 tips:(id)arg4 btnTitle:(id)arg5 delegate:(id)arg6 tag:(long long)arg7;
- (id)initWithFrame:(struct CGRect)arg1;

@end
