//
//  ViewController.m
//  collate-ios
//
//  Created by Larsson Burch on 2/11/18.
//  Copyright © 2018 moist. All rights reserved.
//

#import "MCOViewController.h"
#import "Playground.hpp"

@interface ViewController ()
{
    Playground _playground;
    __weak IBOutlet UIButton *_testibleButton;
}
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)RunTestible
{
    _playground.InitializeSql();
    NSString* newTitle = [NSString stringWithCString:_playground.Testible().c_str() encoding:[NSString defaultCStringEncoding]];
    
    [_testibleButton setTitle:newTitle forState:UIControlStateNormal];
}

@end
