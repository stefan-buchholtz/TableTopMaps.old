//
//  TTMMapObject.h
//  TableTopMaps
//
//  Created by Stefan Buchholtz on 25.04.13.
//  Copyright (c) 2013 Stefan Buchholtz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class TTMMap;
@class TTMPoint;

@interface TTMMapObject : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * objectType;
@property (nonatomic, retain) NSNumber * transparent;
@property (nonatomic, retain) NSOrderedSet *points;
@property (nonatomic, retain) TTMMap *map;
@end

@interface TTMMapObject (CoreDataGeneratedAccessors)

- (void)insertObject:(TTMPoint *)value inPointsAtIndex:(NSUInteger)idx;
- (void)removeObjectFromPointsAtIndex:(NSUInteger)idx;
- (void)insertPoints:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removePointsAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInPointsAtIndex:(NSUInteger)idx withObject:(TTMPoint *)value;
- (void)replacePointsAtIndexes:(NSIndexSet *)indexes withPoints:(NSArray *)values;
- (void)addPointsObject:(TTMPoint *)value;
- (void)removePointsObject:(TTMPoint *)value;
- (void)addPoints:(NSOrderedSet *)values;
- (void)removePoints:(NSOrderedSet *)values;

@end
