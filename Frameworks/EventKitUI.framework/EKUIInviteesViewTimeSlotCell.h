/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSDate, NSDictionary, NSLayoutConstraint, NSMutableDictionary, UIButton, UIColor, UIImageView, UILabel, UITapGestureRecognizer, UITextView, UIView;

@interface EKUIInviteesViewTimeSlotCell : UITableViewCell {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _andMoreBoundingRect;
    UIView *_andMoreDebugOverlay;
    NSDictionary *_andMoreStringCache;
    UILabel *_bottomTimeLabel;
    NSLayoutConstraint *_bottomTimeLabelHeightConstraint;
    NSLayoutConstraint *_bottomTimeLabelToTopTimeLabelConstraint;
    NSArray *_busyParticipants;
    BOOL _checked;
    UIImageView *_checkmarkImageView;
    NSMutableDictionary *_colorToBusyImageAttributedString;
    NSDate *_endDate;
    UILabel *_labelForTextSizeTesting;
    UITextView *_participantsTextView;
    NSLayoutConstraint *_participantsViewToBottomTimeLabelConstraint;
    NSLayoutConstraint *_participantsViewToContentViewConstraint;
    NSArray *_persistentConstraints;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _showAllConflictedParticipantsTapped;

    BOOL _showAllParticipants;
    UIButton *_showPreviewButton;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _showPreviewOfEventAtTime;

    NSDate *_startDate;
    UITapGestureRecognizer *_tappedMoreRecognizer;
    UITextView *_textViewForTextSizeTesting;
    UILabel *_topTimeLabel;
    NSLayoutConstraint *_topTimeLabelHeightConstraint;
    NSLayoutConstraint *_topTimeLabelToTopContentViewConstraint;
    BOOL _updateFontBasedConstraints;
    BOOL _updateParticipantsText;
    BOOL _updateTimeText;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } andMoreBoundingRect;
@property(retain) UIView * andMoreDebugOverlay;
@property(retain) NSDictionary * andMoreStringCache;
@property(retain) UILabel * bottomTimeLabel;
@property(retain) NSLayoutConstraint * bottomTimeLabelHeightConstraint;
@property(retain) NSLayoutConstraint * bottomTimeLabelToTopTimeLabelConstraint;
@property(retain) NSArray * busyParticipants;
@property BOOL checked;
@property(retain) UIImageView * checkmarkImageView;
@property(retain) NSMutableDictionary * colorToBusyImageAttributedString;
@property(retain) NSDate * endDate;
@property(retain) UILabel * labelForTextSizeTesting;
@property(readonly) UIColor * participantsTextColor;
@property(retain) UITextView * participantsTextView;
@property(retain) NSLayoutConstraint * participantsViewToBottomTimeLabelConstraint;
@property(retain) NSLayoutConstraint * participantsViewToContentViewConstraint;
@property(retain) NSArray * persistentConstraints;
@property(copy) id showAllConflictedParticipantsTapped;
@property BOOL showAllParticipants;
@property(retain) UIButton * showPreviewButton;
@property(copy) id showPreviewOfEventAtTime;
@property(retain) NSDate * startDate;
@property(retain) UITapGestureRecognizer * tappedMoreRecognizer;
@property(retain) UITextView * textViewForTextSizeTesting;
@property(readonly) UIColor * timeTextColor;
@property(retain) UILabel * topTimeLabel;
@property(retain) NSLayoutConstraint * topTimeLabelHeightConstraint;
@property(retain) NSLayoutConstraint * topTimeLabelToTopContentViewConstraint;
@property BOOL updateFontBasedConstraints;
@property BOOL updateParticipantsText;
@property BOOL updateTimeText;

+ (id)_andMoreLeftSpacing;
+ (id)_generateAndMoreStringWithCount:(unsigned int)arg1 attributes:(id)arg2;
+ (id)_generateParticipantTextView;
+ (id)_interParticipantSpacing;
+ (BOOL)_layoutManagerReportsExcessLines:(id)arg1;
+ (float)_leftBuffer;
+ (id)_nonBreakingSpace;
+ (id)_participantsTextViewFont;
+ (id)_replaceSpacesWithNonBreakingSpaces:(id)arg1;
+ (float)_rightBuffer;
+ (void)_setRequiredHuggingAndCompression:(id)arg1;
+ (id)_timeLabelFont;

