//
//  VSWaiter.h
//  Delegate
//
//  Created by Vova SKR on 08/11/2019.
//  Copyright © 2019 Vova SKR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WaiterProtocol.h"
#import "WaiterDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface VSWaiter : NSObject <WaiterProtocol, WaiterDelegate>

@property (strong, nonatomic)id <KitchenProtocol> delegateKitchen;
@property (weak, nonatomic)id <GuestDelegate> delegateGuest;

-(void)transferToKitchen;
-(void)foodServed;

@end


NS_ASSUME_NONNULL_END
