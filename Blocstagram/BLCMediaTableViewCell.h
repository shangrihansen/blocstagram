//
//  BLCMediaTableViewCell.h
//  Blocstagram
//
//  Created by Colt Hansen on 11/2/14.
//  Copyright (c) 2014 Colt Hansen. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;

@interface BLCMediaTableViewCell : UITableViewCell

@property (nonatomic, strong) BLCMedia *mediaItem;

+ (CGFloat) heightForMediaItem:(BLCMedia *)mediaItem width:(CGFloat)width;

@end
