// 函数: sub_142231b80
// 地址: 0x142231b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
int512_t zmm2
zmm1, zmm2 = sub_140cddf60(arg1, arg2)
int32_t i_1 = 0
int64_t* rsi = arg1[0x1a]
int64_t r14 = 0
uint64_t r15_1 = sx.q(arg1[0x1b].d) << 3 u>> 3

if (rsi u> &rsi[arg1[0x1b]])
    r15_1 = 0

if (r15_1 != 0)
    do
        uint64_t rax_2 = sub_1417c9cd0(*rsi, nullptr, zmm2, zmm1)
        *(arg2 + 8) += rax_2
        rsi = &rsi[1]
        r14 += 1
    while (r14 != r15_1)

int32_t i = 0

if (arg1[0xc].d s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t r15_2 = arg1[0xb]
        int64_t rcx_1 = *(r15_2 + r14_1 + 0xa0)
        
        if (rcx_1 != 0)
            uint64_t rax_3 = sub_1417c9cd0(rcx_1, nullptr, zmm2, zmm1)
            *(arg2 + 8) += rax_3
        
        int64_t rcx_2 = *(r15_2 + r14_1 + 0xa8)
        
        if (rcx_2 != 0)
            uint64_t rax_4 = sub_1417c9cd0(rcx_2, nullptr, zmm2, zmm1)
            *(arg2 + 8) += rax_4
        
        i += 1
        r14_1 += 0xb0
    while (i s< arg1[0xc].d)

void arg_8

if (sub_14222c9e0(&arg1[0x15], *sub_140b58170(&arg_8, "PhysXPC", 1)) != 0)
    int64_t rax_9 = sub_140bc7f20(sub_142231830(&arg1[0x15], *sub_140b58170(&arg_8, "PhysXPC", 1)))
    *(arg2 + 8) += rax_9

int64_t rcx_9 = *(arg2 + 8) + (sx.q(*(arg1 + 0x11c)) << 2)
*(arg2 + 8) = rcx_9
int64_t rdx_2 = rcx_9 + (sx.q(*(arg1 + 0xec)) << 2)
*(arg2 + 8) = rdx_2
int64_t r8 = rdx_2 + sx.q(*(arg1 + 0xfc)) * 0xc
*(arg2 + 8) = r8

if (arg1[0x21].d s> 0)
    int64_t rdx_3 = 0
    
    do
        rdx_3 += 0x10
        i_1 += 1
        r8 += sx.q(*(arg1[0x20] + rdx_3 - 4)) << 3
        *(arg2 + 8) = r8
    while (i_1 s< arg1[0x21].d)

int64_t result = (sx.q(*(arg1 + 0x10c)) << 4) + r8
*(arg2 + 8) = result
return result
