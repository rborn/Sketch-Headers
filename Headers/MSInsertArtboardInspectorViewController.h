//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MSArtboardPresetOutlineViewDelegate.h"
#import "MSEditArtboardPresetViewControllerDelegate.h"
#import "MSInspectorChildController.h"
#import "NSOutlineViewDataSource.h"

@class MSArtboardPresetCollection, MSEditArtboardPresetViewController, MSInsertArtboardEventHandler, NSArray, NSButton, NSOutlineView, NSString;

@interface MSInsertArtboardInspectorViewController : NSViewController <MSArtboardPresetOutlineViewDelegate, NSOutlineViewDataSource, MSEditArtboardPresetViewControllerDelegate, MSInspectorChildController>
{
    MSInsertArtboardEventHandler *_eventHandler;
    NSArray *_systemPresets;
    MSArtboardPresetCollection *_userPresets;
    NSArray *_allPresets;
    NSOutlineView *_outlineView;
    NSButton *_addPresetButton;
    MSEditArtboardPresetViewController *_editor;
    struct CGSize _sizeOfSelectedLayers;
}

@property(retain, nonatomic) MSEditArtboardPresetViewController *editor; // @synthesize editor=_editor;
@property(retain, nonatomic) NSButton *addPresetButton; // @synthesize addPresetButton=_addPresetButton;
@property(retain, nonatomic) NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain, nonatomic) NSArray *allPresets; // @synthesize allPresets=_allPresets;
@property(retain, nonatomic) MSArtboardPresetCollection *userPresets; // @synthesize userPresets=_userPresets;
@property(retain, nonatomic) NSArray *systemPresets; // @synthesize systemPresets=_systemPresets;
@property(nonatomic) MSInsertArtboardEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) struct CGSize sizeOfSelectedLayers; // @synthesize sizeOfSelectedLayers=_sizeOfSelectedLayers;
- (void).cxx_destruct;
- (id)views;
- (void)selectionDidChangeTo:(id)arg1;
- (void)prepareForDisplay;
- (void)artboardPresetViewController:(id)arg1 returnCode:(long long)arg2;
- (id)menuForItem:(id)arg1;
- (void)viewWillDisappear;
- (void)focusCanvasOnAllArtboards;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (struct CGSize)sizeForPreset:(id)arg1;
- (struct CGSize)sizeForItem:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)itemIsHeader:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)childrenForItem:(id)arg1;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)animateEditorOut;
- (void)animateEditorIn;
- (void)editorDidFinish:(id)arg1;
- (void)showEditPanelForPreset:(id)arg1 canCancelPanel:(BOOL)arg2;
- (void)addPresetAction:(id)arg1;
- (void)deleteRowAction:(id)arg1;
- (void)editRowAction:(id)arg1;
- (void)refresh;
- (id)systemPresetsURL;
- (id)userPresetsURL;
- (BOOL)saveUserPresets:(id *)arg1;
- (BOOL)itemIsUserPreset:(id)arg1;
- (void)reloadAllPresets;
- (void)removeUserPreset:(id)arg1;
- (void)addUserPreset:(id)arg1;
- (void)loadArtboardPresets;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

