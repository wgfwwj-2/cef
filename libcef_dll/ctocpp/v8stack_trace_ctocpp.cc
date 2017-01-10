// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/ctocpp/v8stack_frame_ctocpp.h"
#include "libcef_dll/ctocpp/v8stack_trace_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefV8StackTrace> CefV8StackTrace::GetCurrent(int frame_limit) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8stack_trace_t* _retval = cef_v8stack_trace_get_current(
      frame_limit);

  // Return type: refptr_same
  return CefV8StackTraceCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

bool CefV8StackTraceCToCpp::IsValid() {
  cef_v8stack_trace_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_valid))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid(_struct);

  // Return type: bool
  return _retval?true:false;
}

int CefV8StackTraceCToCpp::GetFrameCount() {
  cef_v8stack_trace_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_frame_count))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_frame_count(_struct);

  // Return type: simple
  return _retval;
}

CefRefPtr<CefV8StackFrame> CefV8StackTraceCToCpp::GetFrame(int index) {
  cef_v8stack_trace_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_frame))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8stack_frame_t* _retval = _struct->get_frame(_struct,
      index);

  // Return type: refptr_same
  return CefV8StackFrameCToCpp::Wrap(_retval);
}


// CONSTRUCTOR - Do not edit by hand.

CefV8StackTraceCToCpp::CefV8StackTraceCToCpp() {
}

template<> cef_v8stack_trace_t* CefCToCpp<CefV8StackTraceCToCpp,
    CefV8StackTrace, cef_v8stack_trace_t>::UnwrapDerived(CefWrapperType type,
    CefV8StackTrace* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCToCpp<CefV8StackTraceCToCpp,
    CefV8StackTrace, cef_v8stack_trace_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefV8StackTraceCToCpp, CefV8StackTrace,
    cef_v8stack_trace_t>::kWrapperType = WT_V8STACK_TRACE;
