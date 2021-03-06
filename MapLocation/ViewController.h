//
//  ViewController.h
//  MapLocation
//
//  Created by optimusmac4 on 7/20/15.
//  Copyright (c) 2015 optimusmac4. All rights reserved.
//
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) CLLocationManager *locationManager;

@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@property (weak, nonatomic) IBOutlet UILabel *labelLatitude;

@property (weak, nonatomic) IBOutlet UILabel *labelLongitude;

@property (weak, nonatomic) IBOutlet UILabel *labelAltitude;


- (IBAction)setMap:(id)sender;


@end

