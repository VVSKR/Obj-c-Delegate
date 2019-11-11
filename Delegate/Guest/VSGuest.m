//
//  VSGuest.m
//  Delegate
//
//  Created by Vova SKR on 08/11/2019.
//  Copyright © 2019 Vova SKR. All rights reserved.
//

#import "VSGuest.h"

@implementation VSGuest

-(void)orderFood {
    NSLog(@"Заказ офрмлен");
    [self.delegateWaiter transferToKitchen];
}

-(void)feedback {
    NSLog(@"Спасибо за обед");
}

@end
