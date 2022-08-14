// SPDX-License-Identifier: LGPL-3.0-or-later
// Copyright (c) 2015-2022 mumlib2 contributors

#pragma once

//stdlib
#include <cstdint>

namespace mumlib2 {
    constexpr uint32_t MUMBLE_AUDIO_CHANNELS   = 1;
    constexpr uint32_t MUMBLE_AUDIO_SAMPLERATE = 48000;

    constexpr uint32_t MUMBLE_OPUS_BITRATE    = 48000;
    constexpr uint32_t MUMBLE_OPUS_MAXLENGTH  = 60;

    constexpr uint32_t MUMBLE_RESAMPLER_QUALITY = 3;

    constexpr uint32_t MUMBLE_UDP_MAXLENGTH = 1024;
    constexpr uint32_t MUMBLE_TCP_MAXLENGTH = 129 * 1024;
}
