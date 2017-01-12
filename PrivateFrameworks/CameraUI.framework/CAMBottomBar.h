/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMBottomBar : UIView <CAMExpandableMenuButtonDelegate> {
    CAMHDRButton * _HDRButton;
    CAMExpandableMenuButton * __expandedMenuButton;
    int  _backgroundStyle;
    UIView * _backgroundView;
    CAMFlashButton * _flashButton;
    CAMFlipButton * _flipButton;
    CAMImageWell * _imageWell;
    CAMIrisButton * _irisButton;
    int  _layoutStyle;
    CAMModeDial * _modeDial;
    UIButton * _reviewButton;
    CUShutterButton * _shutterButton;
    CUShutterButton * _stillDuringVideoButton;
    CAMTimerButton * _timerButton;
}

@property (nonatomic, retain) CAMHDRButton *HDRButton;
@property (setter=_setExpandedMenuButton:, nonatomic, retain) CAMExpandableMenuButton *_expandedMenuButton;
@property (nonatomic) int backgroundStyle;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, retain) CAMFlashButton *flashButton;
@property (nonatomic, retain) CAMFlipButton *flipButton;
@property (nonatomic, retain) CAMImageWell *imageWell;
@property (nonatomic, retain) CAMIrisButton *irisButton;
@property (nonatomic) int layoutStyle;
@property (nonatomic, retain) CAMModeDial *modeDial;
@property (nonatomic, retain) UIButton *reviewButton;
@property (nonatomic, retain) CUShutterButton *shutterButton;
@property (nonatomic, retain) CUShutterButton *stillDuringVideoButton;
@property (nonatomic, retain) CAMTimerButton *timerButton;

+ (BOOL)wantsVerticalBarForLayoutStyle:(int)arg1;

- (void).cxx_destruct;
- (id)HDRButton;
- (void)_commonCAMBottomBarInitializationInitWithLayoutStyle:(int)arg1;
- (id)_currentMenuButtons;
- (id)_expandedMenuButton;
- (void)_layoutFlipButtonForLayoutStyle:(int)arg1;
- (void)_layoutImageWellForLayoutStyle:(int)arg1;
- (void)_layoutMenuButtons:(id)arg1 apply:(BOOL)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (void)_layoutModeDialForLayoutStyle:(int)arg1;
- (void)_layoutReviewButtonForLayoutStyle:(int)arg1;
- (void)_layoutShutterButtonForLayoutStyle:(int)arg1;
- (void)_layoutStillDuringVideoButtonForLayoutStyle:(int)arg1;
- (float)_opacityForBackgroundStyle:(int)arg1;
- (void)_setExpandedMenuButton:(id)arg1;
- (void)_updateFlipButtonTappableEdgeInsets;
- (void)_updateImageWellTappableEdgeInsets;
- (int)backgroundStyle;
- (id)backgroundView;
- (void)collapseMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })collapsedFrameForMenuButton:(id)arg1;
- (void)expandMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })expandedFrameForMenuButton:(id)arg1;
- (id)flashButton;
- (id)flipButton;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)imageWell;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(int)arg1;
- (id)irisButton;
- (int)layoutStyle;
- (void)layoutSubviews;
- (id)modeDial;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)reviewButton;
- (void)setBackgroundStyle:(int)arg1;
- (void)setBackgroundStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setFlashButton:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setHDRButton:(id)arg1;
- (void)setImageWell:(id)arg1;
- (void)setIrisButton:(id)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setModeDial:(id)arg1;
- (void)setReviewButton:(id)arg1;
- (void)setShutterButton:(id)arg1;
- (void)setStillDuringVideoButton:(id)arg1;
- (void)setTimerButton:(id)arg1;
- (id)shutterButton;
- (id)stillDuringVideoButton;
- (id)timerButton;

@end