/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <AssetsLibrary/AssetsLibrary.h>

#import <React/RCTBridgeModule.h>
#import <React/RCTConvert.h>

@interface RCTConvert (ALAssetGroup)

+ (ALAssetsGroupType)ALAssetsGroupType:(id)json;
+ (ALAssetsFilter *)ALAssetsFilter:(id)json;

@end


@interface RCTCameraRollExtendedManager : NSObject <RCTBridgeModule>
  //+(void)addAssetURL:(NSURL*)assetURL toAlbum:(NSString*)albumName withCompletionBlock:(void (^)(NSURL *assetURL, NSError* error))completionBlock;
@end

