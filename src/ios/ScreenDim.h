//
//  ScreenDim.h
//  ios-cordova
//
//  Created by Andrew Lunny on 12-07-11.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>

@interface ScreenDim : CDVPlugin

- (void) enable:(CDVInvokedUrlCommand *)command;
- (void) disable:(CDVInvokedUrlCommand *)command;

@end
