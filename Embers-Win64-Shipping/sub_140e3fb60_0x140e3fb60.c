// 函数: sub_140e3fb60
// 地址: 0x140e3fb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x14) = 3
int32_t rcx = *(arg1 + 0xc)

if (rcx == 0)
    *(arg1 + 0x14) = 0x101
    arg1[3].b = 1
    arg1[8].d = 8
    *(arg1 + 0x44) = 8
else if (rcx == 1)
    *(arg1 + 0x15) = 0x101
    arg1[3].w = 0x101
    *(arg1 + 0x17) = 1
    *(arg1 + 0x1a) = 1
    arg1[8].d = 8
    *(arg1 + 0x44) = 8
else if (rcx == 2)
    *(arg1 + 0x15) = 0x102
    arg1[3].w = 0x101
    *(arg1 + 0x17) = 1
    *(arg1 + 0x1a) = 1
    arg1[8].d = 0x10
    *(arg1 + 0x44) = 8
else if (rcx == 3)
    *(arg1 + 0x15) = 0x102
    arg1[3].w = 0x102
    *(arg1 + 0x17) = (rcx - 2).b
    *(arg1 + 0x1a) = (rcx - 2).b
    arg1[8].d = 0x10
    *(arg1 + 0x44) = 0x10

int32_t r8 = *(arg1 + 0x44)
int32_t r10 = arg1[8].d
*(arg1 + 0x24) = arg4
*(arg1 + 0x1c) = arg2
arg1[4].d = arg3
arg1[5].d = arg2 * arg4
arg1[6].d = (arg3 - 1 + r8) & neg.d(r8)
uint32_t rdx_3 = zx.d(*(arg1 + 0x14))
int32_t r9_2 = (arg2 - 1 + r10) & neg.d(r10)
*(arg1 + 0x2c) = r9_2
*(arg1 + 0x34) = rdx_3 * arg2
int32_t rcx_8 = r9_2 * rdx_3
arg1[7].d = rcx_8
*(arg1 + 0x3c) = divs.dp.d(sx.q(r9_2), r10)
int64_t rax_7 = sub_140a82f30(sx.q(rcx_8 * r8), 0)
arg1[9] = rax_7

if (rax_7 != 0)
    int32_t i = 1
    
    if (*(arg1 + 0x44) s> 1)
        void* rcx_11 = &arg1[0xa]
        
        do
            i += 1
            *rcx_11 = sx.q(arg1[7].d) + *(rcx_11 - 8)
            rcx_11 += 8
        while (i s< *(arg1 + 0x44))
    
    sub_140e3a660(arg1, arg1 + 0x24c, &data_1439b32e0)
    void* r8_1 = &data_1439b3360
    
    if (arg1[2].b != 0)
        r8_1 = &data_1439b32e0
    
    sub_140e3a660(arg1, arg1 + 0x34c, r8_1)
    bool cond:1_1 = *(arg1 + 0x11) == 0
    arg1[0x694] = arg1 + 0x2c9c
    arg1[0x695].d = 0x800
    
    if (not(cond:1_1))
        memset(&arg1[0x392], 0, 0x1000)
        *(arg1 + 0x34ac) = 0
        arg1[0x592] = 0
        arg1[0x593].d = 0
        arg1[0x19].b = 0
        uint64_t rax_11 = zx.q(*(arg1 + 0x34b5))
        *(arg1 + 0x34b4) = 1
        return rax_11
    
    int64_t i_3 = 2
    void* rcx_15 = &data_1439b3420
    int64_t i_4 = 2
    *(arg1 + 0x184c) = data_1439b33e0
    *(arg1 + 0x185c) = data_1439b33f0
    arg1[0x312] = data_1439b33f8
    arg1[0x313].d = data_1439b3400
    *(arg1 + 0x186e) = data_1439b3408
    *(arg1 + 0x187e) = data_1439b3418
    void* rax_15 = &arg1[0x352]
    uint128_t zmm0_1
    int64_t i_1
    
    do
        rax_15 += 0x80
        zmm0_1 = *rcx_15
        rcx_15 += 0x80
        *(rax_15 - 0x80) = zmm0_1
        *(rax_15 - 0x70) = *(rcx_15 - 0x70)
        *(rax_15 - 0x60) = *(rcx_15 - 0x60)
        *(rax_15 - 0x50) = *(rcx_15 - 0x50)
        *(rax_15 - 0x40) = *(rcx_15 - 0x40)
        *(rax_15 - 0x30) = *(rcx_15 - 0x30)
        *(rax_15 - 0x20) = *(rcx_15 - 0x20)
        *(rax_15 - 0x10) = *(rcx_15 - 0x10)
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    void* rcx_16 = &data_1439b3560
    *(arg1 + 0x185d) = data_1439b3520
    *(arg1 + 0x186d) = data_1439b3530
    arg1[0x332] = data_1439b3538
    arg1[0x333].d = data_1439b3540
    *(arg1 + 0x187f) = data_1439b3548
    *(arg1 + 0x188f) = data_1439b3558
    void* rax_19 = &arg1[0x372]
    int64_t i_2
    
    do
        rax_19 += 0x80
        zmm0_1 = *rcx_16
        rcx_16 += 0x80
        *(rax_19 - 0x80) = zmm0_1
        *(rax_19 - 0x70) = *(rcx_16 - 0x70)
        *(rax_19 - 0x60) = *(rcx_16 - 0x60)
        *(rax_19 - 0x50) = *(rcx_16 - 0x50)
        *(rax_19 - 0x40) = *(rcx_16 - 0x40)
        *(rax_19 - 0x30) = *(rcx_16 - 0x30)
        *(rax_19 - 0x20) = *(rcx_16 - 0x20)
        *(rax_19 - 0x10) = *(rcx_16 - 0x10)
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)
    
    if (sub_140e43360(arg1).b != 0)
        return zx.q(*(arg1 + 0x34b5))

rax_7.b = 0
return rax_7
