// 函数: sub_142c4bab0
// 地址: 0x142c4bab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t var_38 = 0x20
int64_t var_30
__builtin_memset(&var_30, 0, 0x18)
int16_t* result_1 = nullptr
int64_t var_40 = 0
HLOCAL hMem = nullptr
SetLastError(NO_ERROR)
int16_t* result

if (arg1 != 0)
    HMODULE hModule = data_14401af00
    
    if (hModule != 0)
    label_142c4bb38:
        
        if (data_14401a870 != 0)
            goto label_142c4bb6b
        
        int64_t rax_2 = GetProcAddress(hModule, "SetupDiGetDeviceRegistryPropertyW")
        data_14401a870 = rax_2
        
        if (rax_2 == 0)
            result = nullptr
        else
            hModule = data_14401af00
        label_142c4bb6b:
            int64_t rax_3
            
            if (data_14401a880 == 0)
                rax_3 = GetProcAddress(hModule, "SetupDiDestroyDeviceInfoList")
                data_14401a880 = rax_3
            
            if (data_14401a880 == 0 && rax_3 == 0)
                result = nullptr
            else if (sub_142c4a150(arg1, &var_40, &var_38) == 0)
                result = nullptr
            else
                int64_t rsi_1 = var_40
                int32_t var_48
                int32_t* var_58_1 = &var_48
                int32_t var_60_1 = 0
                var_48 = 0
                data_14401a870(rsi_1, &var_38, 9, 0, 0, var_60_1, var_58_1)
                int32_t rax_5 = var_48
                
                if (rax_5 != 0)
                    HLOCAL hMem_1 = LocalAlloc(LMEM_ZEROINIT, zx.q(rax_5))
                    hMem = hMem_1
                    
                    if (hMem_1 != 0 && data_14401a870(rsi_1, &var_38, 9, 0, hMem_1, var_48, 0) != 0)
                        result_1 = sub_142c4af40(u"SYSTEM\CurrentControlSet\Control\Class\", hMem)
                
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
            goto label_142c4bb38
        
        result = nullptr
else
    SetLastError(ERROR_BAD_ARGUMENTS)
    result = nullptr

__security_check_cookie(rax_1 ^ &var_88)
return result
