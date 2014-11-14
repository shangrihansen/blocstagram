//
//  BLCMediaFullScreenViewController.h
//  Blocstagram
//
//  Created by Colt Hansen on 11/6/14.
//  Copyright (c) 2014 Colt Hansen. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;

@protocol BLCMediaFullScreenViewControllerDelegate <NSObject>

- (void) shareMedia;

@end

@interface BLCMediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

@property (nonatomic, weak) id <BLCMediaFullScreenViewControllerDelegate> delegate;

- (instancetype) initWithMedia:(BLCMedia *)media;

- (void) centerScrollView;

@end
