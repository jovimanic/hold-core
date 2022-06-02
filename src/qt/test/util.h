// Copyright (c) 2018-2019 The HOLD Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef HOLD_QT_TEST_UTIL_H
#define HOLD_QT_TEST_UTIL_H

#include <QString>

/**
 * Press "Ok" button in message box dialog.
 *
 * @param text - Optionally store dialog text.
 * @param msec - Number of milliseconds to pause before triggering the callback.
 */
void ConfirmMessage(QString* text = nullptr, int msec = 0);

#endif // HOLD_QT_TEST_UTIL_H