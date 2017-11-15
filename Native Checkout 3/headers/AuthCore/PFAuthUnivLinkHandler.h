//
//  PFAuthUnivLinkHandler.h
//  AuthCore
//
//  Created by Kattamuri, Mani on 8/8/17.
//  Copyright © 2017 Paypal. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol OIDAuthorizationFlowSession;

@interface PFAuthUnivLinkHandler : NSObject

- (nullable instancetype)initWithAuthSession:(nonnull id<OIDAuthorizationFlowSession>)currentAuthorizationFlow;
- (BOOL)continueAuthFlowWithURL:(nonnull NSURL *)URL;

@end
