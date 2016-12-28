//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePopView.h"

@class NSAttributedString, UIButton, UIImageView, UILabel, UIView;

@interface AlertTipsPopView : BasePopView
{
    double _contentHeight;
    _Bool _autoDismiss;
    NSAttributedString *_message;
    id <AlertTipsPopViewDelegate> _alertDelegate;
    UIView *_titleView;
    UILabel *_titleLab;
    UIView *_contentView;
    UILabel *_messageLab;
    UILabel *_subMessageLab;
    UIImageView *_bottomLineView;
    UIView *_actionView;
    UIButton *_confirmBtn;
    UIButton *_cancleBtn;
}

@property(retain, nonatomic) UIButton *cancleBtn; // @synthesize cancleBtn=_cancleBtn;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIImageView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UILabel *subMessageLab; // @synthesize subMessageLab=_subMessageLab;
@property(retain, nonatomic) UILabel *messageLab; // @synthesize messageLab=_messageLab;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <AlertTipsPopViewDelegate> alertDelegate; // @synthesize alertDelegate=_alertDelegate;
@property(nonatomic) _Bool autoDismiss; // @synthesize autoDismiss=_autoDismiss;
@property(retain, nonatomic) NSAttributedString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)alertBtnHandler:(id)arg1;
- (id)initCustomAlertWithMessage:(id)arg1 subMessage:(id)arg2 confirm:(id)arg3 cancle:(id)arg4 result:(CDUnknownBlockType)arg5;
- (id)initCustomAlertWithMessage:(id)arg1 subMessage:(id)arg2 confirm:(id)arg3 cancle:(id)arg4 delegate:(id)arg5 tag:(long long)arg6;
- (id)initWithAttMessage:(id)arg1 subMessage:(id)arg2 confirm:(id)arg3 cancle:(id)arg4 delegate:(id)arg5 tag:(long long)arg6;
- (id)initWithAttMessage:(id)arg1 subMessage:(id)arg2 confirm:(id)arg3 cancle:(id)arg4 result:(CDUnknownBlockType)arg5;
- (id)initWithAttMessage:(id)arg1 confirm:(id)arg2 delegate:(id)arg3 tag:(long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end
