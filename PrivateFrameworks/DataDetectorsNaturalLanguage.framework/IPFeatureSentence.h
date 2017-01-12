/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPFeatureSentence : IPFeature {
    NSArray * _fragments;
    BOOL  _hasCheckedEventVocabularyIgnoreDateKeyword;
    BOOL  _hasCheckedEventVocabularyKeyword;
    NSString * _languageID;
    RKText * _responseKitSentence;
    NSString * _storedEventVocabularyIgnoreDateKeyword;
    NSString * _storedEventVocabularyRejectionKeyword;
    unsigned int  _storedPolarity;
}

@property (readonly) unsigned int clusterType;
@property (readonly, copy) NSString *eventVocabularyIgnoreDateKeyword;
@property (readonly, copy) NSString *eventVocabularyRejectionKeyword;
@property (copy) NSArray *fragments;
@property (copy) NSString *languageID;
@property (readonly) unsigned int polarity;
@property (getter=isQuoteAttributionLine, readonly) BOOL quoteAttributionLine;
@property (retain) RKText *responseKitSentence;
@property (copy) NSString *storedEventVocabularyIgnoreDateKeyword;
@property (copy) NSString *storedEventVocabularyRejectionKeyword;
@property unsigned int storedPolarity;

+ (id)bestLanguageIDFromText:(id)arg1;
+ (id)buildRegexForType:(id)arg1 languageID:(id)arg2;
+ (id)eventVocabularyIgnoreDateKeywordInString:(id)arg1 languageID:(id)arg2;
+ (id)eventVocabularyIgnoreDateRegexForLanguageID:(id)arg1;
+ (id)eventVocabularyPositiveRegexForLanguageID:(id)arg1;
+ (id)eventVocabularyRegexForType:(id)arg1 languageID:(id)arg2;
+ (id)eventVocabularyRejectionKeywordInString:(id)arg1 languageID:(id)arg2;
+ (id)eventVocabularyRejectionRegexForLanguageID:(id)arg1;
+ (id)eventVocabularySubjectTitleInString:(id)arg1 languageID:(id)arg2;
+ (id)eventVocabularySubjectTitleRegexForLanguageID:(id)arg1;
+ (unsigned int)numberOfMatchesForEventVocabularySubjectTitleInString:(id)arg1 languageID:(id)arg2;
+ (id)regexSetForType:(id)arg1 languageID:(id)arg2;

- (void).cxx_destruct;
- (void)addFragment:(id)arg1;
- (void)checkEventVocabularyKeywordsIfNeeded;
- (unsigned int)clusterType;
- (id)description;
- (id)descriptionForFragment:(id)arg1;
- (id)descriptionForFragmentAtIndex:(unsigned int)arg1;
- (id)eventVocabularyIgnoreDateKeyword;
- (id)eventVocabularyRejectionKeyword;
- (id)fragments;
- (id)initWithLanguageID:(id)arg1 responseKitSentence:(id)arg2;
- (BOOL)isQuoteAttributionLine;
- (id)languageID;
- (unsigned int)polarity;
- (unsigned int)polarityForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)polarityForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 confidence:(float*)arg2;
- (id)responseKitSentence;
- (void)setFragments:(id)arg1;
- (void)setLanguageID:(id)arg1;
- (void)setResponseKitSentence:(id)arg1;
- (void)setStoredEventVocabularyIgnoreDateKeyword:(id)arg1;
- (void)setStoredEventVocabularyRejectionKeyword:(id)arg1;
- (void)setStoredPolarity:(unsigned int)arg1;
- (id)storedEventVocabularyIgnoreDateKeyword;
- (id)storedEventVocabularyRejectionKeyword;
- (unsigned int)storedPolarity;

@end