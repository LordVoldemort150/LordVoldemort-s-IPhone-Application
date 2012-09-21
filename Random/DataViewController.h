//
//  DataViewController.h
//  Random
//
//  Created by Daniel Bolster on 21/09/12.
//  Copyright (c) 2012 Daniel Bolster. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
