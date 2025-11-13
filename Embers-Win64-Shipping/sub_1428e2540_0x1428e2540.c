// 函数: sub_1428e2540
// 地址: 0x1428e2540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t rdi = sx.q(arg1)
uint64_t result

if (arg1 s> 0)
    sub_1428df6c0(sub_1428e3030(sub_14060aa60(arg4), data_143b85e30), 
        "Called capi_rsa_priv_dec()\n", arg3)
    void* rax_4 = sub_1428970e0(arg4, data_143b85e34)
    
    if (rax_4 != 0)
        uint64_t r9 = zx.q(arg5)
        
        if (r9.d == 1)
            int64_t rax_7 = sub_1428a6730(rdi)
            
            if (rax_7 != 0)
                if (rdi.d s> 0)
                    char* rcx_9 = nullptr
                    char* rdx_5 = rdi - 1 + rax_7
                    
                    do
                        char rax_9 = rcx_9[arg2]
                        rcx_9 = &rcx_9[1]
                        *rdx_5 = rax_9
                        rdx_5 = &rdx_5[-1]
                    while (rcx_9 s< rdi)
                
                uint32_t pdwDataLen = rdi.d
                int32_t pbData
                pbData.q = rax_7
                
                if (CryptDecrypt(*(rax_4 + 0x10), 0, 1, 0, pbData, &pdwDataLen) != 0)
                    int64_t pdwDataLen_1 = sx.q(pdwDataLen)
                    memcpy(arg3, rax_7, pdwDataLen_1.d)
                    sub_1428b8960(rax_7, pdwDataLen_1)
                    sub_1428a6780(rax_7)
                    result = zx.q(pdwDataLen_1.d)
                else
                    int32_t rax_11 = data_143fecca8
                    
                    if (rax_11 == 0)
                        rax_11 = sub_1428a5060()
                        data_143fecca8 = rax_11
                    
                    sub_1428a5670(rax_11, 0x6e, 0x6a, "engines\e_capi.c", 0x3c6)
                    sub_1428df7e0()
                    sub_1428b8960(rax_7, zx.q(pdwDataLen))
                    sub_1428a6780(rax_7)
                    result = 0xffffffff
            else
                int32_t rax_8 = data_143fecca8
                
                if (rax_8 == 0)
                    rax_8 = sub_1428a5060()
                    data_143fecca8 = rax_8
                
                sub_1428a5670(rax_8, 0x6e, 0x41, "engines\e_capi.c", 0x3bd)
                result = 0xffffffff
        else
            void var_40
            sub_1428b7080(&var_40, 0xa, "%d", r9)
            int32_t rax_6 = data_143fecca8
            
            if (rax_6 == 0)
                rax_6 = sub_1428a5060()
                data_143fecca8 = rax_6
            
            sub_1428a5670(rax_6, 0x6e, 0x7f, "engines\e_capi.c", 0x3b5)
            sub_1428a4880(2)
            result = 0xffffffff
    else
        int32_t rax_5 = data_143fecca8
        
        if (rax_5 == 0)
            rax_5 = sub_1428a5060()
            data_143fecca8 = rax_5
        
        sub_1428a5670(rax_5, 0x6e, 0x66, "engines\e_capi.c", 0x3a4)
        result = 0xffffffff
else
    result = zx.q(rdi.d)

__security_check_cookie(rax_1 ^ &var_78)
return result
