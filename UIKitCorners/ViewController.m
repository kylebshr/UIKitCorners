//
//  ViewController.m
//  UIKitCorners
//
//  Created by Kyle Bashour on 10/24/20.
//

#import "ViewController.h"

#define CornerRadiusConfiguration NSClassFromString(@"BSCornerRadiusConfiguration")

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    NSBundle *baseBoard = [[NSBundle alloc] initWithPath:@"/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BaseBoard.framework"];

    [baseBoard load];

}


@end
