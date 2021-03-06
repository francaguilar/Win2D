// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

// This file was automatically generated. Please do not edit it manually.

#include "pch.h"
#include "PremultiplyEffect.h"

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas { namespace Effects
{
    PremultiplyEffect::PremultiplyEffect()
        : CanvasEffect(CLSID_D2D1Premultiply, 0, 1, true)
    {
        // Set default values
    }

    IMPLEMENT_EFFECT_SOURCE_PROPERTY(PremultiplyEffect,
        Source,
        0)

    ActivatableClass(PremultiplyEffect);
}}}}}
