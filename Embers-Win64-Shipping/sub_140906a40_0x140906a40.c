// 函数: sub_140906a40
// 地址: 0x140906a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x70)

if (rdx == 0)
    return 

uint64_t rax = zx.q(*(arg1 + 0x3c))

if (rax.d == 1)
    return 

if (rax.d == 4 && *(rdx + 0xd0) != 0)
    int32_t rcx = *(rdx + 0x114)
    int32_t rax_1 = *(rdx + 0x110)
    
    if (rax_1 s<= rcx)
        rcx = rax_1
    
    int64_t* rcx_1 = *(arg1 + 0x60)
    int64_t rdx_1
    
    if (rcx != 0)
        *(arg1 + 0x30) = *(rdx + 0x118)
        *(arg1 + 0x3c) = 5
        (**rcx_1)(rcx_1, 9)
        rcx_1 = *(arg1 + 0x60)
        rdx_1 = 3
    else
        *(arg1 + 0x3c) = 1
        rdx_1 = 4
    
    (**rcx_1)(rcx_1, rdx_1)

if (*(arg1 + 0x3c) != 3 || *(arg1 + 0x30) == 0)
    return 

if (*(arg1 + 0x80) == 0)
    int64_t rax_5 = int.q(_mm_cvtps_pd(*(arg1 + 0x38)) f* float.d(arg2))
    *(arg1 + 0x40) += rax_5
else
    *(arg1 + 0x80) = 0

if (*(arg1 + 0x58) == 0)
    *(arg1 + 0x40) += data_143988980
    *(arg1 + 0x58) = 1

rax = *(arg1 + 0x40)

if (rax s>= *(arg1 + 0x30) || rax s< 0)
    int64_t* rcx_2 = *(arg1 + 0x60)
    (**rcx_2)(rcx_2, 5)
    
    if (*(arg1 + 0x9c) == 0)
        int64_t* rcx_5 = *(arg1 + 0x60)
        *(arg1 + 0x3c) = 5
        *(arg1 + 0x40) = 0
        *(arg1 + 0x38) = 0
        *(arg1 + 0x58) = 0
        (**rcx_5)(rcx_5, 7)
    else
        *(arg1 + 0x30)
        int64_t temp1_1 = mods.dp.q(sx.o(*(arg1 + 0x40)), *(arg1 + 0x30))
        *(arg1 + 0x40) = temp1_1
        
        if (temp1_1 s< 0)
            *(arg1 + 0x40) = *(arg1 + 0x30) + temp1_1

if (*(arg1 + 0x98) == 0)
    sub_1409063a0(*(arg1 + 0x70), *(arg1 + 0x40), *(arg1 + 0x38), *(arg1 + 0x9c))

*(arg1 + 0xb0) = 1
