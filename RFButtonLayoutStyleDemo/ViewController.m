//
//  ViewController.m
//  RFButtonLayoutStyleDemo
//
//  Created by riceFun on 2018/5/22.
//  Copyright © 2018年 riceFun. All rights reserved.
//

#import "ViewController.h"
#import "UIButton+ButtonLayoutStyle.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor grayColor];
    
    UIButton *button = [[UIButton alloc]initWithFrame:CGRectMake(50, 100, 50,50)];
    button.center = self.view.center;
    [button setBackgroundColor:[UIColor darkGrayColor]];
    [button setImage:[UIImage imageNamed:@"1"] forState:UIControlStateNormal];
    [button setTitle:@"左字右图" forState:UIControlStateNormal];

    [button setButtonLayoutStyle:LS_TopImage_BottomTitle padding:40];
    [self.view addSubview:button];
    
    int a = 0;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
