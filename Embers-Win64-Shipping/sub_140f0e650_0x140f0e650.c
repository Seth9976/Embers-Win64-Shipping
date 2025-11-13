// 函数: sub_140f0e650
// 地址: 0x140f0e650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x250))() != 0)
    if (*(arg4 + 0x5c) != 0)
        uint32_t rdx = zx.d(*(arg1 + 0x5b1))
        
        if (rdx != 0 && rdx != 1 && (rdx == 2 || arg1[0xb6].b == 3))
            goto label_140f0e6aa
    else if (arg1[0xb6].b == 3)
    label_140f0e6aa:
        
        if (sub_140e6a4b0(data_143e29f28, arg4, arg1[0xa0]) != 0)
            (*(*arg1 + 0x260))(arg1)

*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
