//
//  PFAuthClientConfigBuilder.h
//  AuthCore
//
//  Created by Kattamuri, Mani on 8/2/17.
//  Copyright © 2017 Paypal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PFEnvironmentUtil.h"
@class PFAuthClientConfig;


@interface PFAuthClientConfigBuilder : NSObject

@property(nonnull, nonatomic, readonly) NSString *clientId;
@property(nonnull, nonatomic, readonly) NSString *redirectURL;
@property(nonnull, nonatomic, readonly) NSURL *tokenURL;
@property(nonnull, nonatomic, readonly) NSURL *authorizationURL;
@property(nonnull, nonatomic, readonly) NSArray<NSString *> *scopes;


- (nullable PFAuthClientConfig *)buildAuthClientConfig;

- (nullable instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithClientId:(nonnull NSString *)clientId redirectURL:(nonnull NSString *)redirectURL scopes:(nonnull NSArray<NSString *> *)scopes;

- (nullable PFAuthClientConfigBuilder *)setCurrentEnvironment:(PFEnvironment)environment;

@end
