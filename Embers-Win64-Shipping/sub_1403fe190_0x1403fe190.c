// 函数: sub_1403fe190
// 地址: 0x1403fe190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[4].d
int32_t r10 = *(arg1 + 0x24)
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(rdx)
int32_t r14 = 0x1f - temp0
uint32_t r9 = 0x7fffffff u>> r14.b
int32_t r8_1 = (r10 + r9) & not.d(r9)

if ((r8_1 | r9) u>= r10 + rdx)
    uint32_t r9_1 = r9 u>> 1
    r14 += 1
    r8_1 = (r10 + r9_1) & not.d(r9_1)

if (r14 s> 0)
    uint64_t i_2 = zx.q(((r14 - 1) u>> 3) + 1)
    r14 += neg.d(((r14 - 1) u>> 3) + 1) << 3
    uint64_t i
    
    do
        uint32_t r11_2 = r8_1 u>> 0x17
        
        if (r11_2 == 0xff)
            arg1[5].d += 1
        else
            char r9_4 = (r11_2 s>> 8).b
            
            if (*(arg1 + 0x2c) s>= 0)
                uint64_t r10_1 = zx.q(*(arg1 + 0x1c))
                int32_t rax_9
                
                if (*(arg1 + 0xc) + r10_1.d u< arg1[1].d)
                    *(r10_1 + *arg1) = r9_4 + *(arg1 + 0x2c)
                    *(arg1 + 0x1c) += 1
                    rax_9 = 0
                else
                    rax_9 = -1
                
                arg1[6].d |= rax_9
            
            if (arg1[5].d u> 0)
                do
                    uint64_t rdx_2 = zx.q(*(arg1 + 0x1c))
                    int32_t rax_12
                    
                    if (*(arg1 + 0xc) + rdx_2.d u< arg1[1].d)
                        *(rdx_2 + *arg1) = r9_4 - 1
                        *(arg1 + 0x1c) += 1
                        rax_12 = 0
                    else
                        rax_12 = -1
                    
                    arg1[6].d |= rax_12
                    arg1[5].d -= 1
                while (arg1[5].d != 1)
            
            *(arg1 + 0x2c) = zx.d(r11_2.b)
        
        r8_1 = (r8_1 & 0x7fffff) << 8
        i = i_2
        i_2 -= 1
    while (i != 1)

uint64_t result = zx.q(*(arg1 + 0x2c))

if (result.d s>= 0)
label_1403fe2c7:
    uint64_t rdx_3 = zx.q(*(arg1 + 0x1c))
    
    if (*(arg1 + 0xc) + rdx_3.d u< arg1[1].d)
        *(rdx_3 + *arg1) = *(arg1 + 0x2c)
        *(arg1 + 0x1c) += 1
        result = 0
    else
        result = 0xffffffff
    
    arg1[6].d |= result.d
    goto label_1403fe2ef

if (arg1[5].d u> 0)
    if (result.d s>= 0)
        goto label_1403fe2c7
    
label_1403fe2ef:
    
    if (arg1[5].d u> 0)
        do
            uint64_t rdx_4 = zx.q(*(arg1 + 0x1c))
            
            if (*(arg1 + 0xc) + rdx_4.d u< arg1[1].d)
                *(rdx_4 + *arg1) = 0xff
                *(arg1 + 0x1c) += 1
                result = 0
            else
                result = 0xffffffff
            
            arg1[6].d |= result.d
            arg1[5].d -= 1
        while (arg1[5].d != 1)
    
    *(arg1 + 0x2c) = 0

int32_t rsi = *(arg1 + 0x14)
uint32_t rdi_1 = arg1[2].d

if (rsi s>= 8)
    uint64_t i_3 = zx.q(rsi) u>> 3
    rsi += neg.d(i_3.d) << 3
    uint64_t i_1
    
    do
        int32_t r9_6 = *(arg1 + 0xc)
        int32_t rdx_5 = arg1[1].d
        
        if (*(arg1 + 0x1c) + r9_6 u< rdx_5)
            *(arg1 + 0xc) = r9_6 + 1
            zx.q(rdx_5 - (r9_6 + 1))[*arg1] = rdi_1.b
            result = 0
        else
            result = 0xffffffff
        
        arg1[6].d |= result.d
        rdi_1 u>>= 8
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (arg1[6].d == 0)
    uint64_t rcx_13 = zx.q(*(arg1 + 0x1c))
    result = memset(rcx_13 + *arg1, 0, zx.q(arg1[1].d - rcx_13.d - *(arg1 + 0xc)))
    
    if (rsi s> 0)
        int32_t r9_7 = *(arg1 + 0xc)
        int32_t r8_8 = arg1[1].d
        
        if (r9_7 u< r8_8)
            int32_t r14_1 = neg.d(r14)
            
            if (*(arg1 + 0x1c) + r9_7 u>= r8_8 && r14_1 s< rsi)
                arg1[6].d = 0xffffffff
                rdi_1 &= (1 << r14_1.b) - 1
            
            result = *arg1
            uint64_t r8_10 = zx.q(r8_8 - r9_7 - 1)
            *(r8_10 + result) |= rdi_1.b
        else
            arg1[6].d = 0xffffffff

return result
