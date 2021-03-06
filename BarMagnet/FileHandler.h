//
//  FileHandler.h
//  Bar Magnet
//
//  Created by Carlo Tortorella on 24/03/13.
//  Copyright (c) 2013 Carlo Tortorella. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FileHandler : NSObject
{
	NSMutableDictionary * masterDict;
}
+ (FileHandler *)sharedInstance;

- (id)settingsValueForKey:(NSString *)key;
- (void)setSettingsValue:(id)value forKey:(NSString *)key;
- (NSOption *)webDataValueForKey:(NSString *)key andDict:(NSString *)dictName;
- (NSOption *)oldWebDataValueForKey:(NSString *)key;
- (void)setWebDataValue:(id)value forKey:(NSString *)key andDict:(NSString *)dictName;
- (void)saveAllPlists;
@end