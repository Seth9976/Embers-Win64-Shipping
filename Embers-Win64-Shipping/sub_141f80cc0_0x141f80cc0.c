// 函数: sub_141f80cc0
// 地址: 0x141f80cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x190) != 0)
    return 

sub_142160510(*(*(arg1 + 0x28) + 0x68), arg2, arg3)

if (*(*(arg1 + 0x28) + 0x1508) != 0)
    return 

int64_t rbp_1 = sx.q(*(arg1 + 0x188))

if (*(arg1 + 0x188) == 0)
    return 

if (rbp_1.d != 0)
    int32_t rax_1 = arg2[1].d
    int32_t rdx = rax_1 + rbp_1.d
    
    if (rdx s> *(arg2 + 0xc))
        sub_1405c5570(arg2, rdx)
        rax_1 = arg2[1].d
    
    memcpy(*arg2 + (sx.q(rax_1) << 3), *(arg1 + 0x180), (rbp_1 << 3).d)
    arg2[1].d += rbp_1.d

bool cond:2_1 = *(arg1 + 0x18c) == 0
*(arg1 + 0x188) = 0

if (not(cond:2_1))
    sub_1405c5570(arg1 + 0x180, 0)
