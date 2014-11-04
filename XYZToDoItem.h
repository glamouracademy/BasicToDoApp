//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Charlotte Chang on 11/1/14.
//  Copyright (c) 2014 Charlotte Chang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
