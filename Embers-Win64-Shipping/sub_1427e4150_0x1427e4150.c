// 函数: sub_1427e4150
// 地址: 0x1427e4150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = 0
int32_t r8 = *(arg1 + 0x2c)

if (r8 == 0)
    *arg3 = 0
else
    int64_t r9_1 = *arg2
    int64_t rcx_3 = not.q(r9_1 << 0x20) + r9_1
    int64_t rcx_4 = rcx_3 ^ rcx_3 u>> 0x16
    int64_t rcx_5 = rcx_4 + not.q(rcx_4 << 0xd)
    int64_t rcx_6 = (rcx_5 u>> 8 ^ rcx_5) * 9
    int64_t rcx_7 = rcx_6 ^ rcx_6 u>> 0xf
    int64_t rcx_8 = rcx_7 + not.q(rcx_7 << 0x1b)
    r10 = (zx.q((rcx_8 u>> 0x1f).d) ^ zx.q(rcx_8.d)) & zx.q(r8 - 1)
    int32_t i = *(arg1[4] + (r10 << 2))
    bool cond:0_1 = i != 0xffffffff
    
    if (i != 0xffffffff)
        do
            if (*(arg1[2] + zx.q(i) * 0x10) == r9_1)
                break
            
            i = *(arg1[3] + (zx.q(i) << 2))
        while (i != 0xffffffff)
        
        cond:0_1 = i != 0xffffffff
    
    uint64_t rax_15
    rax_15.b = cond:0_1
    *arg3 = rax_15.b
    
    if (rax_15.b != 0)
        return (zx.q(i) << 4) + arg1[2]

if (*(arg1 + 0x3c) == arg1[5].d)
    int32_t rax_21 = *(arg1 + 0x2c)
    int32_t rdx = 0x10
    
    if (rax_21 != 0)
        rdx = rax_21 * 2
    
    if (rdx u> rax_21)
        sub_1427e68b0(arg1, rdx)
    
    int64_t rcx_11 = *arg2
    int64_t rcx_12 = rcx_11 + not.q(rcx_11 << 0x20)
    int64_t rcx_13 = rcx_12 ^ rcx_12 u>> 0x16
    int64_t rcx_14 = rcx_13 + not.q(rcx_13 << 0xd)
    int64_t rdx_1 = (rcx_14 u>> 8 ^ rcx_14) * 9
    int64_t rdx_2 = rdx_1 ^ rdx_1 u>> 0xf
    int64_t rdx_3 = rdx_2 + not.q(rdx_2 << 0x1b)
    r10 = (zx.q((rdx_3 u>> 0x1f).d) ^ zx.q(rdx_3.d)) & zx.q(*(arg1 + 0x2c) - 1)

uint64_t r8_2 = zx.q(*(arg1 + 0x34))
int64_t rcx_15 = arg1[4]
int64_t rdx_4 = arg1[3]
*(arg1 + 0x34) = (r8_2 + 1).d
*(rdx_4 + (r8_2 << 2)) = *(rcx_15 + (r10 << 2))
*(arg1[4] + (r10 << 2)) = r8_2.d
*(arg1 + 0x3c) += 1
arg1[7].d += 1
return (zx.q(r8_2.d) << 4) + arg1[2]
