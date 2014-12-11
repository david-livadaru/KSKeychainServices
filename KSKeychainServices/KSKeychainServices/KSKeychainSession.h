//
//  KSKeychainSession.h
//  KSKeychainServices
//
//  Created by david on 11/12/14.
//  Copyright (c) 2014 David Live Org. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KSKeychainServices/KSKeychainDefines.h>

@class KSKeychainRequest;

@interface KSKeychainSession : NSObject

- (instancetype)init NS_DESIGNATED_INITIALIZER;

- (void)performRequest:(KSKeychainRequest *)request completionBlock:(void (^)(NSData *data, NSError *__autoreleasing *error))completionBlock;

@end
