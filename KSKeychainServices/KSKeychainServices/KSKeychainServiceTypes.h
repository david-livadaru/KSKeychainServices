//
//  KSKeychainServiceTypes.h
//  KSKeychainServices
//
//  Created by david on 10/12/14.
//  Copyright (c) 2014 David Live Org. All rights reserved.
//

#import <Foundation/Foundation.h>

// Item class Key
FOUNDATION_EXPORT NSString * const kKSKeychainServicesClassKey;

// Class Types
FOUNDATION_EXPORT NSString * const kKSKeychainServicesClassTypeGenericPassword;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesClassTypeInternetPassword;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesClassTypeCertificate;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesClassTypeKey;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesClassTypeIdentity;

// Attribute Types
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeAccessible;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeAccessGroup;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeCreationDate;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeModificationDate;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeDescription;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeComment;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeCreator;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeType;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeLabel;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeIsInvisible;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeIsNegative;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeAccount;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeService;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAttributeTypeGeneric;

// Protocol Types
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeFTP;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeFTPAccount;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeHTTP;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeIRC;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeNNTP;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypePOP3;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeSMTP;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeSOCKS;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeIMAP;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeLDAP;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeAppleTalk;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeAFP;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeTelnet;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeSSH;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeFTPS;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeHTTPS;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeHTTPProxy;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeHTTPSProxy;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeFTPProxy;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeSMB;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeRTSP;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeRTSPProxy;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeDAAP;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeEPPC;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeIPP;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeNNTPS;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeLDAPS;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeTelnetS;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeIMAPS;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypeIRCS;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesProtocolTypePOP3S;

// Authentication Types
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAuthenticationTypeNTLM;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAuthenticationTypeMSN;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAuthenticationTypeDPA;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAuthenticationTypeRPA;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAuthenticationTypeHTTPBasic;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAuthenticationTypeHTTPDigest;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAuthenticationTypeHTMLForm;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAuthenticationTypeDefault;

// Class Access Types
FOUNDATION_EXPORT NSString * const kKSKeychainServicesClassAccessTypePublic;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesClassAccessTypePrivate;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesClassAccessTypeSymmetric;

// Algorithm Types
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAlgorithmTypeRSA;

// Accessible Values
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAccessibleWhenUnlocked;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAccessibleAfterFirstUnlock;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAccessibleAlways;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAccessibleWhenUnlockedThisDeviceOnly;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAccessibleAfterFirstUnlockThisDeviceOnly;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesAccessibleAlwaysThisDeviceOnly;

// Search Attribute Types
FOUNDATION_EXPORT NSString * const kKSKeychainServicesSearchAttributeTypePolicy;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesSearchAttributeTypeItemList;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesSearchAttributeTypeSearchList;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesSearchAttributeTypeIssuers;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesSearchAttributeTypeEmailAddressIfPresent;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesSearchAttributeTypeSubjectContains;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesSearchAttributeTypeCaseInsensitive;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesSearchAttributeTypeTrustedOnly;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesSearchAttributeTypeValidOnDate;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesSearchAttributeTypeLimit;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesSearchAttributeTypeLimitOne;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesSearchAttributeTypeLimitAll;

// Item List Types
FOUNDATION_EXPORT NSString * const kKSKeychainServicesItemListTypeList;

// Return Types
FOUNDATION_EXPORT NSString * const kKSKeychainServicesReturnTypeData;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesReturnTypeAttributes;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesReturnTypeReference;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesReturnTypePersistentReference;

// Value Types
FOUNDATION_EXPORT NSString * const kKSKeychainServicesValueTypeData;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesValueTypeReference;
FOUNDATION_EXPORT NSString * const kKSKeychainServicesValueTypePersistentReference;

