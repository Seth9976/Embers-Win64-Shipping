// 函数: sub_14185ed80
// 地址: 0x14185ed80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9 = zx.q(*(arg1 + 0x18))

if (r9.d u<= 5)
    bool cond:0_1
    
    switch (r9)
        case 0
            cond:0_1 = r9.b != 0
        case 1
            cond:0_1 = r9.b != 1
        case 2, 3, 4, 5
            cond:0_1 = r9.b != 2
    
    if (not(cond:0_1))
        *(arg1 + 0x18) = 0xff

*arg1 = *arg2
arg1[1].q = arg2[1].q
*(arg1 + 0x18) = 0
return arg1
