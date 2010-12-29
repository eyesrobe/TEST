//
//  HelloWorldAppDelegate.h
//  HelloWorld
//
//  Created by Sato Toshiyuki on 10/12/29.
//  Copyright 2010 Sato Toshiyuki. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloWorldViewController;

@interface HelloWorldAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    HelloWorldViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet HelloWorldViewController *viewController;

@end

