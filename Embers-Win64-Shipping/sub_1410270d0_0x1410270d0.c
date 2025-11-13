// 函数: sub_1410270d0
// 地址: 0x1410270d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if (arg2 u>= *(arg1 + 0x60))
    result.b = 0
    return result

if (arg2 u> *(arg1 + 0x68))
    EnterCriticalSection(arg1 + 0x90)
    result = *(arg1 + 0x88)
    int64_t var_28
    __builtin_memset(&var_28, 0, 0x18)
    
    if (*result != 0)
        void* rcx_2 = **(arg1 + 0x88)
        int128_t zmm1 = *(rcx_2 + 8)
        var_28.o = zmm1
        int128_t var_20
        var_20:8.q = *(rcx_2 + 0x18)
        uint64_t rdi
        
        if (arg2 u>= zmm1.q)
            if (sub_1410645f0(&var_20) == 0)
                rdi.b = 0
            else
                sub_141017270(arg1)
                rdi = zx.q(sub_1410270d0(arg1, arg2))
        else
            rdi.b = 1
        
        if (arg1 != -0x90)
            LeaveCriticalSection(arg1 + 0x90)
        
        return zx.q(rdi.b)
    
    if (arg1 != -0x90)
        LeaveCriticalSection(arg1 + 0x90)

result.b = 1
return result
