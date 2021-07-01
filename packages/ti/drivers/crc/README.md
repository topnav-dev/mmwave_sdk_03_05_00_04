```
CRC_Handle CRC_open (const CRC_Config* ptrCRCCfg, int32_t* errCode);
int32_t    CRC_close (CRC_Handle crcHandle, int32_t* errCode);
int32_t    CRC_getTransactionId(CRC_Handle crcHandle, uint32_t* transactionId, int32_t* errCode);
int32_t    CRC_computeSignature(CRC_Handle crcHandle, CRC_SigGenCfg* ptrSigGenCfg, int32_t* errCode);
int32_t    CRC_getSignature (CRC_Handle crcHandle, uint32_t transactionId, uint64_t* ptrSignature, int32_t* errCode);
int32_t    CRC_cancelSignature (CRC_Handle crcHandle, uint32_t transactionId, int32_t* errCode);
void       CRC_initConfigParams(CRC_Config* ptrCRCCfg);
```
