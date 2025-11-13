// 函数: sub_142b8ff60
// 地址: 0x142b8ff60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x214) + *(arg1 + 0x210) s< *(arg2 + 0x210) + *(arg2 + 0x214))
    return 0

sub_142b8f740(arg1, arg2)
int16_t rbp = 0

while (*(arg1 + 0x214) + *(arg1 + 0x210) s> *(arg2 + 0x210) + *(arg2 + 0x214))
    int64_t rcx_5 = *(arg1 + 0x200)
    rbp += *(rcx_5 + (sx.q(*(arg1 + 0x210) - 1) << 2))
    sub_142b90b30(arg1, arg2, *(rcx_5 + (sx.q(*(arg1 + 0x210) - 1) << 2)))

int32_t rdx_1 = *(arg2 + 0x210)
int64_t r8_2 = *(arg1 + 0x200)
int32_t r14 = *(r8_2 + (sx.q(*(arg1 + 0x210) - 1) << 2))
int32_t r15 = *(*(arg2 + 0x200) + (sx.q(rdx_1 - 1) << 2))

if (rdx_1 != 1)
    uint32_t temp0_1 = divu.dp.d(0:r14, r15 + 1)
    rbp += temp0_1.w
    sub_142b90b30(arg1, arg2, temp0_1)
    
    if ((temp0_1 + 1) * r15 u<= r14 && sub_142b8fe40(arg2, arg1) s<= 0)
        int32_t i
        
        do
            sub_142b909e0(arg1, arg2)
            rbp += 1
            i = sub_142b8fe40(arg2, arg1)
        while (i s<= 0)
else
    uint32_t temp0 = divu.dp.d(0:r14, r15)
    rbp += temp0.w
    *(r8_2 + (sx.q(*(arg1 + 0x210) - 1) << 2)) = r14 - temp0 * r15
    int32_t temp11_1 = *(arg1 + 0x210)
    bool cond:0_1 = temp11_1 != 0
    
    if (temp11_1 s> 0)
        int64_t rcx_15 = *(arg1 + 0x200)
        
        while (*(rcx_15 + (sx.q(*(arg1 + 0x210) - 1) << 2)) == 0)
            *(arg1 + 0x210) -= 1
            
            if (*(arg1 + 0x210) s<= 0)
                break
        
        cond:0_1 = *(arg1 + 0x210) != 0
    
    if (not(cond:0_1))
        *(arg1 + 0x214) = 0

return zx.q(rbp)
