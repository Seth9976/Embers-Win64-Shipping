// 函数: sub_142b0cbd0
// 地址: 0x142b0cbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s>= 0xffffffc0)
    if (arg1 s> 0x2910)
        if (arg1 s<= 0x2dd0b)
            int32_t r9_2 = (arg1 - 0x2911) s/ 0xf3
            int32_t rcx_4 = (arg1 - 0x2911) s% 0xf3
            int32_t rcx_5
            
            if (rcx_4 s< 0x14)
                rcx_5 = sx.d(*(sx.q(rcx_4) + &data_143669890))
            else
                rcx_5 = rcx_4 + 0xd
            
            int32_t r9_3 = r9_2 s% 0xf3
            int32_t r9_4
            
            if (r9_3 s< 0x14)
                r9_4 = sx.d(*(sx.q(r9_3) + &data_143669890))
            else
                r9_4 = r9_3 + 0xd
            
            return zx.q((r9_2 s/ 0xf3 + 0xfb) << 0x10) | zx.q((r9_4 | 0x30000) << 8) | zx.q(rcx_5)
        
        int32_t r10_2 = (arg1 - 0x2dd0c) s/ 0xf3
        int32_t rcx_7 = (arg1 - 0x2dd0c) s% 0xf3
        int32_t r9_7
        
        if (rcx_7 s< 0x14)
            r9_7 = sx.d(*(sx.q(rcx_7) + &data_143669890))
        else
            r9_7 = rcx_7 + 0xd
        
        int32_t rdx_13 = r10_2 s/ 0xf3
        int32_t r10_3 = r10_2 s% 0xf3
        int32_t r10_4
        
        if (r10_3 s< 0x14)
            r10_4 = sx.d(*(sx.q(r10_3) + &data_143669890))
        else
            r10_4 = r10_3 + 0xd
        
        int32_t r9_8 = r9_7 | r10_4 << 8
        
        if (rdx_13 s< 0x14)
            return zx.q((sx.d(*(sx.q(rdx_13) + &data_143669890)) | 0xfffffe00) << 0x10) | zx.q(r9_8)
        
        return zx.q(((rdx_13 + 0xd) | 0xfffffe00) << 0x10) | zx.q(r9_8)
    
    int32_t rcx_1 = (arg1 - 0x40) s% 0xf3
    int32_t rcx_2
    
    if (rcx_1 s< 0x14)
        rcx_2 = sx.d(*(sx.q(rcx_1) + &data_143669890))
    else
        rcx_2 = rcx_1 + 0xd
    
    return zx.q(((arg1 - 0x40) s/ 0xf3 + 0xd0) << 8) | zx.q(rcx_2) | 0x2000000

if (arg1 s>= 0xffffd6ef)
    int32_t rdx_17 = (arg1 + 0x40) s/ 0xf3
    int32_t rcx_10 = (arg1 + 0x40) s% 0xf3
    
    if ((arg1 + 0x40) s% 0xf3 s< 0)
        rdx_17 -= 1
        rcx_10 += 0xf3
    
    if (rcx_10 s< 0x14)
        return zx.q((rdx_17 + 0x50) << 8) | zx.q(sx.d(*(sx.q(rcx_10) + &data_143669890)))
            | 0x2000000
    
    return zx.q((rdx_17 + 0x50) << 8) | zx.q(rcx_10 + 0xd) | 0x2000000

if (arg1 s>= 0xfffd22f4)
    int32_t r9_11 = (arg1 + 0x2911) s/ 0xf3
    int32_t rcx_14 = (arg1 + 0x2911) s% 0xf3
    
    if ((arg1 + 0x2911) s% 0xf3 s< 0)
        r9_11 -= 1
        rcx_14 += 0xf3
    
    int32_t r10_6
    
    if (rcx_14 s< 0x14)
        r10_6 = sx.d(*(sx.q(rcx_14) + &data_143669890))
    else
        r10_6 = rcx_14 + 0xd
    
    int32_t rdx_22 = r9_11 s/ 0xf3
    int32_t r9_12 = r9_11 s% 0xf3
    
    if (r9_11 s% 0xf3 s< 0)
        rdx_22 -= 1
        r9_12 += 0xf3
    
    int32_t rax_55
    
    if (r9_12 s< 0x14)
        rax_55 = sx.d(*(sx.q(r9_12) + &data_143669890))
    else
        rax_55 = r9_12 + 0xd
    
    return zx.q((rax_55 | 0x30000) << 8) | zx.q((rdx_22 + 0x25) << 0x10) | zx.q(r10_6)

int32_t r9_15 = (arg1 + 0x2dd0c) s/ 0xf3
int32_t rcx_18 = (arg1 + 0x2dd0c) s% 0xf3

if ((arg1 + 0x2dd0c) s% 0xf3 s< 0)
    r9_15 -= 1
    rcx_18 += 0xf3

int32_t r10_7

if (rcx_18 s< 0x14)
    r10_7 = sx.d(*(sx.q(rcx_18) + &data_143669890))
else
    r10_7 = rcx_18 + 0xd

int32_t rdx_27 = r9_15 s/ 0xf3
int32_t r9_16 = r9_15 s% 0xf3

if (r9_15 s% 0xf3 s< 0)
    rdx_27 -= 1
    r9_16 += 0xf3

int32_t r9_17

if (r9_16 s< 0x14)
    r9_17 = sx.d(*(sx.q(r9_16) + &data_143669890))
else
    r9_17 = r9_16 + 0xd

int32_t r10_8 = r10_7 | r9_17 << 8

if (rdx_27 + 0xf3 s< 0x14)
    return zx.q((sx.d(*(sx.q(rdx_27 + 0xf3) + &data_143669890)) | 0x2100) << 0x10) | zx.q(r10_8)

return zx.q(((rdx_27 + 0x100) | 0x2100) << 0x10) | zx.q(r10_8)
