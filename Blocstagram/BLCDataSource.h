//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by Colt Hansen on 10/30/14.
//  Copyright (c) 2014 Colt Hansen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLCDataSource : NSObject

+(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;
@end