//
//  game2.h
//  Deflected
//
//  Created by Caleb Scott on 2/25/16.
//  Copyright © 2016 Caleb Scott. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
@import GoogleMobileAds;


@interface game2 : UIViewController{

    
    
    
    int PaddleStore;
    int BackgroundStore;
    
    
    int BallStoreI;
    int Y;
    int X;
    NSInteger ScoreNumber;
    int EndScoreNumber;
    int coinNumber;
    int Paddle;
    int Background;
    NSInteger BallS;
    NSInteger HighScore;

    IBOutlet UILabel *HighScoreLabel;
    IBOutlet GADBannerView *Banner;
    IBOutlet GADBannerView *Banner2;
    IBOutlet GADBannerView *Banner3;
    IBOutlet UIImageView *BallStoreImage;
    IBOutlet UIButton *Buy;

    IBOutlet UIImage *Bg;
    
    IBOutlet UIButton *WhiteBallUse;
    IBOutlet UIButton *BlackBallUse;
    IBOutlet UIButton *StrobeBallUse;
    IBOutlet UIButton *OrangeBallUse;
    IBOutlet UIButton *PinkBallUse;
    IBOutlet UIButton *PurpleBallUse;
    IBOutlet UIButton *DarkGreenBallUse;
    IBOutlet UIButton *tealBallUse;
    IBOutlet UIButton *BrightGreenBallUse;
    IBOutlet UIButton *GreenBallUse;
    IBOutlet UIButton *SkyBlueBallUse;
    IBOutlet UIButton *AquaMarineBallUse;
    IBOutlet UIButton *RedBallUse;
    IBOutlet UIButton *SilverBallUse;
    IBOutlet UIButton *BlueBallUse;
    IBOutlet UIButton *GoldBallUse;
    IBOutlet UIButton *OrangeTintBallUse;
    IBOutlet UIButton *BlueTintBallUse;
    IBOutlet UIButton *GreenTintBallUse;
    IBOutlet UIButton *DeepRedTintBallUse;
    
    
    IBOutlet UILabel *BallCoins;
    IBOutlet UILabel *Score;
    IBOutlet UILabel *HomeCoins;
    IBOutlet UIView *BallStore;
    IBOutlet UIView *Start_View;
    IBOutlet UIImageView *Ball;
    IBOutlet UIImageView *Ball2;
    IBOutlet UIImageView *Ball3;
    IBOutlet UIButton *StartButton;
    IBOutlet UIImageView *PlayerXtop;
    IBOutlet UIImageView *PlayerXbottom;
    IBOutlet UIImageView *PlayerYleft;
    IBOutlet UIImageView *PlayerYright;
    IBOutlet UILabel *Coins;
    IBOutlet UILabel *ScoreLabel;
    IBOutlet UIButton *Exit;
    IBOutlet UILabel *EndScore;
    IBOutlet UILabel *SideControl;
    

    AVAudioPlayer *_audioPlayer;
    
    IBOutlet UILabel *BallStoreLabel;
    
    IBOutlet UIImageView *Top;
    IBOutlet UIImageView *Bottom;
    IBOutlet UIImageView *Left;
    IBOutlet UIImageView *Right;
    

    
    
    
    
    NSTimer *timer;
    NSTimer *timer2;
    
    NSTimer *timer3;
    NSTimer *timer4;
    NSTimer *timer5;
    NSTimer *timer6;
    NSTimer *timer7;
    NSTimer *timer10;
    
    NSTimer *Ball11;
    NSTimer *Ball12;
    NSTimer *Ball13;
    NSTimer *Ball14;
    NSTimer *Ball15;
    NSTimer *Ball16;
    NSTimer *Ball17;
    NSTimer *Ball18;
    NSTimer *Ball19;
    NSTimer *Ball20;
    NSTimer *Ball1;
    NSTimer *Ball21;
    NSTimer *Ball22;
    NSTimer *Ball4;
    NSTimer *Ball5;
    NSTimer *Ball6;
    NSTimer *Ball7;
    NSTimer *Ball8;
    NSTimer *Ball9;
    NSTimer *Ball10;
    NSTimer *ScoreTime;
    
    
    
    IBOutlet UIButton *WhiteBgUse;
    IBOutlet UIButton *BlackBgUse;
    IBOutlet UIButton *StrobeBgUse;
    IBOutlet UIButton *OrangeBgUse;
    IBOutlet UIButton *PinkBgUse;
    IBOutlet UIButton *PurpleBgUse;
    IBOutlet UIButton *DarkGreenBgUse;
    IBOutlet UIButton *tealBgUse;
    IBOutlet UIButton *BrightGreenBgUse;
    IBOutlet UIButton *GreenBgUse;
    IBOutlet UIButton *SkyBlueBgUse;
    IBOutlet UIButton *AquaMarineBgUse;
    IBOutlet UIButton *RedBgUse;
    IBOutlet UIButton *SilverBgUse;
    IBOutlet UIButton *BlueBgUse;
    IBOutlet UIButton *GoldBgUse;
    IBOutlet UIButton *OrangeTintBgUse;
    IBOutlet UIButton *BlueTintBgUse;
    IBOutlet UIButton *GreenTintBgUse;
    IBOutlet UIButton *DeepRedTintBgUse;
}



-(IBAction)Buy:(id)sender;
-(IBAction)LeftArrow:(id)sender;
-(IBAction)RightArrow:(id)sender;

-(IBAction)Start_First:(id)sender;
-(IBAction)Store:(id)sender;
-(IBAction)Exit:(id)sender;
-(IBAction)Startscore:(id)sender;
-(IBAction)BallMove;
-(IBAction)Score;



-(IBAction)PaddleHome:(id)sender;
-(IBAction)Play:(id)sender;
-(IBAction)StartButton:(id)sender;
-(void)BallMovement;
-(void)Collision;
-(void)CollisionScore;





-(IBAction)WhiteBallUse;
-(IBAction)BlackBallUse;
-(IBAction)StrobeBallUse;
-(IBAction)OrangeBallUse;
-(IBAction)PinkBallUse;
-(IBAction)PurpleBallUse;
-(IBAction)DarkGreenBallUse;
-(IBAction)tealBallUse;
-(IBAction)BrightGreenBallUse;
-(IBAction)GreenBallUse;
-(IBAction)SkyBlueBallUse;
-(IBAction)AquaMarineBallUse;
-(IBAction)RedBallUse;
-(IBAction)SilverBallUse;
-(IBAction)BlueBallUse;
-(IBAction)GoldBallUse;
-(IBAction)OrangeTintBallUse;
-(IBAction)BlueTintBallUse;
-(IBAction)GreenTintBallUse;
-(IBAction)DeepRedTintBallUse;







-(void)ScoreHope;
@end
