// 函数: sub_142b135a0
// 地址: 0x142b135a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *arg3

if (rdx s< arg4)
    int32_t rax_2 = (*(*arg2 + 0x48))(arg2, rdx)
    int64_t r8 = *(arg1 - 8)
    
    if ((*(r8 + 0x30))(arg1 - 8, zx.q(rax_2), r8) != 0)
        int32_t rcx_2
        rcx_2.b = rax_2 u> 0xffff
        *arg3 += rcx_2 + 1
        return 2

int32_t rdx_2 = *arg3

if (rdx_2 s> arg4)
    int32_t rax_6 = (*(*arg2 + 0x48))(arg2, rdx_2)
    int64_t r8_1 = *(arg1 - 8)
    
    if ((*(r8_1 + 0x30))(arg1 - 8, zx.q(rax_6), r8_1) != 0)
        int32_t temp0_1 = *arg3
        *arg3 -= 1
        
        if (temp0_1 - 1 s>= 0)
            int32_t rcx_7
            rcx_7.b = (*(*arg2 + 0x48))(arg2, zx.q(*arg3)) u> 0xffff
            *arg3 += 0 - rcx_7
        
        return 2

if (arg5 != 0 && *arg3 == arg4)
    return 1

return 0
