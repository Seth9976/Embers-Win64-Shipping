// 函数: sub_1428e2830
// 地址: 0x1428e2830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rsi = -1
sub_1428df6c0(sub_1428e3030(sub_14060aa60(arg6), data_143b85e30), "Called CAPI_rsa_sign()\n", arg3)
void* rax_4 = sub_1428970e0(arg6, data_143b85e34)

if (rax_4 != 0)
    ALG_ID Algid
    
    if (arg1 s<= 0x2a0)
        if (arg1 == 0x2a0)
            Algid = 0x800c
            goto label_1428e29b8
        
        if (arg1 == 4)
            Algid = 0x8003
            goto label_1428e29b8
        
        if (arg1 == 0x40)
            Algid = 0x8004
            goto label_1428e29b8
        
        if (arg1 != 0x72)
            goto label_1428e294c
        
        Algid = 0x8008
        goto label_1428e29b8
    
    if (arg1 == 0x2a1)
        Algid = 0x800d
    label_1428e29b8:
        int32_t var_78
        uint64_t hHash
        var_78.q = &hHash
        
        if (CryptCreateHash(*(rax_4 + 8), Algid, 0, 0, var_78) != 0)
            if (CryptSetHashParam(hHash, HP_HASHVAL, arg2, 0) != 0)
                uint32_t pdwSigLen_1 = sub_142897860(arg6)
                uint64_t hHash_1 = hHash
                uint32_t pdwSigLen = pdwSigLen_1
                var_78.q = arg4
                
                if (CryptSignHashW(hHash_1, *(rax_4 + 0x18), nullptr, 0, var_78, &pdwSigLen) != 0)
                    uint32_t pdwSigLen_2 = pdwSigLen
                    char* r10_1 = nullptr
                    rsi = 1
                    
                    if ((pdwSigLen_2 & 0xfffffffe) u> 0)
                        do
                            char r8_1 = r10_1[arg4]
                            uint64_t r9_2 = zx.q(pdwSigLen_2 - r10_1.d - 1)
                            r10_1[arg4] = *(r9_2 + arg4)
                            r10_1 = zx.q(r10_1.d + 1)
                            *(r9_2 + arg4) = r8_1
                            pdwSigLen_2 = pdwSigLen
                        while (r10_1.d u< pdwSigLen_2 u>> 1)
                    
                    *arg5 = pdwSigLen_2
                else
                    int32_t rax_12 = data_143fecca8
                    
                    if (rax_12 == 0)
                        rax_12 = sub_1428a5060()
                        data_143fecca8 = rax_12
                    
                    sub_1428a5670(rax_12, 0x70, 0x72, "engines\e_capi.c", 0x37a)
                    sub_1428df7e0()
            else
                int32_t rax_10 = data_143fecca8
                
                if (rax_10 == 0)
                    rax_10 = sub_1428a5060()
                    data_143fecca8 = rax_10
                
                sub_1428a5670(rax_10, 0x70, 0x67, "engines\e_capi.c", 0x372)
                sub_1428df7e0()
            
            CryptDestroyHash(hHash)
        else
            int32_t rax_8 = data_143fecca8
            
            if (rax_8 == 0)
                rax_8 = sub_1428a5060()
                data_143fecca8 = rax_8
            
            sub_1428a5670(rax_8, 0x70, 0x64, "engines\e_capi.c", 0x36b)
            sub_1428df7e0()
    else
        if (arg1 == 0x2a2)
            Algid = 0x800e
            goto label_1428e29b8
        
    label_1428e294c:
        void var_58
        sub_1428b7080(&var_58, 0xa, "%x", zx.q(arg1))
        int32_t rax_6 = data_143fecca8
        
        if (rax_6 == 0)
            rax_6 = sub_1428a5060()
            data_143fecca8 = rax_6
        
        sub_1428a5670(rax_6, 0x70, 0x7e, "engines\e_capi.c", 0x363)
        sub_1428a4880(2)
else
    int32_t rax_5 = data_143fecca8
    
    if (rax_5 == 0)
        rax_5 = sub_1428a5060()
        data_143fecca8 = rax_5
    
    sub_1428a5670(rax_5, 0x70, 0x66, "engines\e_capi.c", 0x343)

__security_check_cookie(rax_1 ^ &var_98)
return zx.q(rsi)
