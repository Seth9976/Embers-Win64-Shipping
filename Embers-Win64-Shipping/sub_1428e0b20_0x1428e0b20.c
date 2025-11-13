// 函数: sub_1428e0b20
// 地址: 0x1428e0b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
wchar16 const* const szProvider = arg3
uint32_t dwProvType = arg4
int64_t* result = sub_1428a6730(0x20)
int64_t* result_1 = result

if (result != 0)
    if (dwProvType == 1 && data_143feccc0 != 0)
        void* szProvider_1 = szProvider
        uint32_t rdx_2
        uint32_t i
        
        do
            uint32_t rdx_1 = zx.d(*szProvider_1)
            i = zx.d(*(szProvider_1 + Microsoft Enhanced Cryptographic Provider v1.0" - szProvider))
            rdx_2 = rdx_1 - i
            
            if (rdx_1 != i)
                break
            
            szProvider_1 += 2
        while (i != 0)
        
        if (rdx_2 == 0)
            szProvider = u"Microsoft Enhanced RSA and AES Cryptographic Provider"
            dwProvType = rdx_2 + 0x18
    
    if (arg1 != 0 && *arg1 s>= 2 && *(arg1 + 8) != 0)
        PSTR rax = sub_1428e2e00(arg2)
        PSTR rax_1 = sub_1428e2e00(szProvider)
        uint32_t dwProvType_1 = dwProvType
        sub_1428df6c0(arg1, "capi_get_key, contname=%s, provname=%s, type=%d\n", rax)
        sub_1428a6780(rax_1)
        sub_1428a6780(rax)
    
    if (CryptAcquireContextW(&result_1[1], arg2, szProvider, dwProvType, arg1[0xe] u>> 0xc & 0x20)
            == 0)
        int32_t rax_6 = data_143fecca8
        
        if (rax_6 == 0)
            rax_6 = sub_1428a5060()
            data_143fecca8 = rax_6
        
        sub_1428a5670(rax_6, 0x67, 0x68, "engines\e_capi.c", 0x5e6)
        sub_1428df7e0()
        sub_1428a6780(result_1)
        return nullptr
    
    if (CryptGetUserKey(result_1[1], arg5, &result_1[2]) == 0)
        int32_t rax_8 = data_143fecca8
        
        if (rax_8 == 0)
            rax_8 = sub_1428a5060()
            data_143fecca8 = rax_8
        
        sub_1428a5670(rax_8, 0x67, 0x75, "engines\e_capi.c", 0x5eb)
        sub_1428df7e0()
        CryptReleaseContext(result_1[1], 0)
        sub_1428a6780(result_1)
        return nullptr
    
    result_1[3].d = arg5
    result = result_1
    *result_1 = 0

return result
