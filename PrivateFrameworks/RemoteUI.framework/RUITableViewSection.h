/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSArray, NSMutableArray, NSNumber, RUITableViewRow, UIView<RemoteUITableFooter>, UIView<RemoteUITableHeader>;

@interface RUITableViewSection : RUIElement {
    BOOL _configured;
    id _delegate;
    int _disclosureLimit;
    NSNumber *_drawsTopSeparator;
    UIView<RemoteUITableFooter> *_footer;
    float _footerHeight;
    UIView<RemoteUITableFooter> *_footerView;
    UIView<RemoteUITableHeader> *_header;
    float _headerHeight;
    NSMutableArray *_rows;
    RUITableViewRow *_showAllRow;
}

@property BOOL configured;
@property BOOL drawTopSeparator;
@property float footerHeight;
@property(retain) UIView<RemoteUITableFooter> * footerView;
@property float headerHeight;
@property(retain) UIView<RemoteUITableHeader> * headerView;
@property(readonly) NSArray * rows;

- (Class)_customFooterClass;
- (Class)_customHeaderClass;
- (void)addRow:(id)arg1;
- (BOOL)configured;
- (void)dealloc;
- (void)didTapShowAllRowWithTable:(id)arg1;
- (BOOL)drawTopSeparator;
- (float)footerHeight;
- (id)footerView;
- (BOOL)hasCustomFooter;
- (BOOL)hasCustomHeader;
- (BOOL)hasValueForDrawsTopSeparator;
- (float)headerHeight;
- (id)headerView;
- (id)init;
- (void)insertRow:(id)arg1 atIndex:(unsigned int)arg2;
- (void)populatePostbackDictionary:(id)arg1;
- (void)remoteUILinkFooterActivatedLink:(id)arg1;
- (void)removeRowAtIndex:(unsigned int)arg1;
- (id)rows;
- (void)setAttributes:(id)arg1;
- (void)setConfigured:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawTopSeparator:(BOOL)arg1;
- (void)setFooterHeight:(float)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderHeight:(float)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)sourceURL;

@end