// 函数: sub_142bcbf10
// 地址: 0x142bcbf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg2 + 0x13c)
int64_t r14 = *(arg2 + 0x98)
int32_t rcx = 0
int32_t* rdx = *(arg2 + 0x140)
int32_t rax = 3

if (r9 == 0)
    goto label_142bcbf96

int32_t* r8_1 = rdx

while (*r8_1 != 0x20)
    rcx += 1
    r8_1 = &r8_1[4]
    
    if (rcx u>= r9)
        goto label_142bcbf96

int32_t r8_2 = *(arg1 + 0xc)
int32_t rdx_1 = rdx[zx.q(rcx) * 4 + 3]
int32_t rax_3

if (r8_2 u<= rdx_1)
    rax_3 = sub_142b970b0(arg1, rdx_1 - r8_2)

int32_t arg_10

if (r8_2 u> rdx_1 || rax_3 != 0)
    rax = 0x53
label_142bcbf96:
    arg_10 = rax
    
    if (rax == 0)
        goto label_142bcbfaa
else
    arg_10 = rax_3
label_142bcbfaa:
    int32_t rax_4 = sub_142b96dd0(arg1, &arg_10)
    rax = arg_10
    
    if (rax == 0)
        if ((rax_4 & 0xffffff00) != 0)
            return 3
        
        void* const rdx_4 = &data_143687eb0
        int32_t r15_2 = rax_4 & 4
        
        if (r15_2 == 0)
            rdx_4 = &data_143687e90
        
        rax = sub_142b96aa0(arg1, rdx_4, arg2 + 0x1b8)
        arg_10 = rax
        
        if (rax == 0)
            int16_t rdx_5 = *(arg2 + 0x1b8)
            int16_t rcx_4 = *(arg2 + 0x1ba)
            int16_t rax_5
            int16_t r8_4
            
            if (rdx_5 u<= rcx_4 && rcx_4 u<= 0xff)
                r8_4 = *(arg2 + 0x1bc)
                rax_5 = *(arg2 + 0x1be)
            
            if (rdx_5 u> rcx_4 || rcx_4 u> 0xff || r8_4 u> rax_5 || rax_5 u> 0xff)
                return 8
            
            int32_t rdi_4 = (zx.d(rax_5) - zx.d(r8_4) + 1) * (zx.d(rcx_4) - zx.d(rdx_5) + 1)
            *(arg2 + 0x1c8) = sub_142b99a90(r14, 2, 0, rdi_4, 0, &arg_10)
            rax = arg_10
            
            if (rax == 0)
                int32_t rax_9 = sub_142b96500(arg1, rdi_4 * 2)
                arg_10 = rax_9
                
                if (rax_9 == 0)
                    uint16_t r8_5 = *(arg2 + 0x1c0)
                    uint16_t r10_1 = *(arg2 + 0x1bc)
                    uint16_t rdx_8 = r8_5 u>> 8
                    r8_5 &= 0xff
                    uint16_t r9_2
                    
                    if (rdx_8 u>= r10_1 && rdx_8 u<= *(arg2 + 0x1be))
                        r9_2 = *(arg2 + 0x1b8)
                    
                    if (rdx_8 u< r10_1 || rdx_8 u> *(arg2 + 0x1be) || r8_5 u< r9_2
                            || r8_5 u> *(arg2 + 0x1ba))
                        r9_2 = *(arg2 + 0x1b8)
                        rdx_8 = r10_1
                        r8_5 = r9_2
                        *(arg2 + 0x1c0) = r10_1 * 0x100 + r9_2
                    
                    uint32_t rcx_13 = zx.d(r9_2)
                    char* rax_17 = sx.q((
                        (zx.d(rdx_8) - zx.d(r10_1)) * (zx.d(*(arg2 + 0x1ba)) - rcx_13 + 1) - rcx_13
                        + zx.d(r8_5)) * 2) + arg1[7]
                    uint16_t rax_18
                    uint16_t rcx_14
                    
                    if (r15_2 == 0)
                        rcx_14 = zx.w(rax_17[1])
                        rax_18 = zx.w(*rax_17)
                    else
                        rcx_14 = zx.w(*rax_17)
                        rax_18 = zx.w(rax_17[1])
                    
                    uint16_t r14_1 = 0
                    rcx_14 = rcx_14 << 8 | rax_18
                    
                    if (zx.d(rcx_14) u< *(arg2 + 0x1a8))
                        r14_1 = rcx_14
                    
                    if (r14_1 != 0)
                        int128_t* rcx_15 = *(arg2 + 0x1b0)
                        uint64_t rax_21 = zx.q(r14_1) * 2
                        int128_t zmm1 = *(rcx_15 + (rax_21 << 3))
                        *(rcx_15 + (rax_21 << 3)) = *rcx_15
                        **(arg2 + 0x1b0) = zmm1
                    
                    int16_t i = *(arg2 + 0x1bc)
                    uint16_t* rdi_5 = *(arg2 + 0x1c8)
                    
                    for (; i u<= *(arg2 + 0x1be); i += 1)
                        int16_t j = *(arg2 + 0x1b8)
                        
                        while (j u<= *(arg2 + 0x1ba))
                            uint16_t rax_23
                            
                            if (r15_2 == 0)
                                rax_23 = sub_142b96800(arg1)
                            else
                                rax_23 = sub_142b967c0(arg1)
                            
                            if (rax_23 != 0xffff)
                                if (rax_23 == r14_1)
                                    rax_23 = 0
                                else if (rax_23 == 0)
                                    rax_23 = r14_1
                            
                            *rdi_5 = rax_23
                            j += 1
                            rdi_5 = &rdi_5[1]
                    
                    sub_142b96620(arg1)
                    return arg_10
                
                sub_142b99980(r14, *(arg2 + 0x1c8))
                rax = arg_10
                *(arg2 + 0x1c8) = 0
return rax
