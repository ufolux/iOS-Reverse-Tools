//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ObjectBeanBase.h"

@class NSString;

@interface LeaderSwitchJobBean : ObjectBeanBase
{
    NSString *_job_id;
    NSString *_job_type;
    NSString *_start_time;
    NSString *_title;
    NSString *_area;
}

@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *start_time; // @synthesize start_time=_start_time;
@property(copy, nonatomic) NSString *job_type; // @synthesize job_type=_job_type;
@property(copy, nonatomic) NSString *job_id; // @synthesize job_id=_job_id;
- (void).cxx_destruct;

@end
