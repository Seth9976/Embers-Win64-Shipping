// 函数: sub_14262c8f0
// 地址: 0x14262c8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_20 = arg4
int32_t rdi = 0
int64_t rax = 0
int64_t r11 = arg3
int32_t rbp_1

while (true)
    rbp_1 = 6
    
    if (arg1[rax] == 0xffff)
        break
    
    rdi += 1
    rax += 1
    
    if (rax s>= 6)
        rdi = 6
        break

int32_t rcx = 0

for (int64_t i = 0; i s< 6; i += 1)
    if (*(arg2 + (i << 1)) == 0xffff)
        rbp_1 = rcx
        break
    
    rcx += 1

if (rdi - 2 + rbp_1 s<= 6)
    int32_t* rax_3 = arg5
    int32_t r15_1 = 0
    *arg4 = 0xffffffff
    *rax_3 = 0xffffffff
    
    if (rdi s> 0)
        int16_t* r12_1 = arg1
        
        do
            int16_t rcx_1 = *r12_1
            int16_t rsi_1 = rcx_1
            int16_t r11_1 = arg1[sx.q(mods.dp.d(sx.q(r15_1 + 1), rdi))]
            
            if (rcx_1 u<= r11_1)
                rsi_1 = r11_1
            
            if (rcx_1 u<= r11_1)
                r11_1 = rcx_1
            
            int32_t r10_1 = 0
            int64_t r8 = 0
            
            if (rbp_1 s<= 0)
            label_14262ca15:
                rax_3 = arg5
            else
                int32_t r9 = 1
                
                while (true)
                    int16_t rcx_2 = *(arg2 + (r8 << 1))
                    int16_t rdx_4 = *(arg2 + (sx.q(mods.dp.d(sx.q(r9), rbp_1)) << 1))
                    int16_t rax_10 = rdx_4
                    
                    if (rcx_2 u<= rdx_4)
                        rax_10 = rcx_2
                    
                    if (r11_1 == rax_10)
                        if (rcx_2 u<= rdx_4)
                            rcx_2 = rdx_4
                        
                        if (rsi_1 == rcx_2)
                            arg4 = arg_20
                            rax_3 = arg5
                            *arg4 = r15_1
                            *rax_3 = r10_1
                            break
                    
                    r10_1 += 1
                    r9 += 1
                    r8 += 1
                    
                    if (r8 s>= sx.q(rbp_1))
                        arg4 = arg_20
                        goto label_14262ca15
            
            r15_1 += 1
            r12_1 = &r12_1[1]
        while (r15_1 s< rdi)
        
        r11 = arg3
    
    int64_t r14_2 = sx.q(*arg4)
    
    if (r14_2.d != 0xffffffff)
        int64_t r15_2 = sx.q(*rax_3)
        
        if (r15_2.d != 0xffffffff)
            int16_t* r10_2 =
                r11 + zx.q(*(arg2 + (sx.q(mods.dp.d(sx.q((r15_2 + 2).d), rbp_1)) << 1))) * 6
            uint64_t r12_2 = zx.q(arg1[r14_2]) * 3
            uint32_t rsi_2 = zx.d(*(r11 + (r12_2 << 1)))
            uint64_t rax_19 = zx.q(arg1[sx.q(mods.dp.d(sx.q(rdi - 1 + r14_2.d), rdi))]) * 3
            uint32_t rdx_9 = zx.d(*(r11 + (rax_19 << 1) + 4))
            uint32_t r8_1 = zx.d(*(r11 + (rax_19 << 1)))
            
            if ((zx.d(r10_2[2]) - rdx_9) * (rsi_2 - r8_1)
                    - (zx.d(*(r11 + (r12_2 << 1) + 4)) - rdx_9) * (zx.d(*r10_2) - r8_1) s< 0)
                uint64_t rax_27 = zx.q(arg1[sx.q(mods.dp.d(sx.q((r14_2 + 2).d), rdi))]) * 3
                int16_t* r10_3 = arg3 + zx.q(*(arg2 + (r15_2 << 1))) * 6
                uint64_t rax_33 =
                    zx.q(*(arg2 + (sx.q(mods.dp.d(sx.q(rbp_1 - 1 + r15_2.d), rbp_1)) << 1))) * 3
                uint32_t rdx_14 = zx.d(*(arg3 + (rax_33 << 1) + 4))
                uint32_t r8_2 = zx.d(*(arg3 + (rax_33 << 1)))
                
                if ((zx.d(*(r11 + (rax_27 << 1) + 4)) - rdx_14) * (zx.d(*r10_3) - r8_2)
                        - (zx.d(r10_3[2]) - rdx_14) * (zx.d(*(r11 + (rax_27 << 1))) - r8_2) s< 0)
                    uint64_t rdx_17 = zx.q(arg1[sx.q(mods.dp.d(sx.q((r14_2 + 1).d), rdi))]) * 3
                    uint32_t rsi_3 = rsi_2 - zx.d(*(arg3 + (rdx_17 << 1)))
                    uint32_t rcx_18 =
                        zx.d(*(arg3 + (r12_2 << 1) + 4)) - zx.d(*(arg3 + (rdx_17 << 1) + 4))
                    return zx.q(rsi_3 * rsi_3 + rcx_18 * rcx_18)

return 0xffffffff
