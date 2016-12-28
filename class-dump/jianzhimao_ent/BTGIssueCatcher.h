//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface BTGIssueCatcher : NSObject
{
    int _networkStatus;
    NSMutableDictionary *_issues;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *issues; // @synthesize issues=_issues;
- (void).cxx_destruct;
- (void)flush;
- (void)uploadIssueWithKey:(id)arg1;
- (void)uploadImageWithKey:(id)arg1;
- (void)upload:(id)arg1;
- (void)removeCacheImageForKey:(id)arg1;
- (void)cacheImage:(id)arg1 forkey:(id)arg2 autoUpload:(_Bool)arg3 flush:(_Bool)arg4;
- (void)cacheImage:(id)arg1 forkey:(id)arg2;
- (void)addFeedback:(id)arg1;
- (void)addCrash:(id)arg1;
- (void)addIssue:(id)arg1;
- (void)addIssue:(id)arg1 upload:(_Bool)arg2;
- (void)uploadPendingIssues;
- (void)loadPendingIssues;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)init;

@end
