//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface LineStyleWrap : NSObject
{
    NSString *m_nsChars;
    UIColor *m_color;
    UIFont *m_font;
    double m_fOffset;
    _Bool m_bUnderline;
    double m_fRealLength;
}

@property(nonatomic) double m_fRealLength; // @synthesize m_fRealLength;
@property(nonatomic) _Bool m_bUnderline; // @synthesize m_bUnderline;
@property(nonatomic) double m_fOffset; // @synthesize m_fOffset;
@property(retain, nonatomic) UIFont *m_font; // @synthesize m_font;
@property(retain, nonatomic) UIColor *m_color; // @synthesize m_color;
@property(retain, nonatomic) NSString *m_nsChars; // @synthesize m_nsChars;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;

@end

