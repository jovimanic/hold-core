// Copyright (c) 2011-2014 The HOLD Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef HOLD_QT_HOLDADDRESSVALIDATOR_H
#define HOLD_QT_HOLDADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class HOLDAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit HOLDAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** HOLD address widget validator, checks for a valid hold address.
 */
class HOLDAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit HOLDAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // HOLD_QT_HOLDADDRESSVALIDATOR_H
