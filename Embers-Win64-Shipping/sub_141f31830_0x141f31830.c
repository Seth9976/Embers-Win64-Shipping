// 函数: sub_141f31830
// 地址: 0x141f31830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x350) |= 2
int32_t rdi = *(arg1 + 0x10)

if (arg4 == 0)
    *(arg1 + 0x10) = 1
    *(arg1 + 0x74) = 0xffffffff
    sub_141f316a0(arg1 + 0x78, *arg2, arg2[1].d)
else
    *(arg1 + 0x10) = 2
    
    if (arg2[1].d == 0)
        *(arg1 + 0x74) = 0xffffffff
    else
        *(arg1 + 0x74) = *(arg1 + 0x228)
        sub_141f316a0(arg1 + 0x78, *arg2, arg2[1].d)

if (rdi == 3)
    *(arg1 + 0x10) = rdi
