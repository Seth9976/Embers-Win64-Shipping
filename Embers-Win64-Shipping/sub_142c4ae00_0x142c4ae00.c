// 函数: sub_142c4ae00
// 地址: 0x142c4ae00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HMODULE hModule = data_14401aa10
int32_t var_24 = 0
int32_t var_28 = 0
int32_t rdi = 0

if (hModule != 0)
label_142c4ae61:
    int64_t rax_1 = data_14401aa28
    
    if (rax_1 != 0)
    label_142c4aea3:
        enum WIN32_ERROR rax_2 = rax_1(arg1, arg2, 0, &var_24, 0, &var_28)
        int32_t rcx_1
        
        if (rax_2 == NO_ERROR)
            rcx_1 = var_28
        
        if (rax_2 != NO_ERROR || rcx_1 == 0)
            return rax_2
        
        int32_t rax_3 = var_24
        
        if (rax_3 != 0)
            if (rax_3 u<= 2)
                rdi = 2
            else if (rax_3 == 7)
                rdi = rax_3 - 3
        
        HLOCAL rax_4 = LocalAlloc(LMEM_ZEROINIT, zx.q(rdi + rcx_1))
        *arg4 = rax_4
        
        if (rax_4 != 0)
            enum WIN32_ERROR rax_5 = data_14401aa28(arg1, arg2, 0, arg3, rax_4, &var_28)
            
            if (rax_5 != NO_ERROR)
                LocalFree(*arg4)
                *arg4 = nullptr
            
            return rax_5
    else
        rax_1 = GetProcAddress(hModule, "RegQueryValueExW")
        data_14401aa28 = rax_1
        
        if (rax_1 != 0)
            goto label_142c4aea3
else
    HMODULE hModule_1 = sub_142c4ad10(u"Advapi32.dll", 0)
    data_14401aa10 = hModule_1
    hModule = hModule_1
    
    if (hModule_1 != 0)
        goto label_142c4ae61

return GetLastError()
