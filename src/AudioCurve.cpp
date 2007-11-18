/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

/*
    Rubber Band
    An audio time-stretching and pitch-shifting library.
    Copyright 2007 Chris Cannam.
    
    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License as
    published by the Free Software Foundation; either version 2 of the
    License, or (at your option) any later version.  See the file
    COPYING included with this distribution for more information.
*/

#include "AudioCurve.h"

namespace RubberBand
{

AudioCurve::AudioCurve(size_t sampleRate, size_t windowSize) :
    m_sampleRate(sampleRate),
    m_windowSize(windowSize)
{
}

AudioCurve::~AudioCurve()
{
}


}
