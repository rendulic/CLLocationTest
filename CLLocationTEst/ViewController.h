//
//  ViewController.h
//  CLLocationTEst
//
//  Created by Igor Rendulic on 19/12/2013.
//  Copyright (c) 2013 Igor Rendulic. All rights reserved.
//

#import <UIKit/UIKit.h>

@import CoreLocation;

@interface ViewController : UIViewController <CLLocationManagerDelegate>

@property (strong, nonatomic) CLLocationManager *locationManager;

@end
