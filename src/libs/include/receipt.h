#pragma once
/*-------------------------------------------------------------------------
 * This source code is confidential proprietary information which is
 * Copyright (c) 2017 by Great Hill Corporation.
 * All Rights Reserved
 *
 * The LICENSE at the root of this repo details your rights (if any)
 *------------------------------------------------------------------------*/
/*
 * This file was generated with makeClass. Edit only those parts of the code inside
 * of 'EXISTING_CODE' tags.
 */
#include "ethtypes.h"
#include "abilib.h"
#include "logentry.h"

//--------------------------------------------------------------------------
class CReceipt;
typedef SFArrayBase<CReceipt>         CReceiptArray;
typedef SFList<CReceipt*>             CReceiptList;
typedef SFUniqueList<CReceipt*>       CReceiptListU;

// EXISTING_CODE
class CTransaction;
// EXISTING_CODE

//--------------------------------------------------------------------------
class CReceipt : public CBaseNode
{
public:
    SFAddress contractAddress;
    SFUint32 gasUsed;
    CLogEntryArray logs;
    SFBloom logsBloom;

public:
    CReceipt(void);
    CReceipt(const CReceipt& re);
   ~CReceipt(void);
    CReceipt& operator=(const CReceipt& re);

    DECLARE_NODE (CReceipt);

    // EXISTING_CODE
    const CTransaction *pTrans;
#if 0
    uint32_t cumulativeGasUsed;
    SFAddress from12;
    SFHash blockHash;
    uint32_t blockNumber;
    SFString root;
    SFAddress to;
    SFHash transactionHash;
    uint32_t transactionIndex;
#endif
    // EXISTING_CODE

protected:
    void Clear(void);
    void Init(void);
    void Copy(const CReceipt& re);
    bool readBackLevel(SFArchive& archive);

    // EXISTING_CODE
    // EXISTING_CODE
};

//--------------------------------------------------------------------------
inline CReceipt::CReceipt(void)
{
    Init();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline CReceipt::CReceipt(const CReceipt& re)
{
    // EXISTING_CODE
    // EXISTING_CODE
    Copy(re);
}

// EXISTING_CODE
// EXISTING_CODE

//--------------------------------------------------------------------------
inline CReceipt::~CReceipt(void)
{
    Clear();
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void CReceipt::Clear(void)
{
    // EXISTING_CODE
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void CReceipt::Init(void)
{
    CBaseNode::Init();

//    contractAddress = EMPTY;
    gasUsed = 0;
//    logs = ??; /* unknown type: CLogEntryArray */
    logsBloom = 0;

    // EXISTING_CODE
    pTrans = NULL;
#if 0
    blockHash = EMPTY;
    blockNumber = 0;
    cumulativeGasUsed = 0;
    from = EMPTY;
    root = EMPTY;
    to = EMPTY;
    transactionHash = EMPTY;
    transactionIndex = 0;
#endif
    // EXISTING_CODE
}

//--------------------------------------------------------------------------
inline void CReceipt::Copy(const CReceipt& re)
{
    Clear();
    CBaseNode::Copy(re);

    contractAddress = re.contractAddress;
    gasUsed = re.gasUsed;
    logs = re.logs;
    logsBloom = re.logsBloom;

    // EXISTING_CODE
    pTrans = re.pTrans; // no deep copy becuase it's const
#if 0
    blockHash = re.blockHash;
    blockNumber = re.blockNumber;
    cumulativeGasUsed = re.cumulativeGasUsed;
    from = re.from;
    root = re.root;
    to = re.to;
    transactionHash = re.transactionHash;
    transactionIndex = re.transactionIndex;
#endif
    // EXISTING_CODE
    finishParse();
}

//--------------------------------------------------------------------------
inline CReceipt& CReceipt::operator=(const CReceipt& re)
{
    Copy(re);
    // EXISTING_CODE
    // EXISTING_CODE
    return *this;
}

//---------------------------------------------------------------------------
inline SFString CReceipt::getValueByName(const SFString& fieldName) const
{
    // EXISTING_CODE
    // EXISTING_CODE
    return Format("[{"+toUpper(fieldName)+"}]");
}

//---------------------------------------------------------------------------
IMPLEMENT_ARCHIVE_ARRAY(CReceiptArray);
IMPLEMENT_ARCHIVE_ARRAY_C(CReceiptArray);
IMPLEMENT_ARCHIVE_LIST(CReceiptList);

//---------------------------------------------------------------------------
// EXISTING_CODE
extern SFString nextTransactionChunk(const SFString& fieldIn, bool& force, const void *data);
// EXISTING_CODE
