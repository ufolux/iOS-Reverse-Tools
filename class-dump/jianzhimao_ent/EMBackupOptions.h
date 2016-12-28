//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EMASIHTTPRequest, NSString;

@interface EMBackupOptions : NSObject
{
    int _type;
    NSString *_modelId;
    long long _status;
    EMASIHTTPRequest *_request;
}

@property(retain, nonatomic) EMASIHTTPRequest *request; // @synthesize request=_request;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
- (void).cxx_destruct;
- (id)initWithRestore:(id)arg1;
- (id)initWithBackup:(id)arg1;
- (id)init;

@end
