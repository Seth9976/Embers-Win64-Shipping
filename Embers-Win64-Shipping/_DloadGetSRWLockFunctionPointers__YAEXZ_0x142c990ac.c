// 函数: ?DloadGetSRWLockFunctionPointers@@YAEXZ
// 地址: 0x142c990ac
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = data_14401b758

if (result == 1)
    result.b = 0
else if (result != 0)
    result.b = 1
else
    HMODULE hModule_1 = GetModuleHandleW(u"KERNEL32.DLL")
    HMODULE hModule = hModule_1
    
    if (hModule_1 != 0)
        int64_t rax = GetProcAddress(hModule, "AcquireSRWLockExclusive")
        
        if (rax == 0)
            hModule = 1
        else
            data_14401b760 = rax
            int64_t rax_1 = GetProcAddress(hModule, "ReleaseSRWLockExclusive")
            
            if (rax_1 == 0)
                hModule = 1
            else
                data_14401b768 = rax_1
    else
        hModule = 1
    
    result = 0
    bool z_1
    
    if (0 == data_14401b758)
        data_14401b758 = hModule
        z_1 = true
    else
        result = data_14401b758
        z_1 = false
    
    if (not(z_1))
        if (result == 1)
            result.b = 0
        else
            result.b = 1
    else if (hModule == 1 || result == 1)
        result.b = 0
    else
        result.b = 1

return result
