#import <Foundation/Foundation.h>
#import "GClusterItem.h"

@protocol GClusterAlgorithm <NSObject>

- (void)addItem:(id <GClusterItem>) item;
- (void)removeItems;
- (void)removeItemsNotInRectangle:(CGRect)rect;
- (void)hideItemsNotInBounds: (GMSCoordinateBounds *)bounds;

- (void)removeItem:(id <GClusterItem>) item;
- (void)removeClusterItemsInSet:(NSSet *)set;
- (BOOL)containsItem:(id <GClusterItem>) item;
- (NSSet*)getClusters:(float)zoom;

@end
