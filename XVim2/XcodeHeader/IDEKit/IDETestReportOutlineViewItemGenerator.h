//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDETestReportOutlineViewItemGenerator : NSObject
{
}

+ (id)cellViewForTestInStatusColumn:(id)arg1 outlineView:(id)arg2;
+ (id)cellViewForPerfMetric:(id)arg1 testRun:(id)arg2 test:(id)arg3 outlineView:(id)arg4 testReport:(id)arg5;
+ (id)cellViewForTestRun:(id)arg1 test:(id)arg2 outlineView:(id)arg3 enableStatusButtonClicks:(BOOL)arg4 testReport:(id)arg5;
+ (id)cellViewForTestInDurationColumn:(id)arg1 outlineView:(id)arg2;
+ (id)durationStringFromTimeInterval:(double)arg1;
+ (id)cellViewForTestInTitleColumn:(id)arg1 outlineView:(id)arg2 highlightString:(id)arg3;
+ (void)addFilterStringSubrangeHighlightsToCell:(id)arg1 cellString:(id)arg2 highlightString:(id)arg3;
+ (id)cellViewForTestRunPickerInOutlineView:(id)arg1 pickerRowItem:(id)arg2 selectedTestRunInPopUp:(id)arg3 popUpTarget:(id)arg4;
+ (id)assertionsAttributedStringForTestFailure:(id)arg1 backgroundStyle:(long long)arg2 activity:(id)arg3 failureSummary:(id)arg4 wraps:(BOOL)arg5;
+ (id)assertionsAttributedStringForTestFailures:(id)arg1 noBaselines:(id)arg2;
+ (id)composedTitleAndDurationStringWithBackgroundStyle:(long long)arg1 activityString:(id)arg2 durationString:(id)arg3 assertion:(id)arg4 containsFailure:(BOOL)arg5 containsCrash:(BOOL)arg6 containsMemoryGraph:(BOOL)arg7 wraps:(BOOL)arg8;
+ (id)combinedAssertionsStringForFailureSummaries:(id)arg1;
+ (void)populateCellView:(id)arg1 withAssertionItem:(id)arg2 cellViewWidth:(double)arg3;

@end

