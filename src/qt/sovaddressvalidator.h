// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef JOTO_QT_JOTOADDRESSVALIDATOR_H
#define JOTO_QT_JOTOADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class JOTOAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit JOTOAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** JOTO address widget validator, checks for a valid joto address.
 */
class JOTOAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit JOTOAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // JOTO_QT_JOTOADDRESSVALIDATOR_H
