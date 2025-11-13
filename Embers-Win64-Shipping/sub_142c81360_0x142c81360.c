// 函数: sub_142c81360
// 地址: 0x142c81360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t result

if (arg2 != 0x14b || arg1[0xea].d != 3)
    if (arg2 - 0xc8 u< 0x64)
        return sub_142c7f500(arg1) __tailcall
    
    if (arg2 != 0x14c)
        int64_t r8_3 = *(rcx + 0x678)
        
        if (r8_3 == 0 || *(rcx + 0x4e20) != 0)
            sub_142c64760(rcx, "Access denied: %03d", zx.q(arg2), arg3)
            return 0x43
        
        result = gzprintf(&arg1[0xd3], &data_1434ccff0, r8_3, arg3)
        
        if (result == 0)
            *(*arg1 + 0x4e20) = 1
            arg1[0xea].d = 3
            return 0
    else
        int64_t r8_2 = *(rcx + 0x670)
        
        if (r8_2 == 0)
            sub_142c64760(rcx, "ACCT requested but none available", r8_2, arg3)
            return 0x43
        
        result = gzprintf(&arg1[0xd3], "ACCT %s", r8_2, arg3)
        
        if (result == 0)
            arg1[0xea].d = 5
else
    void* rax_1 = *(*(rcx + 0x250) + 0x10)
    void* const r8 = &data_1434cce10
    
    if (rax_1 != 0)
        r8 = rax_1
    
    result = gzprintf(&arg1[0xd3], "PASS %s", r8, arg3)
    
    if (result == 0)
        arg1[0xea].d = 4

return result
