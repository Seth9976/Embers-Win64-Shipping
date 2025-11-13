// 函数: sub_142c4bc80
// 地址: 0x142c4bc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t var_38 = 0x20
HLOCAL result_1 = nullptr
int64_t var_30
__builtin_memset(&var_30, 0, 0x18)
int64_t var_40 = 0
HLOCAL hMem = nullptr
HLOCAL rdi = nullptr
SetLastError(NO_ERROR)
HLOCAL result

if (sub_142c4aaf0(0x1770) == 0)
    SetLastError(ERROR_CALL_NOT_IMPLEMENTED)
    result = nullptr
else if (arg1 != 0)
    HMODULE hModule = data_14401af00
    
    if (hModule != 0)
    label_142c4bd2c:
        
        if (data_14401a878 != 0)
            goto label_142c4bd58
        
        int64_t rax_3 = GetProcAddress(hModule, "SetupDiGetDevicePropertyW")
        data_14401a878 = rax_3
        
        if (rax_3 == 0)
            result = nullptr
        else
            hModule = data_14401af00
        label_142c4bd58:
            
            if (data_14401a888 != 0)
                goto label_142c4bd8f
            
            int64_t rax_4 = GetProcAddress(hModule, "SetupGetInfDriverStoreLocationW")
            data_14401a888 = rax_4
            
            if (rax_4 == 0)
                result = nullptr
            else
                hModule = data_14401af00
            label_142c4bd8f:
                int64_t rax_5
                
                if (data_14401a880 == 0)
                    rax_5 = GetProcAddress(hModule, "SetupDiDestroyDeviceInfoList")
                    data_14401a880 = rax_5
                
                if (data_14401a880 == 0 && rax_5 == 0)
                    result = nullptr
                else if (sub_142c4a150(arg1, &var_40, &var_38) == 0)
                    result = nullptr
                else
                    int64_t rsi_1 = var_40
                    int32_t var_50_1 = 0
                    int32_t var_48
                    int32_t* var_58_1 = &var_48
                    int32_t var_60_1 = 0
                    int64_t var_68_1 = 0
                    var_48 = 0
                    int32_t var_44 = 0
                    data_14401a878(rsi_1, &var_38, &data_1436b00e0, &var_44, var_68_1, var_60_1, 
                        var_58_1, var_50_1, var_48)
                    int32_t rax_7 = var_48
                    
                    if (rax_7 != 0)
                        HLOCAL hMem_1 = LocalAlloc(LMEM_ZEROINIT, zx.q(rax_7) * 2)
                        hMem = hMem_1
                        
                        if (hMem_1 != 0 && data_14401a878(rsi_1, &var_38, &data_1436b00e0, &var_44, 
                                hMem_1, var_48, 0, 0) != 0)
                            int32_t var_60_2
                            var_60_2.q = &var_48
                            HLOCAL var_68_2
                            var_68_2.d = 0
                            data_14401a888(hMem, 0, 0, 0, var_68_2, var_60_2)
                            int32_t rax_9 = var_48
                            
                            if (rax_9 != 0)
                                HLOCAL rax_10 = LocalAlloc(LMEM_ZEROINIT, zx.q(rax_9) * 2)
                                rdi = rax_10
                                
                                if (rax_10 != 0)
                                    var_60_2.q = 0
                                    var_68_2.d = var_48
                                    
                                    if (data_14401a888(hMem, 0, 0, rax_10, var_68_2, var_60_2) != 0)
                                        wchar16* rax_12 = wcsrchr(rdi, 0x5c)
                                        HLOCAL rdx_8 = &rax_12[1]
                                        
                                        if (rax_12 == 0)
                                            rdx_8 = rdi
                                        
                                        result_1 = sub_142c4b0e0(rdi, ((rdx_8 - rdi) s>> 1) - 1)
                    
                    LocalFree(rdi)
                    LocalFree(hMem)
                    
                    if (rsi_1 != 0)
                        data_14401a880(rsi_1)
                    
                    if (result_1 != 0)
                        SetLastError(NO_ERROR)
                    
                    result = result_1
    else
        hModule = sub_142c4ad10(u"Setupapi.dll", 0)
        data_14401af00 = hModule
        
        if (hModule != 0)
            goto label_142c4bd2c
        
        result = nullptr
else
    SetLastError(ERROR_BAD_ARGUMENTS)
    result = nullptr

__security_check_cookie(rax_1 ^ &var_88)
return result
