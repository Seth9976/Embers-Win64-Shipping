// 函数: sub_141946740
// 地址: 0x141946740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t rax = *(arg2 + 0x40)

if (rax == 1)
    if (*(arg2 + 0x3d) == 0 && sub_141955bc0(*(arg2 + 0x20)).b == 0)
        sub_141958330(*(arg2 + 0x18), *(arg2 + 0x20))
        *(arg2 + 0x18) = 0
        *(arg2 + 0x3d) = 1
    
    if (*(arg2 + 0x3d) == 0)
        *(arg1 + 0x2f4) = 0
        jump(data_143effcb8)
else if (rax == 2)
    int32_t rax_1 = *(arg2 + 0x34)
    *(arg2 + 0x34) += 1
    *(arg2 + 0x38)
    *(arg2 + 0x38) = rax_1
    bool cond:0_1 = *(arg2 + 0x3d) != 0
    *(arg2 + 0x28) = 0
    *(arg2 + 0x3c) = 0
    
    if (not(cond:0_1) && sub_141955bc0(*(arg2 + 0x20)) == 0)
        sub_141958330(*(arg2 + 0x18), *(arg2 + 0x20))
        *(arg2 + 0x18) = 0
        *(arg2 + 0x3d) = 1
    
    if (*(arg2 + 0x3d) != 0)
        sub_141955ec0(arg2 + 0x18, arg2 + 0x20)
        *(arg2 + 0x3d) = 0
    
    data_143f001d0(zx.q(*(arg2 + 0x18)), 0x8e28)
