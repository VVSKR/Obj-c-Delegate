//
//  VSGuest.h
//  Delegate
//
//  Created by Vova SKR on 08/11/2019.
//  Copyright © 2019 Vova SKR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WaiterProtocol.h"
#import "GuestDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface VSGuest : NSObject <GuestDelegate>

@property (strong, nonatomic)id <WaiterProtocol> delegateWaiter;

-(void) orderFood;
-(void)feedback;


@end

NS_ASSUME_NONNULL_END
