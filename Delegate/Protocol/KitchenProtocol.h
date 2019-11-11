//
//  KitchenProtocol.h
//  Delegate
//
//  Created by Vova SKR on 11/11/2019.
//  Copyright © 2019 Vova SKR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WaiterDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@protocol KitchenProtocol <NSObject>

@property (weak, nonatomic) id<WaiterDelegate> waiter;

- (void) foodCooked;

@end

NS_ASSUME_NONNULL_END
