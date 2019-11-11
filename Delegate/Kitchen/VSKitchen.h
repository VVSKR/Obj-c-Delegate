//
//  VSKitchen.h
//  Delegate
//
//  Created by Vova SKR on 08/11/2019.
//  Copyright © 2019 Vova SKR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KitchenProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface VSKitchen : NSObject <KitchenProtocol>

@property (weak, nonatomic) id <WaiterDelegate> delegateWaiter;

- (void) foodСooked;

@end

NS_ASSUME_NONNULL_END
