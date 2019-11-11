//
//  WaiterProtocol.h
//  Delegate
//
//  Created by Vova SKR on 11/11/2019.
//  Copyright © 2019 Vova SKR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KitchenProtocol.h"
#import "GuestDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@protocol WaiterProtocol <NSObject>

@property (strong, nonatomic) id<KitchenProtocol> cook;
@property (weak, nonatomic) id<GuestDelegate> guest;

- (void)transferToKitchen;

@end

NS_ASSUME_NONNULL_END
