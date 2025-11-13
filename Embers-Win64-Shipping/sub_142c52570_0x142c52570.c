// 函数: sub_142c52570
// 地址: 0x142c52570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r8 = *(arg1 + 0xd0)

if (r8 == 0)
    return 3

if (test_bit(*r8, arg2))
    int64_t rax_2 = *(r8 + 0x10)
    
    if (rax_2 != 0)
        rax_2(arg1, arg2, *(r8 + 0x18))

return 0
