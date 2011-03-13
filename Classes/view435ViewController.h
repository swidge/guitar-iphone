//
//  view435ViewController.h
//  view435
//
//  Created by mac on 2/24/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface view435ViewController : UIViewController {
	IBOutlet UILabel *label;
	IBOutlet UITextField *textField;
	NSMutableArray *backColors;
}

- (IBAction) changeLabel:(id) sender;
- (IBAction) changeBackground: (id) sender;

@end

