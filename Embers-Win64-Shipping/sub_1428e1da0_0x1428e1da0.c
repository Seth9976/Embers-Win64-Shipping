// 函数: sub_1428e1da0
// 地址: 0x1428e1da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
sub_1428b6f70(arg2, "Available CSPs:\n", sub_1428df6c0(arg1, "capi_list_providers\n", arg3))
uint32_t dwIndex = 0

while (true)
    sub_1428df6c0(arg1, "capi_get_provname, index=%d\n", zx.q(dwIndex))
    PWSTR var_58_1
    uint32_t pdwProvType
    uint32_t pcbProvName
    
    if (CryptEnumProvidersW(dwIndex, nullptr, 0, &pdwProvType, nullptr, &pcbProvName) == 0)
        enum WIN32_ERROR rax_8 = GetLastError()
        
        if (rax_8 != ERROR_NO_MORE_ITEMS)
            int32_t rax_9 = data_143fecca8
            
            if (rax_9 == 0)
                rax_9 = sub_1428a5060()
                data_143fecca8 = rax_9
            
            var_58_1.d = 0x476
            sub_1428a5670(rax_9, 0x68, 0x69, "engines\e_capi.c", var_58_1.d)
            void var_40
            sub_1428b7080(&var_40, 0xa, "%lX", zx.q(rax_8))
            sub_1428a4880(2)
        
        __security_check_cookie(rax_1 ^ &var_78)
        return 1
    
    PWSTR szProvName = sub_1428a6730(zx.q(pcbProvName))
    
    if (szProvName == 0)
        int32_t rax_7 = data_143fecca8
        
        if (rax_7 == 0)
            rax_7 = sub_1428a5060()
            data_143fecca8 = rax_7
        
        var_58_1.d = 0x47c
        sub_1428a5670(rax_7, 0x68, 0x41, "engines\e_capi.c", var_58_1.d)
        __security_check_cookie(rax_1 ^ &var_78)
        return 1
    
    PWSTR var_58_2
    
    if (CryptEnumProvidersW(dwIndex, nullptr, 0, &pdwProvType, szProvName, &pcbProvName) == 0)
        enum WIN32_ERROR rax_5 = GetLastError()
        sub_1428a6780(szProvName)
        
        if (rax_5 != ERROR_NO_MORE_ITEMS)
            int32_t rax_6 = data_143fecca8
            
            if (rax_6 == 0)
                rax_6 = sub_1428a5060()
                data_143fecca8 = rax_6
            
            var_58_2.d = 0x484
            sub_1428a5670(rax_6, 0x68, 0x69, "engines\e_capi.c", var_58_2.d)
            sub_1428df780(rax_5)
        
        __security_check_cookie(rax_1 ^ &var_78)
        return 1
    
    PSTR rax_4 = sub_1428e2e00(szProvName)
    sub_1428a6780(szProvName)
    
    if (rax_4 == 0)
        __security_check_cookie(rax_1 ^ &var_78)
        return 1
    
    sub_1428df6c0(arg1, "capi_get_provname, returned name=%s, type=%d\n", rax_4)
    var_58_2.d = pdwProvType
    sub_1428b6f70(arg2, "%lu. %s, type %lu\n", zx.q(dwIndex))
    sub_1428a6780(rax_4)
    dwIndex += 1
