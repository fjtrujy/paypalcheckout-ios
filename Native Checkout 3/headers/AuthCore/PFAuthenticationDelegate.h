//
//  PFAuthenticationDelegate.h
//  AuthCore
//
//  Created by Kattamuri, Mani on 7/31/17.
//  Copyright © 2017 Paypal. All rights reserved.
//

#import "PFTokenResult.h"
@class PFAuthUnivLinkHandler;

@protocol PFAuthenticationDelegate

@optional

- (NSString *)getTrackingId;

- (void)onAuthenticationStarted:(PFAuthUnivLinkHandler *)authUnivLinkHandler;

- (void)completeWithSuccess:(PFTokenResult *)result;

- (void)completeWithFailure:(NSError *)failureMessage;

@end
