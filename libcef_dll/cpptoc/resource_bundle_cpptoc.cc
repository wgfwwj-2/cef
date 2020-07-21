// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
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
// $hash=0dc6766f75f9b051daf582009455efb08c969e9f$
//

#include "libcef_dll/cpptoc/resource_bundle_cpptoc.h"
#include "libcef_dll/cpptoc/binary_value_cpptoc.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_resource_bundle_t* cef_resource_bundle_get_global() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefResourceBundle> _retval = CefResourceBundle::GetGlobal();

  // Return type: refptr_same
  return CefResourceBundleCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_string_userfree_t CEF_CALLBACK
resource_bundle_get_localized_string(struct _cef_resource_bundle_t* self,
                                     int string_id) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval =
      CefResourceBundleCppToC::Get(self)->GetLocalizedString(string_id);

  // Return type: string
  return _retval.DetachToUserFree();
}

struct _cef_binary_value_t* CEF_CALLBACK
resource_bundle_get_data_resource(struct _cef_resource_bundle_t* self,
                                  int resource_id) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBinaryValue> _retval =
      CefResourceBundleCppToC::Get(self)->GetDataResource(resource_id);

  // Return type: refptr_same
  return CefBinaryValueCppToC::Wrap(_retval);
}

struct _cef_binary_value_t* CEF_CALLBACK
resource_bundle_get_data_resource_for_scale(struct _cef_resource_bundle_t* self,
                                            int resource_id,
                                            cef_scale_factor_t scale_factor) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBinaryValue> _retval =
      CefResourceBundleCppToC::Get(self)->GetDataResourceForScale(resource_id,
                                                                  scale_factor);

  // Return type: refptr_same
  return CefBinaryValueCppToC::Wrap(_retval);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefResourceBundleCppToC::CefResourceBundleCppToC() {
  GetStruct()->get_localized_string = resource_bundle_get_localized_string;
  GetStruct()->get_data_resource = resource_bundle_get_data_resource;
  GetStruct()->get_data_resource_for_scale =
      resource_bundle_get_data_resource_for_scale;
}

// DESTRUCTOR - Do not edit by hand.

CefResourceBundleCppToC::~CefResourceBundleCppToC() {}

template <>
CefRefPtr<CefResourceBundle> CefCppToCRefCounted<
    CefResourceBundleCppToC,
    CefResourceBundle,
    cef_resource_bundle_t>::UnwrapDerived(CefWrapperType type,
                                          cef_resource_bundle_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefResourceBundleCppToC,
                                   CefResourceBundle,
                                   cef_resource_bundle_t>::kWrapperType =
    WT_RESOURCE_BUNDLE;
