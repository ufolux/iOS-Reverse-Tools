//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ObjectBeanBase.h"

@class NSString;

@interface ZMScoreBean : ObjectBeanBase
{
    NSString *_zm_open_id;
    long long _zm_status;
    long long _zm_score_scope;
    long long _zm_score;
}

@property(nonatomic) long long zm_score; // @synthesize zm_score=_zm_score;
@property(nonatomic) long long zm_score_scope; // @synthesize zm_score_scope=_zm_score_scope;
@property(nonatomic) long long zm_status; // @synthesize zm_status=_zm_status;
@property(retain, nonatomic) NSString *zm_open_id; // @synthesize zm_open_id=_zm_open_id;
- (void).cxx_destruct;

@end
