//
//  ViewController.m
//  Deflected
//
//  Created by Caleb Scott on 11/13/15.
//  Copyright © 2015 Caleb Scott. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end
@implementation ViewController



- (IBAction)RedPass:(id)sender{
    
    AppDelegate *delegate = [UIApplication sharedApplication].delegate;
    [delegate doSomethingWithString:@"RedBackground"];
}




- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


        




@end
