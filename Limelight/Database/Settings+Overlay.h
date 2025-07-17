//
//  Settings+Overlay.h
//  Moonlight
//
//  Created for issue #637
//  Copyright © 2025 Moonlight Stream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface Settings : NSManagedObject

@property (nonatomic, retain) NSNumber * bitrate;
@property (nonatomic, retain) NSNumber * framerate;
@property (nonatomic, retain) NSNumber * height;
@property (nonatomic, retain) NSNumber * width;
@property (nonatomic, retain) NSNumber * audioConfig;
@property (nonatomic, retain) NSNumber * onscreenControls;
@property (nonatomic, retain) NSString * uniqueId;
@property (nonatomic) BOOL optimizeGames;
@property (nonatomic) BOOL multiController;
@property (nonatomic) BOOL swapABXYButtons;
@property (nonatomic) BOOL playAudioOnPC;
@property (nonatomic) uint32_t preferredCodec;
@property (nonatomic) BOOL useFramePacing;
@property (nonatomic) BOOL enableHdr;
@property (nonatomic) BOOL btMouseSupport;
@property (nonatomic) BOOL absoluteTouchMode;
@property (nonatomic) BOOL statsOverlay;

// Overlay customization properties
@property (nonatomic, retain) NSNumber * overlayPositionX;
@property (nonatomic, retain) NSNumber * overlayPositionY;
@property (nonatomic, retain) NSNumber * overlayScale;

@end