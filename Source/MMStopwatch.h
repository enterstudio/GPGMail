//
//  MMStopwatch.h
//  MBMLibrary
//
//  Created by Matt Maher on 1/24/12.
//  Copyright (c) 2012 FedEx. All rights reserved.
//

#import <Foundation/Foundation.h>
// - - - - - - - - - - - - - - - - - - -
@interface MMStopwatch : NSObject {
	@private
	NSMutableDictionary *items;
	
}
+ (void) start:(NSString *)name;
+ (void) stop:(NSString *)name;
+ (void) print:(NSString *)name;
@end


// - - - - - - - - - - - - - - - - - - -
@interface MMStopwatchItem : NSObject {
	@private
	NSString *name;
	NSDate *started;
	NSDate *stopped;
}
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDate *started;
@property (nonatomic, retain) NSDate *stopped;


+ (MMStopwatchItem *) itemWithName:(NSString *)name;

- (void) stop;

- (NSTimeInterval) runtime;
- (double) runtimeMills;
- (NSString *) fullDescription;
- (NSString *) runtimePretty;
@end