- (void).cxx_destruct;
- (void)_andMoreTapped:(id)arg1;
- (id)_busyImageAttributedStringForColor:(id)arg1;
- (BOOL)_everyoneCanAttend;
- (id)_generateStringForAllParticipants:(id)arg1;
- (id)_generateStringForSomeParticipantsAndStampMoreBoundingRect:(id)arg1;
- (float)_preferredMaxLayoutWidth;
- (void)_resetFonts;
- (void)_resetParticipantsTextIfNeeded;
- (void)_resetPreferredMaxLayoutWidths;
- (void)_resetTimeTextIfNeeded;
- (void)_showPreviewButtonTapped:(id)arg1;
- (id)_textForParticipant:(id)arg1 color:(id)arg2;
- (BOOL)_textWillFit:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })andMoreBoundingRect;
- (id)andMoreDebugOverlay;
- (id)andMoreStringCache;
- (id)bottomTimeLabel;
- (id)bottomTimeLabelHeightConstraint;
- (id)bottomTimeLabelToTopTimeLabelConstraint;
- (id)busyParticipants;
- (BOOL)checked;
- (id)checkmarkImageView;
- (id)colorToBusyImageAttributedString;
- (void)dealloc;
- (id)endDate;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)labelForTextSizeTesting;
- (id)participantsTextColor;
- (id)participantsTextView;
- (id)participantsViewToBottomTimeLabelConstraint;
- (id)participantsViewToContentViewConstraint;
- (id)persistentConstraints;
- (void)setAndMoreBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAndMoreDebugOverlay:(id)arg1;
- (void)setAndMoreStringCache:(id)arg1;
- (void)setBottomTimeLabel:(id)arg1;
- (void)setBottomTimeLabelHeightConstraint:(id)arg1;
- (void)setBottomTimeLabelToTopTimeLabelConstraint:(id)arg1;
- (void)setBusyParticipants:(id)arg1;
- (void)setChecked:(BOOL)arg1;
- (void)setCheckmarkImageView:(id)arg1;
- (void)setColorToBusyImageAttributedString:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLabelForTextSizeTesting:(id)arg1;
- (void)setParticipantsTextView:(id)arg1;
- (void)setParticipantsViewToBottomTimeLabelConstraint:(id)arg1;
- (void)setParticipantsViewToContentViewConstraint:(id)arg1;
- (void)setPersistentConstraints:(id)arg1;
- (void)setShowAllConflictedParticipantsTapped:(id)arg1;
- (void)setShowAllParticipants:(BOOL)arg1;
- (void)setShowPreviewButton:(id)arg1;
- (void)setShowPreviewOfEventAtTime:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTappedMoreRecognizer:(id)arg1;
- (void)setTextViewForTextSizeTesting:(id)arg1;
- (void)setTopTimeLabel:(id)arg1;
- (void)setTopTimeLabelHeightConstraint:(id)arg1;
- (void)setTopTimeLabelToTopContentViewConstraint:(id)arg1;
- (void)setUpdateFontBasedConstraints:(BOOL)arg1;
- (void)setUpdateParticipantsText:(BOOL)arg1;
- (void)setUpdateTimeText:(BOOL)arg1;
- (id)showAllConflictedParticipantsTapped;
- (BOOL)showAllParticipants;
- (id)showPreviewButton;
- (id)showPreviewOfEventAtTime;
- (id)startDate;
- (id)tappedMoreRecognizer;
- (id)textViewForTextSizeTesting;
- (id)timeTextColor;
- (id)topTimeLabel;
- (id)topTimeLabelHeightConstraint;
- (id)topTimeLabelToTopContentViewConstraint;
- (void)updateConstraints;
- (BOOL)updateFontBasedConstraints;
- (BOOL)updateParticipantsText;
- (BOOL)updateTimeText;
- (void)updateWithStartDate:(id)arg1 endDate:(id)arg2 busyParticipants:(id)arg3 showAllParticipants:(BOOL)arg4 checked:(BOOL)arg5;

@end