//
//  WXClient.h
//  SimpleWeather
//
//  Created by Chenyang Zhu on 10/23/15.
//  Copyright © 2015 Chenyang. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;
@import Foundation;
#import <ReactiveCocoa/ReactiveCocoa.h>

@interface WXClient : NSObject

- (RACSignal *)fetchJSONFromURL:(NSURL *)url;
- (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;

@end
