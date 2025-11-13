// 函数: sub_14186c530
// 地址: 0x14186c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(*(arg1 + 0x20))

if (rcx.d u<= 5)
    bool cond:0_1
    
    switch (rcx)
        case 0
            cond:0_1 = rcx.b != 0
        case 1
            cond:0_1 = rcx.b != 1
        case 2, 3, 4, 5
            cond:0_1 = rcx.b != 2
    
    if (not(cond:0_1))
        *(arg1 + 0x20) = 0xff

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
