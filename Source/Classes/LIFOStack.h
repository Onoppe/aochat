//
//  LIFOStack.h
//  aorc
//
//  Created by Reza Jelveh on 9/3/07.
//  Copyright 2007
//  License: GPL
//

#import <Cocoa/Cocoa.h>


@interface LIFOStack : NSObject {
	NSMutableArray * queue;
	unsigned int size;
	unsigned int currentSize;
}

- (void)push:(id)anArgument;
- (id)pop;
- (BOOL)hasItems;

@end
