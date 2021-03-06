//
//  BLETransportManager.h
//  BLEMeshChat
//
//  Created by Christopher Ballinger on 10/16/14.
//  Copyright (c) 2014 Christopher Ballinger. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BLEBroadcaster.h"
#import "BLEScanner.h"
#import "BLECrypto.h"
#import "BLEIdentityPacket.h"
#import "BLEDataStorage.h"

@class BLETransportManager;

@interface BLETransportManager : NSObject

@property (nonatomic, weak, readonly) id<BLEDataStorage> dataStorage;

- (instancetype) initWithDataStorage:(id<BLEDataStorage>)dataStorage;

- (void) start;
- (void) stop;

@end
