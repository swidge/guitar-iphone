//
//  view435AppDelegate.h
//  view435
//
//  Created by mac on 2/24/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class view435ViewController;

@interface view435AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    view435ViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet view435ViewController *viewController;

@end

