// 函数: sub_14263bd50
// 地址: 0x14263bd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != *(arg1 + 0x38))
    goto label_14263bd6d

if (*(arg2 + 0x39) != 4)
    return 

*(arg1 + 0x38) = 0
label_14263bd6d:

if (*(arg2 + 0x39) != 4)
    return 

int32_t rax = *(arg1 + 0x68)

if ((rax.b & 3) == 0)
    sub_1405a9f90(arg1 + 0x40, 0)
    rax = *(arg1 + 0x68)

*(arg1 + 0x68) = rax | 2
return sub_14263a2c0(arg1 - 0x28) __tailcall
