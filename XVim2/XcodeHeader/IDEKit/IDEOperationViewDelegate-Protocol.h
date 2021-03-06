//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSString, NSWindow;

@protocol IDEOperationViewDelegate
@property(readonly) NSWindow *window;
- (void)endSheetImmediately;
- (void)endSheet;
- (void)enablePrimaryButton:(BOOL)arg1;
- (void)updateStatus:(NSString *)arg1 withState:(long long)arg2 error:(NSError *)arg3;
- (void)updateStatus:(NSString *)arg1 withState:(long long)arg2;
- (void)updateStatus:(NSString *)arg1 withProgress:(double)arg2;
- (void)displayError:(NSError *)arg1;
@end

