//
//  BLCMediaFullScreenAnimator.h
//  Blocstagram
//
//  Created by Colt Hansen on 11/10/14.
//  Copyright (c) 2014 Colt Hansen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BLCMediaFullScreenAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign) BOOL presenting;
@property (nonatomic, weak) UIImageView *cellImageView;

@end
