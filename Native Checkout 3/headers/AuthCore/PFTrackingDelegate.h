//
//  PFTrackingDelegate.h
//  AuthCore
//
//  Created by Kattamuri, Mani on 9/18/17.
//  Copyright © 2017 Paypal. All rights reserved.
//

@protocol PFTrackingDelegate

- (void)trackEvent:(NSString *)event;

- (void)trackEvent:(NSString *)event withParams:(NSDictionary *)param;

@end

