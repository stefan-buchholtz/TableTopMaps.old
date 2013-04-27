//
//  Map.h
//  TableTopMaps
//
//  Created by Stefan Buchholtz on 25.04.13.
//  Copyright (c) 2013 Stefan Buchholtz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class TTMMapObject;

@interface TTMMap : NSManagedObject

@property (nonatomic, retain) NSString * infoText;
@property (nonatomic, retain) NSString * backgroundImageFileName;
@property (nonatomic, retain) NSSet *objects;
@end

@interface TTMMap (CoreDataGeneratedAccessors)

- (void)addObjectsObject:(TTMMapObject *)value;
- (void)removeObjectsObject:(TTMMapObject *)value;
- (void)addObjects:(NSSet *)values;
- (void)removeObjects:(NSSet *)values;

@end
