//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CircleView, NSString, UIImageView, UILabel;

@interface FuncButton : UIButton
{
    _Bool _showBadge;
    NSString *_descStr;
    UIImageView *_funcImgView;
    UILabel *_funcLabel;
    UILabel *_descLabel;
    UIImageView *_funcBg;
    CircleView *_redBadge;
}

@property(retain, nonatomic) CircleView *redBadge; // @synthesize redBadge=_redBadge;
@property(retain, nonatomic) UIImageView *funcBg; // @synthesize funcBg=_funcBg;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *funcLabel; // @synthesize funcLabel=_funcLabel;
@property(retain, nonatomic) UIImageView *funcImgView; // @synthesize funcImgView=_funcImgView;
@property(copy, nonatomic) NSString *descStr; // @synthesize descStr=_descStr;
@property(nonatomic) _Bool showBadge; // @synthesize showBadge=_showBadge;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)restoreFromHighlighted;
- (void)changeToHighlighted;
- (void)setupView;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end
