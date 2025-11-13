// 函数: sub_141dd3100
// 地址: 0x141dd3100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi = arg2
int32_t r15 = arg4

if (*(arg1 + 0xc0) u>= *(arg1 + 0xc4) && arg3 == 0)
    memset(rsi, 0, zx.q(r15))
    int64_t rax_1
    rax_1.b = 1
    return rax_1

int32_t r12_1 = *(arg1 + 0xa0) * 2
sub_141dd2d90(arg1)
uint32_t rax_2
rax_2.b = 0
char arg_8 = 0

if (*(arg1 + 0xa4) != 2)
    int32_t r13_1 = 0
    
    if (r15 != 0)
        int32_t r14_1 = *(arg1 + 0xc4)
        int32_t rcx_13 = *(arg1 + 0xc0)
        
        while (true)
            uint32_t r14_2 = r14_1 - rcx_13
            uint32_t temp0_2 = divu.dp.d(0:r15, r12_1)
            
            if (temp0_2 u<= r14_2)
                r14_2 = temp0_2
            
            uint32_t count = r14_2 * r12_1
            memcpy(&rsi[zx.q(r13_1)], zx.q(rcx_13 * r12_1) + *(arg1 + 0x58), count)
            r15 -= count
            rcx_13 = *(arg1 + 0xc0) + r14_2
            rax_2 = *(arg1 + 0xa0) * r14_2
            r14_1 = *(arg1 + 0xc4)
            *(arg1 + 0xc0) = rcx_13
            r13_1 += rax_2
            
            if (rcx_13 u< r14_1)
                rax_2 = zx.d(arg_8)
            else
                rcx_13 = 0
                *(arg1 + 0xc0) = 0
                rax_2.b = 1
                arg_8 = 1
                
                if (arg3 == 0)
                    break
            
            if (r15 == 0)
                return rax_2
        
        memset(rsi, 0, zx.q(r15))
        rax_2.b = 1
else if (r15 != 0)
    uint32_t r8_1 = *(arg1 + 0xb0)
    int32_t rcx_1 = *(arg1 + 0xa0)
    
    while (true)
        int32_t r9 = *(arg1 + 0x8c)
        int32_t r10_1 = rcx_1
        
        if (r8_1 u>= r9 u>> 1)
            int32_t i = 0
            
            if (rcx_1 s> 0)
                do
                    int32_t rdx = *(arg1 + 0x90)
                    sub_141e58b50(
                        zx.q((i * *(arg1 + 0x138) + *(arg1 + 0x134)) * rdx) + *(arg1 + 0x58), rdx, 
                        zx.q(*(arg1 + 0x8c) * i) + *(arg1 + 0xa8))
                    i += 1
                while (i s< *(arg1 + 0xa0))
                
                r9 = *(arg1 + 0x8c)
            
            *(arg1 + 0x134) += 1
            r8_1 = 0
            r10_1 = *(arg1 + 0xa0)
            *(arg1 + 0xb0) = 0
        
        int32_t rdi_1 = *(arg1 + 0xc4)
        uint32_t rax_6 = divu.dp.q(0:(zx.q(r15)), sx.q(r10_1) * 2)
        int32_t rdx_2 = *(arg1 + 0xc0)
        rcx_1 = r10_1
        uint32_t r9_2 = (r9 u>> 1) - r8_1
        
        if (r9_2 u<= rax_6)
            rax_6 = r9_2
        
        uint32_t r11_2 = rdi_1 - rdx_2
        int32_t r9_3 = 0
        
        if (rax_6 u<= r11_2)
            r11_2 = rax_6
        
        if (r11_2 != 0)
            do
                int32_t r8_5 = 0
                
                if (r10_1 s<= 0)
                    rcx_1 = *(arg1 + 0xa0)
                else
                    do
                        uint64_t rax_8 = zx.q(*(arg1 + 0x8c) * r8_5)
                        r8_5 += 1
                        *rsi = *(rax_8 + (zx.q(*(arg1 + 0xb0) + r9_3) << 1) + *(arg1 + 0xa8))
                        rsi = &rsi[1]
                        rcx_1 = *(arg1 + 0xa0)
                    while (r8_5 s< rcx_1)
                
                r9_3 += 1
                r10_1 = rcx_1
            while (r9_3 u< r11_2)
            
            r8_1 = *(arg1 + 0xb0)
            rdx_2 = *(arg1 + 0xc0)
            rdi_1 = *(arg1 + 0xc4)
        
        r8_1 += r11_2
        *(arg1 + 0xb0) = r8_1
        r15 += r11_2 * rcx_1 * 0xfffffffe
        rax_2 = r11_2 + rdx_2
        *(arg1 + 0xc0) = rax_2
        
        if (rax_2 u< rdi_1)
            rax_2 = zx.d(arg_8)
        else
            rax_2.b = 1
            arg_8 = 1
            
            if (arg3 == 0)
                break
            
            r8_1 = *(arg1 + 0x8c) u>> 1
            *(arg1 + 0xb0) = r8_1
            *(arg1 + 0x134) = 0
            *(arg1 + 0xc0) = 0
        
        if (r15 == 0)
            return rax_2
    
    memset(rsi, 0, zx.q(r15))
    rax_2.b = 1

return rax_2
