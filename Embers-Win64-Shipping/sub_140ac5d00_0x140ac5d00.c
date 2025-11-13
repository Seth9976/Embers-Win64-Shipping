// 函数: sub_140ac5d00
// 地址: 0x140ac5d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = zx.d(*(arg1 + 0x10))

if (rdx == 0)
    int64_t rax_9 = sx.q(*(arg1 + 0x30))
    *arg2 = 0
    arg2[0xa].b = 0
    *(arg2 + 8) = rax_9
    return arg2

if (rdx == 2)
    int32_t zmm0 = *(arg1 + 0x34)
    *arg2 = 2
    arg2[0xa].b = 0
    arg2[2] = zmm0
    return arg2

if (rdx == 4)
    *arg2 = 4
    *(arg2 + 0x10) = *(arg1 + 0x18)
    void* rax_5 = *(arg1 + 0x20)
    *(arg2 + 0x18) = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    arg2[8] = *(arg1 + 0x28)
    arg2[0xa].b = 1
    return arg2

if (rdx == 5)
    uint64_t rax_2 = zx.q(*(arg1 + 0x38))
    *arg2 = 5
    arg2[0xa].b = 0
    *(arg2 + 8) = rax_2
    return arg2

*arg2 = 4
sub_1405d9400()
*(arg2 + 0x10) = data_143cd6fd8
void* rcx_1 = data_143cd6fe0
*(arg2 + 0x18) = rcx_1

if (rcx_1 != 0)
    *(rcx_1 + 8) += 1

arg2[8] = data_143cd6fe8
arg2[0xa].b = 1
return arg2
