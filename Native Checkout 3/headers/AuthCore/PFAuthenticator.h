//
//  PFAuthenticator.h
//  AuthCore
//
//  Created by Kattamuri, Mani on 8/2/17.
//  Copyright © 2017 Paypal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class PFAuthClientConfig;
@class PFTokenResult;
@protocol PFAuthenticationDelegate;
@protocol OIDAuthorizationFlowSession;
@protocol PFTrackingDelegate;
@class PFAuthSessionWrapper;

@interface PFAuthenticator : NSObject

- (nullable instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithConfig:(nonnull PFAuthClientConfig *)configuration;

- (void)setTrackingDelegate:(nullable id<PFTrackingDelegate>)trackingDelegate;

- (void)authenticateForAccessTokenWithDelegate:(nullable id<PFAuthenticationDelegate>)authDelegate presentingViewController:(nonnull UIViewController *)presentingViewController;

- (void)authenticateForAccessTokenUsingRS256WithDelegate:(nullable id<PFAuthenticationDelegate>)authDelegate presentingViewController:(nonnull UIViewController *)presentingViewController;

- (void)logoutUser;

@end
