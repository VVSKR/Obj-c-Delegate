//
//  VSKitchen.m
//  Delegate
//
//  Created by Vova SKR on 08/11/2019.
//  Copyright © 2019 Vova SKR. All rights reserved.
//

#import "VSKitchen.h"


@implementation VSKitchen

- (void) foodCooked {
    NSLog(@"Еда готова");
    [self.delegateWaiter foodServed];
}

@end
