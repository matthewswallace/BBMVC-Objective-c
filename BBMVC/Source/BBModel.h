//
//  BBModel.h
//  Pods
//
//  Created by Matthew S Wallace on March/22/14.
//
//

#import <Foundation/Foundation.h>
#import "BBDataObject.h"

@interface BBModel : NSObject

@property(nonatomic,strong)NSMutableArray* views;

-(void)register:(NSObject*)view;
-(void)update:(BBDataObject*)obj;

@end
