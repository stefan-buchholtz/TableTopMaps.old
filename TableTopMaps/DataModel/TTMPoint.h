//
//  Point.h
//  TableTopMaps
//
//  Created by Stefan Buchholtz on 25.04.13.
//  Copyright (c) 2013 Stefan Buchholtz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class TTMMapObject;

@interface TTMPoint : NSManagedObject

@property (nonatomic, retain) NSNumber * x;
@property (nonatomic, retain) NSNumber * y;
@property (nonatomic, retain) TTMMapObject *mapObject;

@end
