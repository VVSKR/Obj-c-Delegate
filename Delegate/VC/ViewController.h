//
//  ViewController.h
//  Delegate
//
//  Created by Vova SKR on 08/11/2019.
//  Copyright © 2019 Vova SKR. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VSGuest.h"
#import "VSWaiter.h"
#import "VSKitchen.h"

@interface ViewController : UIViewController

@property (strong, nonatomic) VSGuest *guest;
@property (strong, nonatomic) VSWaiter *waiter;
@property (strong, nonatomic) VSKitchen *kitchen;

@end

