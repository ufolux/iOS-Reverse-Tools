//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ITTCalendarGridView.h"

@class CircleView, UIButton;

@interface ITTBaseCalendarGridView : ITTCalendarGridView
{
    UIButton *gridButton;
    CircleView *_cirbleBg;
    CircleView *_dotView;
}

@property(retain, nonatomic) CircleView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) CircleView *cirbleBg; // @synthesize cirbleBg=_cirbleBg;
@property(retain, nonatomic) UIButton *gridButton; // @synthesize gridButton;
- (void).cxx_destruct;
- (void)handleDot:(_Bool)arg1;
- (void)handleSelectedBg:(_Bool)arg1;
- (void)handleSelectedEvent;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)deselect;
- (void)select;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onGridButtonTouched:(id)arg1;

@end
