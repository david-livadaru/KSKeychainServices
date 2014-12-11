//
//  KSKeychainSession.m
//  KSKeychainServices
//
//  Created by david on 11/12/14.
//  Copyright (c) 2014 David Live Org. All rights reserved.
//

@import Security;
#import <KSKeychainServices/KSKeychainRequest.h>
#import "KSKeychainSession.h"

@implementation KSKeychainSession

#pragma mark - Object Life Cycle

- (instancetype)init {
    self = [super init];
    
    if (self) {
        
    }
    
    return self;
}

#pragma mark - Facilities

- (void)performRequest:(KSKeychainRequest *)request completionBlock:(void (^)(NSData *data, NSError *__autoreleasing *error))completionBlock {
    
}

#pragma mark - Error Creation

- (NSError *)errorForOSStatus:(OSStatus)status {
    switch (status) {
        case errSecSuccess:
            return nil;
        case errSecUnimplemented: {
#warning TODO: set a relevant user info
            return [[NSError alloc] initWithDomain:NSOSStatusErrorDomain
                                              code:errSecUnimplemented
                                          userInfo:nil];
        }
        case errSecParam: {
#warning TODO: set a relevant user info
            return [[NSError alloc] initWithDomain:NSOSStatusErrorDomain
                                              code:errSecParam
                                          userInfo:nil];
        }
        case errSecAllocate: {
#warning TODO: set a relevant user info
            return [[NSError alloc] initWithDomain:NSOSStatusErrorDomain
                                              code:errSecAllocate
                                          userInfo:nil];
        }
        case errSecNotAvailable: {
#warning TODO: set a relevant user info
            return [[NSError alloc] initWithDomain:NSOSStatusErrorDomain
                                              code:errSecNotAvailable
                                          userInfo:nil];
        }
        case errSecAuthFailed: {
#warning TODO: set a relevant user info
            return [[NSError alloc] initWithDomain:NSOSStatusErrorDomain
                                              code:errSecAuthFailed
                                          userInfo:nil];
        }
        case errSecDuplicateItem: {
#warning TODO: set a relevant user info
            return [[NSError alloc] initWithDomain:NSOSStatusErrorDomain
                                              code:errSecDuplicateItem
                                          userInfo:nil];
        }
        case errSecItemNotFound: {
#warning TODO: set a relevant user info
            return [[NSError alloc] initWithDomain:NSOSStatusErrorDomain
                                              code:errSecItemNotFound
                                          userInfo:nil];
        }
        case errSecInteractionNotAllowed: {
#warning TODO: set a relevant user info
            return [[NSError alloc] initWithDomain:NSOSStatusErrorDomain
                                              code:errSecInteractionNotAllowed
                                          userInfo:nil];
        }
        case errSecDecode: {
#warning TODO: set a relevant user info
            return [[NSError alloc] initWithDomain:NSOSStatusErrorDomain
                                              code:errSecDecode
                                          userInfo:nil];
        }
        default: // unknown error
            return nil;
    }
}

@end
