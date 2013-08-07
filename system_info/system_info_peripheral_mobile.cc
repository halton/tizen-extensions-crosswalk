// Copyright (c) 2013 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "system_info/system_info_peripheral.h"

#include "system_info/system_info_utils.h"

void SysInfoPeripheral::Get(picojson::value& error,
                            picojson::value& data) {
  // FIXME(halton): Add actual implementation
  system_info::SetPicoJsonObjectValue(error, "message",
      picojson::value("NOT IMPLEMENTED."));
}
