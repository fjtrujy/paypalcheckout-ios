//
//  PFEnvironmentUtil.h
//  AuthCore
//
//  Created by Kattamuri, Mani on 8/3/17.
//  Copyright © 2017 Paypal. All rights reserved.
//
#import <Foundation/Foundation.h>

typedef NS_ENUM(int, PFEnvironment)
{
    PFEnvironment_Unknown,
    PFEnvironment_Stage,
    PFEnvironment_Mock,
    PFEnvironment_Live,
    PFEnvironment_SandBox              // enum count
};

@interface PFEnvironmentUtil : NSObject

@property(nonnull, nonatomic, readonly, copy) NSString *tokenURL;
@property(nonnull, nonatomic, readonly, copy) NSString *authorizationURL;

- (nullable instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithEnvironment:(PFEnvironment)environment;

@end;
