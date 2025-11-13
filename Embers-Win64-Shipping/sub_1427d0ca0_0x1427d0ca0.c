// 函数: sub_1427d0ca0
// 地址: 0x1427d0ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9 = 0
int32_t r8 = *(arg1 + 0x24)

if (r8 == 0)
    *arg3 = 0
else
    uint32_t r10_1 = zx.d(*arg2)
    uint32_t rcx_3 = not.d(r10_1 << 0xf) + r10_1
    uint32_t rcx_4 = ((zx.q(rcx_3 u>> 0xa) ^ zx.q(rcx_3)) * 9).d
    uint32_t rcx_5 = rcx_4 ^ rcx_4 u>> 6
    uint32_t rcx_6 = rcx_5 + not.d(rcx_5 << 0xb)
    r9 = (zx.q(rcx_6 u>> 0x10) ^ zx.q(rcx_6)) & zx.q(r8 - 1)
    int32_t i = *(arg1[3] + (r9 << 2))
    bool cond:0_1 = i != 0xffffffff
    
    if (i != 0xffffffff)
        do
            if (*(arg1[1] + zx.q(i) * 0x10) == r10_1.w)
                break
            
            i = *(arg1[2] + (zx.q(i) << 2))
        while (i != 0xffffffff)
        
        cond:0_1 = i != 0xffffffff
    
    uint64_t rax_10
    rax_10.b = cond:0_1
    *arg3 = rax_10.b
    
    if (rax_10.b != 0)
        return (zx.q(i) << 4) + arg1[1]

if (*(arg1 + 0x34) == arg1[4].d)
    int32_t rax_16 = *(arg1 + 0x24)
    int32_t rdx = 0x10
    
    if (rax_16 != 0)
        rdx = rax_16 * 2
    
    if (rdx u> rax_16)
        sub_1427d1540(arg1, rdx)
    
    uint32_t rcx_9 = zx.d(*arg2)
    uint32_t rcx_10 = rcx_9 + not.d(rcx_9 << 0xf)
    uint32_t rcx_11 = ((zx.q(rcx_10 u>> 0xa) ^ zx.q(rcx_10)) * 9).d
    uint32_t rcx_12 = rcx_11 ^ rcx_11 u>> 6
    uint32_t rcx_13 = rcx_12 + not.d(rcx_12 << 0xb)
    r9 = (zx.q(rcx_13 u>> 0x10) ^ zx.q(rcx_13)) & zx.q(*(arg1 + 0x24) - 1)

uint64_t r8_2 = zx.q(*(arg1 + 0x2c))
int64_t rcx_14 = arg1[3]
int64_t rdx_1 = arg1[2]
*(arg1 + 0x2c) = (r8_2 + 1).d
uint64_t rax_31 = zx.q(r9.d)
*(rdx_1 + (r8_2 << 2)) = *(rcx_14 + (rax_31 << 2))
*(arg1[3] + (rax_31 << 2)) = r8_2.d
*(arg1 + 0x34) += 1
arg1[6].d += 1
return (zx.q(r8_2.d) << 4) + arg1[1]
