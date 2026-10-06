// SPDX-FileCopyrightText: 2026 Contributors to Chatterino <https://chatterino.com>
//
// SPDX-License-Identifier: MIT

#pragma once

#include <QCoreApplication>
#include <QString>

namespace chatterino {

// Translate a user-facing English source string into the language selected by
// the current QTranslator.
//
// All UI strings are authored in English and are looked up by their English
// translation source. If no translation is registered for a given string, the
// English source is returned as-is.
inline QString translateUI(const QString &sourceText)
{
    if (sourceText.isEmpty())
    {
        return sourceText;
    }

    return QCoreApplication::translate(
        "chatterino.ui", sourceText.toUtf8().constData());
}

}  // namespace chatterino