//
//  ViewController.m
//  Native Checkout Sample
//
//  Created by Anderson,Derek on 11/15/17.
//  Copyright © 2017 PayPal. All rights reserved.
//
#import <NativeCheckout/PYPLCheckout.h>
#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
  [super viewDidLoad];
  // Do any additional setup after loading the view, typically from a nib.
  
  UIWebView *webview=[[UIWebView alloc]initWithFrame:[UIScreen mainScreen].bounds];
  NSString *url=@"merchant_url_for_store";
  NSURL *nsurl=[NSURL URLWithString:url];
  NSURLRequest *nsrequest=[NSURLRequest requestWithURL:nsurl];
  [webview loadRequest:nsrequest];
  [self.view addSubview:webview];
  [[PYPLCheckout sharedInstance] interceptWebView:webview];
}


- (void)didReceiveMemoryWarning {
  [super didReceiveMemoryWarning];
  // Dispose of any resources that can be recreated.
}


@end
