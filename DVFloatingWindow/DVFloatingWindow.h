//
//  DVFloatingWindow.h
//  DVFloatingWindow
//
//  Created by Dmitry Vorobyov on 7/26/13.
//  Copyright (c) 2013 Dmitry Vorobyov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DVDefinitions.h"
#import "DVLoggerConfiguration.h"
#import "DVMacros.h"

@interface DVFloatingWindow : UIView

+ (DVFloatingWindow *)sharedInstance;

- (void)windowShow;
- (void)windowHide;
- (void)windowActivationTapWithTouchesNumber:(NSUInteger)touchesNumber;
- (void)windowActivationLongPressWithTouchesNumber:(NSUInteger)touchesNumber
                              minimumPressDuration:(CFTimeInterval)minimumPressDuration;

- (void)tabShowPrevious;
- (void)tabShowNext;

- (void)loggerCreate:(NSString *)key;
- (void)loggerClear:(NSString *)key;
- (void)loggerRemove:(NSString *)key;
- (void)loggerSetConfiguration:(DVLoggerConfiguration *)configuration
                     forLogger:(NSString *)key;
- (void)loggerLog:(NSString *)string toLogger:(NSString *)key;

- (void)buttonAddWithTitle:(NSString *)title
                   handler:(DVFloatingWindowButtonHandler)handler;

@end
