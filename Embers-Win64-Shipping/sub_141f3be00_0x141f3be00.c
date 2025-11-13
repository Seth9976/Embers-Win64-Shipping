// 函数: sub_141f3be00
// 地址: 0x141f3be00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && (*(*arg1 + 0x4c8))() != 0 && (*(*arg2 + 0x4c8))(arg2) != 0)
    int32_t rax_6 = (*(*arg1 + 0x4d8))(arg1)
    int64_t rdx = *arg2
    int32_t rax_7 = (*(rdx + 0x4d8))(arg2, rdx)
    int64_t r8 = *arg1
    int32_t rax_8 = (*(r8 + 0x4d0))(arg1, zx.q(rax_7), r8)
    int64_t r8_1 = *arg2
    int32_t rax_9 = (*(r8_1 + 0x4d0))(arg2, zx.q(rax_6), r8_1)
    
    if (rax_8 s<= rax_9)
        return rax_8
    
    return rax_9

return 0
