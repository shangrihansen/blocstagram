//
//  BLCMediaTableViewCell.h
//  Blocstagram
//
//  Created by Colt Hansen on 11/2/14.
//  Copyright (c) 2014 Colt Hansen. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia, BLCMediaTableViewCell;

@protocol BLCMediaTableViewCellDelegate <NSObject>

- (void) cell:(BLCMediaTableViewCell *)cell didTapImageView:(UIImageView *)imageView;
- (void) cell:(BLCMediaTableViewCell *)cell didLongPressImageView:(UIImageView *)imageView;

//retry image downloads assignment
- (void) cell:(BLCMediaTableViewCell *)cell didTwoFingerTapImageView:(UIImageView *)imageView;

@end

@interface BLCMediaTableViewCell : UITableViewCell

@property (nonatomic, strong) BLCMedia *mediaItem;
@property (nonatomic, weak) id <BLCMediaTableViewCellDelegate> delegate;

+ (CGFloat) heightForMediaItem:(BLCMedia *)mediaItem width:(CGFloat)width;

@end
