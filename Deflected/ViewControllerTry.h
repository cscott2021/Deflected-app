//
//  ViewControllerTry.h
//  Deflected
//
//  Created by Caleb Scott on 3/13/16.
//  Copyright © 2016 Caleb Scott. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "game.h"


@interface ViewControllerTry : UIViewController{
    IBOutlet UIButton *four;
    IBOutlet UIButton *plus;
    IBOutlet UIButton *six;
    IBOutlet UIButton *five;
    IBOutlet UIImageView *sixplusB;
    IBOutlet UIImageView *sixB;
    IBOutlet UIImageView *fiveB;
    IBOutlet UIImageView *fourB;
    NSTimer *toPizza;
}
-(IBAction)cba;
@end
