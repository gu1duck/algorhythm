//
//  PlaylistDetailViewController.h
//  Algorhythm
//
//  Created by Jeremy Petter on 2015-04-13.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Playlist;

@interface PlaylistDetailViewController : UIViewController

@property (strong, nonatomic) Playlist *playlist;
@property (weak, nonatomic) IBOutlet UIImageView *playlistCoverImage;
@property (weak, nonatomic) IBOutlet UILabel *playlistTitle;
@property (weak, nonatomic) IBOutlet UILabel *playlistDescription;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtists0;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtists1;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtists2;

@end
