// 函数: sub_142c7d0e0
// 地址: 0x142c7d0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*(arg1 + 0x731) = 0
int512_t zmm2

if (*(*arg1 + 0x80c) == 0)
    int32_t rax_3
    rax_3, zmm2 = sub_142c7e6d0(arg1)
    
    if (rax_3 != 0)
        return rax_3
else
    int32_t rax_1
    rax_1, zmm2 = sub_142c820c0(arg1, arg2, arg3)
    
    if (((*(*arg1 + 0x4ea0) - 5) & 0xfffffffd) == 0)
        return 0
    
    if (rax_1 != 0)
        return rax_1

return sub_142c7edd0(arg1, arg2, zmm2)
