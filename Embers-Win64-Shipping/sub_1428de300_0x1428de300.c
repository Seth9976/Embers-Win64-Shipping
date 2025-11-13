// 函数: sub_1428de300
// 地址: 0x1428de300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != 0)
    int64_t _MaxCount = sx.q(arg2)
    
    if (strncmp(arg1, "ALL", _MaxCount) == 0)
        *arg3 |= 0xffff
        return 1
    
    if (strncmp(arg1, "RSA", _MaxCount) == 0)
        *arg3 |= 1
        return 1
    
    if (strncmp(arg1, "DSA", _MaxCount) == 0)
        *arg3 |= 2
        return 1
    
    if (strncmp(arg1, "DH", _MaxCount) == 0)
        *arg3 |= 4
        return 1
    
    if (strncmp(arg1, "EC", _MaxCount) == 0)
        *arg3 |= 0x800
        return 1
    
    if (strncmp(arg1, "RAND", _MaxCount) == 0)
        *arg3 |= 8
        return 1
    
    if (strncmp(arg1, "CIPHERS", _MaxCount) == 0)
        *arg3 |= 0x40
        return 1
    
    if (strncmp(arg1, "DIGESTS", _MaxCount) == 0)
        *arg3 |= 0x80
        return 1
    
    if (strncmp(arg1, "PKEY", _MaxCount) == 0)
        *arg3 |= 0x600
        return 1
    
    if (strncmp(arg1, "PKEY_CRYPTO", _MaxCount) == 0)
        *arg3 |= 0x200
        return 1
    
    if (strncmp(arg1, "PKEY_ASN1", _MaxCount) == 0)
        *arg3 |= 0x400
        return 1

return 0
