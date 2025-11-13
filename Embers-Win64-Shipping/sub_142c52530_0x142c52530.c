// 函数: sub_142c52530
// 地址: 0x142c52530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *(arg1 + 0xd0)

if (r9 == 0)
    return 3

if (test_bit(*r9, arg2))
    int64_t rax_2 = *(r9 + 8)
    
    if (rax_2 != 0)
        rax_2(arg1, arg2, arg3, *(r9 + 0x18))

return 0
