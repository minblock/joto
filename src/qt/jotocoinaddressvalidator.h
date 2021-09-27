// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef JOTOCOIN_QT_JOTOCOINADDRESSVALIDATOR_H
#define JOTOCOIN_QT_JOTOCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class JOTOCOINAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit JOTOCOINAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** JOTOCOIN address widget validator, checks for a valid jotocoin address.
 */
class JOTOCOINAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit JOTOCOINAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // JOTOCOIN_QT_JOTOCOINADDRESSVALIDATOR_H
