//
//  SettingsViewController.h
//  Moonlight
//
//  Created by Diego Waxemberg on 10/27/14.
//  Copyright (c) 2014 Moonlight Stream. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface SettingsViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *bitrateLabel;
@property (strong, nonatomic) IBOutlet UISlider *bitrateSlider;
@property (strong, nonatomic) IBOutlet UISegmentedControl *framerateSelector;
@property (strong, nonatomic) IBOutlet UISegmentedControl *resolutionSelector;
@property (strong, nonatomic) IBOutlet UIView *resolutionDisplayView;
@property (strong, nonatomic) IBOutlet UISegmentedControl *touchModeSelector;
@property (strong, nonatomic) IBOutlet UISegmentedControl *onscreenControlSelector;
@property (strong, nonatomic) IBOutlet UISegmentedControl *optimizeSettingsSelector;
@property (strong, nonatomic) IBOutlet UISegmentedControl *multiControllerSelector;
@property (strong, nonatomic) IBOutlet UISegmentedControl *swapABXYButtonsSelector;
@property (strong, nonatomic) IBOutlet UISegmentedControl *audioOnPCSelector;
@property (strong, nonatomic) IBOutlet UISegmentedControl *codecSelector;
@property (strong, nonatomic) IBOutlet UISegmentedControl *hdrSelector;
@property (strong, nonatomic) IBOutlet UISegmentedControl *framePacingSelector;
@property (strong, nonatomic) IBOutlet UISegmentedControl *btMouseSelector;
@property (strong, nonatomic) IBOutlet UISegmentedControl *statsOverlaySelector;
@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;

// Overlay customization properties
@property (strong, nonatomic) IBOutlet UISlider *overlayPositionXSlider;
@property (strong, nonatomic) IBOutlet UISlider *overlayPositionYSlider;
@property (strong, nonatomic) IBOutlet UISlider *overlayScaleSlider;
@property (strong, nonatomic) IBOutlet UILabel *overlayPositionXLabel;
@property (strong, nonatomic) IBOutlet UILabel *overlayPositionYLabel;
@property (strong, nonatomic) IBOutlet UILabel *overlayScaleLabel;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunguarded-availability"

// This is okay because it's just an enum and access uses @available checks
@property(nonatomic) UIUserInterfaceStyle overrideUserInterfaceStyle;

#pragma clang diagnostic pop

- (void) saveSettings;

@end
