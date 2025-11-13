// 函数: sub_140378120
// 地址: 0x140378120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) == 1)
    int64_t i
    
    do
        int32_t r9_1 = *(arg1 + 0x20)
        int32_t r8 = *(arg1 + 0x24)
        int64_t rdx = *(arg1 + 8)
        i = zx.q(r9_1 * r8) + rdx
        
        if (i == *(arg1 + 0x10))
            *(arg1 + 0x10) = zx.q((r9_1 ^ 1) * r8) + rdx
        else
            i = *(arg1 + 0x10)
    while (i == -1)
    *(arg1 + 0x20) ^= 1
    *(arg1 + 0x28) = 0

return memcpy(arg2, zx.q((*(arg1 + 0x20) ^ 1) * *(arg1 + 0x24)) + *(arg1 + 8), arg3) __tailcall
