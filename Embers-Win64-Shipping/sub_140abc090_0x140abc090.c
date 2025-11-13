// 函数: sub_140abc090
// 地址: 0x140abc090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = wcsncmp(arg2, u"LOCGEN_TOLOWER", 0xe)

if (rax == 0)
    goto label_140abc0df

if (wcsncmp(arg2, u"LOCGEN_TOUPPER", 0xe) == 0)
    rax.b = 1
label_140abc0df:
    void* rcx_2 = &arg2[0xe]
    *(arg1 + 0x28) = rax.b
    int16_t i = *rcx_2
    
    if (i != 0)
        while (i == 9 || i == 0x20)
            i = *(rcx_2 + 2)
            rcx_2 += 2
            
            if (i == 0)
                break
    
    wchar16* result_1 = nullptr
    void* rax_1 = nullptr
    
    if (*rcx_2 == 0x28)
        rax_1 = rcx_2
    
    void* rcx_3 = rax_1 + 2
    
    if (rax_1 == 0)
        rcx_3 = rax_1
    
    if (rcx_3 != 0)
        int16_t i_1 = *rcx_3
        
        if (i_1 != 0)
            while (i_1 == 9 || i_1 == 0x20)
                i_1 = *(rcx_3 + 2)
                rcx_3 += 2
                
                if (i_1 == 0)
                    break
        
        wchar16* result_2 = sub_140abc1e0(rcx_3, arg1 + 0x10, 0, 0, 1)
        
        if (result_2 != 0)
            wchar16 i_2 = *result_2
            
            if (i_2 != 0)
                while (i_2 == 9 || i_2 == 0x20)
                    i_2 = result_2[1]
                    result_2 = &result_2[1]
                    
                    if (i_2 == 0)
                        break
            
            if (*result_2 == 0x29)
                result_1 = result_2
            
            wchar16* result = &result_1[1]
            
            if (result_1 == 0)
                result = result_1
            
            if (result != 0)
                sub_140ab73d0(arg1, arg3)
                return result

return 0
