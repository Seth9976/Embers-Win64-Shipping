// 函数: sub_142bab040
// 地址: 0x142bab040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg2

if (r8 s> 0)
    int32_t rdx = *(arg1 + 0x30)
    
    if (r8 s<= rdx)
        int64_t r9 = *(arg1 + 0x28)
        int32_t rdx_1 = rdx - r8
        int32_t* rcx = r9 + (sx.q(rdx_1) << 2)
        int32_t rbx = *rcx
        memmove(rcx, r9 + (sx.q(rdx_1 + 1) << 2), (r8 - 1) << 2)
        *(*(arg1 + 0x28) + (sx.q(*(arg1 + 0x30) - 1) << 2)) = rbx
        return 

if (*(arg1 + 0x315) != 0)
    *(arg1 + 0x18) = 0x86
