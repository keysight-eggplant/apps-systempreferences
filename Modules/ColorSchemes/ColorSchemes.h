/* ColorSchemes.h
 *  
 * Copyright (C) 2006 Free Software Foundation, Inc.
 *
 * Author: Riccardo Mottola <riccardo@kaffe.org>
 * Date: September 2006
 *
 * This file is part of the GNUstep ColorSchemes Preference Pane
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02111 USA.
 */

#ifndef COLORSCHEMES_H
#define COLORSCHEMES_H

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#ifdef __APPLE__
  #include <GSPreferencePanes/PreferencePanes.h>
#else
  #include <PreferencePanes/PreferencePanes.h>
#endif

#import "PreviewView.h"

@interface ColorSchemes : NSPreferencePane
{
    IBOutlet PreviewView *preview;
    IBOutlet NSPopUpButton *colorSettings;
    IBOutlet NSPopUpButton *style;
    IBOutlet NSColorWell *colorWell;

    NSDictionary *dictSchemes;
    NSDictionary *currScheme;
    NSColorList *currColorList;
    BOOL loaded;
}


- (IBAction)styleAction:(id)sender;
- (IBAction)settingsAction:(id)sender;

@end

#endif	// COLORSCHEMES_H