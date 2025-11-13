// 函数: sub_142160510
// 地址: 0x142160510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x308) s> 0)
    sub_142167020(arg1, arg3)

int64_t rbp = sx.q(*(arg1 + 0x2f8))

if (*(arg1 + 0x2f8) s<= 0)
    return 

if (rbp.d != 0)
    int32_t rax_1 = arg2[1].d
    int32_t rdx = rax_1 + rbp.d
    
    if (rdx s> *(arg2 + 0xc))
        sub_1405c5570(arg2, rdx)
        rax_1 = arg2[1].d
    
    memcpy(*arg2 + (sx.q(rax_1) << 3), *(arg1 + 0x2f0), (rbp << 3).d)
    arg2[1].d += rbp.d

bool cond:2_1 = *(arg1 + 0x2fc) == 0
*(arg1 + 0x2f8) = 0

if (not(cond:2_1))
    sub_1405c5570(arg1 + 0x2f0, 0)
