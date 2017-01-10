// Copyright (c) 2017 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//

#ifndef CEF_INCLUDE_CAPI_VIEWS_CEF_WINDOW_CAPI_H_
#define CEF_INCLUDE_CAPI_VIEWS_CEF_WINDOW_CAPI_H_
#pragma once

#include "include/capi/cef_image_capi.h"
#include "include/capi/cef_menu_model_capi.h"
#include "include/capi/views/cef_display_capi.h"
#include "include/capi/views/cef_panel_capi.h"
#include "include/capi/views/cef_window_delegate_capi.h"

#ifdef __cplusplus
extern "C" {
#endif


///
// A Window is a top-level Window/widget in the Views hierarchy. By default it
// will have a non-client area with title bar, icon and buttons that supports
// moving and resizing. All size and position values are in density independent
// pixels (DIP) unless otherwise indicated. Methods must be called on the
// browser process UI thread unless otherwise indicated.
///
typedef struct _cef_window_t {
  ///
  // Base structure.
  ///
  cef_panel_t base;

  ///
  // Show the Window.
  ///
  void (CEF_CALLBACK *show)(struct _cef_window_t* self);

  ///
  // Hide the Window.
  ///
  void (CEF_CALLBACK *hide)(struct _cef_window_t* self);

  ///
  // Sizes the Window to |size| and centers it in the current display.
  ///
  void (CEF_CALLBACK *center_window)(struct _cef_window_t* self,
      const cef_size_t* size);

  ///
  // Close the Window.
  ///
  void (CEF_CALLBACK *close)(struct _cef_window_t* self);

  ///
  // Returns true (1) if the Window has been closed.
  ///
  int (CEF_CALLBACK *is_closed)(struct _cef_window_t* self);

  ///
  // Activate the Window, assuming it already exists and is visible.
  ///
  void (CEF_CALLBACK *activate)(struct _cef_window_t* self);

  ///
  // Deactivate the Window, making the next Window in the Z order the active
  // Window.
  ///
  void (CEF_CALLBACK *deactivate)(struct _cef_window_t* self);

  ///
  // Returns whether the Window is the currently active Window.
  ///
  int (CEF_CALLBACK *is_active)(struct _cef_window_t* self);

  ///
  // Bring this Window to the top of other Windows in the Windowing system.
  ///
  void (CEF_CALLBACK *bring_to_top)(struct _cef_window_t* self);

  ///
  // Set the Window to be on top of other Windows in the Windowing system.
  ///
  void (CEF_CALLBACK *set_always_on_top)(struct _cef_window_t* self,
      int on_top);

  ///
  // Returns whether the Window has been set to be on top of other Windows in
  // the Windowing system.
  ///
  int (CEF_CALLBACK *is_always_on_top)(struct _cef_window_t* self);

  ///
  // Maximize the Window.
  ///
  void (CEF_CALLBACK *maximize)(struct _cef_window_t* self);

  ///
  // Minimize the Window.
  ///
  void (CEF_CALLBACK *minimize)(struct _cef_window_t* self);

  ///
  // Restore the Window.
  ///
  void (CEF_CALLBACK *restore)(struct _cef_window_t* self);

  ///
  // Set fullscreen Window state.
  ///
  void (CEF_CALLBACK *set_fullscreen)(struct _cef_window_t* self,
      int fullscreen);

  ///
  // Returns true (1) if the Window is maximized.
  ///
  int (CEF_CALLBACK *is_maximized)(struct _cef_window_t* self);

  ///
  // Returns true (1) if the Window is minimized.
  ///
  int (CEF_CALLBACK *is_minimized)(struct _cef_window_t* self);

  ///
  // Returns true (1) if the Window is fullscreen.
  ///
  int (CEF_CALLBACK *is_fullscreen)(struct _cef_window_t* self);

  ///
  // Set the Window title.
  ///
  void (CEF_CALLBACK *set_title)(struct _cef_window_t* self,
      const cef_string_t* title);

  ///
  // Get the Window title.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t (CEF_CALLBACK *get_title)(struct _cef_window_t* self);

  ///
  // Set the Window icon. This should be a 16x16 icon suitable for use in the
  // Windows's title bar.
  ///
  void (CEF_CALLBACK *set_window_icon)(struct _cef_window_t* self,
      struct _cef_image_t* image);

  ///
  // Get the Window icon.
  ///
  struct _cef_image_t* (CEF_CALLBACK *get_window_icon)(
      struct _cef_window_t* self);

  ///
  // Set the Window App icon. This should be a larger icon for use in the host
  // environment app switching UI. On Windows, this is the ICON_BIG used in Alt-
  // Tab list and Windows taskbar. The Window icon will be used by default if no
  // Window App icon is specified.
  ///
  void (CEF_CALLBACK *set_window_app_icon)(struct _cef_window_t* self,
      struct _cef_image_t* image);

  ///
  // Get the Window App icon.
  ///
  struct _cef_image_t* (CEF_CALLBACK *get_window_app_icon)(
      struct _cef_window_t* self);

  ///
  // Show a menu with contents |menu_model|. |screen_point| specifies the menu
  // position in screen coordinates. |anchor_position| specifies how the menu
  // will be anchored relative to |screen_point|.
  ///
  void (CEF_CALLBACK *show_menu)(struct _cef_window_t* self,
      struct _cef_menu_model_t* menu_model, const cef_point_t* screen_point,
      cef_menu_anchor_position_t anchor_position);

  ///
  // Cancel the menu that is currently showing, if any.
  ///
  void (CEF_CALLBACK *cancel_menu)(struct _cef_window_t* self);

  ///
  // Returns the Display that most closely intersects the bounds of this Window.
  // May return NULL if this Window is not currently displayed.
  ///
  struct _cef_display_t* (CEF_CALLBACK *get_display)(
      struct _cef_window_t* self);

  ///
  // Returns the bounds (size and position) of this Window's client area.
  // Position is in screen coordinates.
  ///
  cef_rect_t (CEF_CALLBACK *get_client_area_bounds_in_screen)(
      struct _cef_window_t* self);

  ///
  // Set the regions where mouse events will be intercepted by this Window to
  // support drag operations. Call this function with an NULL vector to clear
  // the draggable regions. The draggable region bounds should be in window
  // coordinates.
  ///
  void (CEF_CALLBACK *set_draggable_regions)(struct _cef_window_t* self,
      size_t regionsCount, cef_draggable_region_t const* regions);

  ///
  // Retrieve the platform window handle for this Window.
  ///
  cef_window_handle_t (CEF_CALLBACK *get_window_handle)(
      struct _cef_window_t* self);

  ///
  // Simulate a key press. |key_code| is the VKEY_* value from Chromium's
  // ui/events/keycodes/keyboard_codes.h header (VK_* values on Windows).
  // |event_flags| is some combination of EVENTFLAG_SHIFT_DOWN,
  // EVENTFLAG_CONTROL_DOWN and/or EVENTFLAG_ALT_DOWN. This function is exposed
  // primarily for testing purposes.
  ///
  void (CEF_CALLBACK *send_key_press)(struct _cef_window_t* self, int key_code,
      uint32 event_flags);

  ///
  // Simulate a mouse move. The mouse cursor will be moved to the specified
  // (screen_x, screen_y) position. This function is exposed primarily for
  // testing purposes.
  ///
  void (CEF_CALLBACK *send_mouse_move)(struct _cef_window_t* self, int screen_x,
      int screen_y);

  ///
  // Simulate mouse down and/or mouse up events. |button| is the mouse button
  // type. If |mouse_down| is true (1) a mouse down event will be sent. If
  // |mouse_up| is true (1) a mouse up event will be sent. If both are true (1)
  // a mouse down event will be sent followed by a mouse up event (equivalent to
  // clicking the mouse button). The events will be sent using the current
  // cursor position so make sure to call send_mouse_move() first to position
  // the mouse. This function is exposed primarily for testing purposes.
  ///
  void (CEF_CALLBACK *send_mouse_events)(struct _cef_window_t* self,
      cef_mouse_button_type_t button, int mouse_down, int mouse_up);
} cef_window_t;


///
// Create a new Window.
///
CEF_EXPORT cef_window_t* cef_window_create_top_level(
    struct _cef_window_delegate_t* delegate);


#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_VIEWS_CEF_WINDOW_CAPI_H_
