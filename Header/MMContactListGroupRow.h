//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMContactListRow.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MMContactListGroupRow : MMContactListRow
{
    NSString *_heading;
}

@property(retain, nonatomic) NSString *heading; // @synthesize heading=_heading;
- (void).cxx_destruct;
- (BOOL)shouldSelectRow;
- (double)getHeightOfRow;
- (id)makeRowViewForTableView:(id)arg1 width:(double)arg2 completion:(CDUnknownBlockType)arg3;

@end

