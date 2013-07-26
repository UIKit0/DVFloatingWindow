//
//  DVFloatingWindow.h
//  DVFloatingWindow
//
//  Created by Dmitry Vorobyov on 7/26/13.
//  Copyright (c) 2013 Dmitry Vorobyov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DVFloatingWindow : UIView

+ (DVFloatingWindow *)sharedInstance;

- (void)show;
- (void)hide;

@end
