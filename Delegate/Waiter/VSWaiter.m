//
//  VSWaiter.m
//  Delegate
//
//  Created by Vova SKR on 08/11/2019.
//  Copyright © 2019 Vova SKR. All rights reserved.
//

#import "VSWaiter.h"

@implementation VSWaiter

-(void) transferToKitchen {
    NSLog(@"Заказ передан на кухню");
    [self.delegateKitchen foodCooked];
}

-(void) foodServed {
    NSLog(@"Блюдо подано");
    [self.delegateGuest feedback];
    
}

@end
