//
//  APNSItem.h
//  APNS Pusher
//
//  Created by Simon Blommegard on 14/03/15.
//  Copyright (c) 2015 Bowtie. All rights reserved.
//

#import "MTLModel.h"

typedef NS_ENUM(NSInteger, APNSItemMode) {
  APNSItemModeCustom,
  APNSItemModeKnuff
};

typedef NS_ENUM(NSInteger, APNSItemPriority) {
  APNSItemPriorityLater = 5,
  APNSItemPriorityImmediately = 10
};

@interface APNSItem : MTLModel
@property (nonatomic, copy) NSString *token;
@property (nonatomic, copy) NSString *payload;
@property (nonatomic) APNSItemMode mode;
@property (nonatomic, copy) NSString *certificateDescription;
@property (nonatomic) APNSItemPriority priority;
@end
