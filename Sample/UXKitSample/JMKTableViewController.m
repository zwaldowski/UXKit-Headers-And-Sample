//
//  JMKTableViewController.m
//  UXKitSample
//
//  Created by Michał Kałużny on 06.02.2015.
//  Copyright (c) 2015 justmaku. All rights reserved.
//

#import "JMKTableViewController.h"
#import "DMCollectionViewController.h"

@interface JMKTableViewController () <UXTableViewDataSource, UXTableViewDelegate>

@end

@implementation JMKTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self.tableView registerClass:[UXTableViewCell class] forCellWithReuseIdentifier:@"cell"];
}

- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2 {
    return 3;
}

- (CGFloat)tableView:(id)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2
{
    return 60.f;
}

-(id)tableView:(UXTableView *)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2 {
    UXTableViewCell *cell = [self.tableView dequeueReusableCellWithIdentifier:@"cell" forIndexPath:arg2];
    if (!cell) {
        cell = [[UXTableViewCell alloc] initWithStyle:0 reuseIdentifier:@"cell"];
    }
    
    cell.textLabel.text = @"Those Cells are beautiful";
    
    cell.backgroundColor = [NSColor lightGrayColor];
    
    return cell;
}

-(void)tableView:(UXTableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2
{
    DMCollectionViewController *collectionVC = [[DMCollectionViewController alloc] initWithNibName:nil bundle:nil];
    [self.navigationController pushViewController:collectionVC animated:YES];
}


@end
