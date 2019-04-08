//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  2 2019 07:17:21).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#ifndef NIBUNLOCKER_NIBDOCUMENT_H
#define NIBUNLOCKER_NIBDOCUMENT_H

#import <Foundation/NSObject.h>
#import <AppKit/NSDocument.h>

#ifndef VISIBILITY_HIDDEN
#define VISIBILITY_HIDDEN __attribute__((visibility("hidden")))
#endif /* __attribute__((visibility("hidden"))) */

VISIBILITY_HIDDEN
@interface NibDocument : NSDocument
{
}

- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (id)windowNibName;
@end

#endif /* NIBUNLOCKER_NIBDOCUMENT_H */
