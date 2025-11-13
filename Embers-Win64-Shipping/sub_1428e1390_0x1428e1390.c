// 函数: sub_1428e1390
// 地址: 0x1428e1390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
sub_1428df6c0(arg1, "capi_get_provname, index=%d\n", zx.q(arg4))
uint32_t pcbProvName[0x4]

if (CryptEnumProvidersW(arg4, nullptr, 0, arg3, nullptr, &pcbProvName) != 0)
    PWSTR szProvName = sub_1428a6730(zx.q(pcbProvName[0]))
    
    if (szProvName == 0)
        int32_t rax_3 = data_143fecca8
        
        if (rax_3 == 0)
            rax_3 = sub_1428a5060()
            data_143fecca8 = rax_3
        
        sub_1428a5670(rax_3, 0x68, 0x41, "engines\e_capi.c", 0x47c)
        return 0
    
    if (CryptEnumProvidersW(arg4, nullptr, 0, arg3, szProvName, &pcbProvName) != 0)
        *arg2 = sub_1428e2e00(szProvName)
        sub_1428a6780(szProvName)
        CHAR* r8_4 = *arg2
        
        if (r8_4 == 0)
            return 0
        
        *arg3
        sub_1428df6c0(arg1, "capi_get_provname, returned name=%s, type=%d\n", r8_4)
        return 1
    
    enum WIN32_ERROR rax_6 = GetLastError()
    sub_1428a6780(szProvName)
    
    if (rax_6 != ERROR_NO_MORE_ITEMS)
        int32_t rax_7 = data_143fecca8
        
        if (rax_7 == 0)
            rax_7 = sub_1428a5060()
            data_143fecca8 = rax_7
        
        sub_1428a5670(rax_7, 0x68, 0x69, "engines\e_capi.c", 0x484)
        sub_1428df780(rax_6)
        return 0
else
    enum WIN32_ERROR rax_1 = GetLastError()
    
    if (rax_1 != ERROR_NO_MORE_ITEMS)
        int32_t rax_2 = data_143fecca8
        
        if (rax_2 == 0)
            rax_2 = sub_1428a5060()
            data_143fecca8 = rax_2
        
        sub_1428a5670(rax_2, 0x68, 0x69, "engines\e_capi.c", 0x476)
        sub_1428df780(rax_1)
        return 0

return 2
