//
//  ViewController.m
//  Delegate
//
//  Created by Vova SKR on 08/11/2019.
//  Copyright © 2019 Vova SKR. All rights reserved.
//

#import "ViewController.h"
#import "VSGuest.h"
#import "VSWaiter.h"
#import "VSKitchen.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    self.guest = [VSGuest new];
    self.waiter = [VSWaiter new];
    self.kitchen = [VSKitchen new];
    
    self.guest.delegateWaiter = self.waiter;
    self.waiter.delegateKitchen = self.kitchen;
    self.waiter.delegateGuest = self.guest;
    self.kitchen.delegateWaiter = self.waiter;
   
    
}

- (IBAction)buttonAction:(id)sender {
    [self.guest orderFood];
}


@end
