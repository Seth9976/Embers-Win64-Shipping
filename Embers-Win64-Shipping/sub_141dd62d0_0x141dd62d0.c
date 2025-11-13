// 函数: sub_141dd62d0
// 地址: 0x141dd62d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x144) = arg2
*(arg1 + 0xd8) = 0

if (not(arg2 > 0f))
    int32_t rax = *(arg1 + 0xd0)
    *(arg1 + 0x13c) &= 0xfe
    *(arg1 + 0xb4) = rax
    int32_t rax_1 = *(arg1 + 0xcc)
    *(arg1 + 0xb8) = rax_1
    *(arg1 + 0x134) = 0
    *(arg1 + 0xb0) = 0
    *(arg1 + 0xc0) = 0
    return rax_1

int32_t r8_1 = *(arg1 + 0xc4) - 1
int32_t rax_3 = r8_1
int32_t rcx_1 = (int.q(float.s(zx.q(**(arg1 + 0x18))) f* arg2)).d

if (rcx_1 u<= r8_1)
    rax_3 = rcx_1

int32_t r14_1 = *(arg1 + 0x58) - *(arg1 + 0x80)
*(arg1 + 0xc0) = rax_3
uint64_t rax_4 = *(arg1 + 8)

if (rax_4 != 0)
    rax_4 = sub_1423660c0(rax_4)
    
    if (rax_4.d != 0)
        int32_t rax_6 = sub_1423660c0(*(arg1 + 8))
        rax_4 = zx.q(*(arg1 + 0xa4))
        
        if (rax_4.d == 2)
            rax_4 = zx.q(divu.dp.d(0:(*(arg1 + 0xc0)), *(arg1 + 0xc8)))
            int32_t i = 0
            int32_t rbp_2 = *(arg1 + 0xa0) * *(arg1 + 0x94)
            int32_t rdx_2 = *(arg1 + 0xd0)
            int32_t rcx_5 = *(arg1 + 0xcc)
            *(arg1 + 0x134) = rax_4.d
            *(arg1 + 0xb4) = rdx_2
            *(arg1 + 0xb8) = rcx_5
            
            if (rax_4.d != 0)
                do
                    int32_t rax_8 = sub_142367150(*(arg1 + 8), rdx_2)
                    int32_t r8_4 = *(arg1 + 0xb8)
                    rdx_2 = *(arg1 + 0xb4)
                    
                    if (r8_4 + rbp_2 u>= rax_8)
                        rdx_2 += 1
                        r8_4 = 0
                        *(arg1 + 0xb4) = rdx_2
                    
                    rax_4 = zx.q(r8_4 + rbp_2)
                    *(arg1 + 0xb8) = rax_4.d
                    
                    if (rdx_2 u>= rax_6)
                        *(arg1 + 0xb4) = *(arg1 + 0xd0)
                        rax_4 = zx.q(*(arg1 + 0xcc))
                        *(arg1 + 0xb8) = rax_4.d
                        break
                    
                    i += 1
                while (i u< *(arg1 + 0x134))
            
            *(arg1 + 0x13c) |= 1
        else if (rax_4.d == 1)
            int32_t rbp_4 = *(arg1 + 0xa0) * 2
            int32_t rdx_3 = *(arg1 + 0xb4)
            void* rcx_8 = *(arg1 + 8)
            int32_t rdi_3 = *(arg1 + 0xc0) * rbp_4 + r14_1
            *(arg1 + 0xb8) = rdi_3
            
            if (rdi_3 u>= sub_142367150(rcx_8, rdx_3))
                int32_t rax_12
                
                do
                    int32_t rax_11 = sub_142367150(*(arg1 + 8), *(arg1 + 0xb4))
                    *(arg1 + 0xb4) += 1
                    *(arg1 + 0xb8) -= rax_11
                    int32_t rdx_5 = *(arg1 + 0xb4)
                    
                    if (rdx_5 u>= rax_6)
                        rdi_3 = *(arg1 + 0xcc)
                        *(arg1 + 0xb4) = *(arg1 + 0xd0)
                        break
                    
                    rdi_3 = *(arg1 + 0xb8)
                    rax_12 = sub_142367150(*(arg1 + 8), rdx_5)
                while (rdi_3 u>= rax_12)
            
            rax_4 = zx.q(divu.dp.d(0:rdi_3, rbp_4))
            *(arg1 + 0xb8) = rdi_3 - modu.dp.d(0:rdi_3, rbp_4)
            *(arg1 + 0x13c) |= 1
else
    if (*(arg1 + 0xa4) != 1)
        if (rcx_1 u< r8_1)
            r8_1 = rcx_1
        
        int32_t rcx_2 = *(arg1 + 0xc8)
        rax_4 = zx.q(divu.dp.d(0:r8_1, rcx_2))
        *(arg1 + 0x134) = rax_4.d
        *(arg1 + 0xc0) = rax_4.d * rcx_2
    else
        if (rcx_1 u< r8_1)
            r8_1 = rcx_1
        
        *(arg1 + 0xc0) = r8_1
    
    *(arg1 + 0x13c) |= 1

return rax_4
