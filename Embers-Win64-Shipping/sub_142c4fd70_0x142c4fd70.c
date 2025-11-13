// 函数: sub_142c4fd70
// 地址: 0x142c4fd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t** result = arg1
int32_t* r15 = &arg2[(arg3 - arg2) s>> 3]
int64_t rax_5 = (arg3 - 4 - arg2) s>> 2

if (rax_5 s<= 0x28)
    sub_142c4fc50(arg2, r15, arg3 - 4, arg4)
else
    int64_t rax_7 = (rax_5 + 1) s>> 3
    int64_t rsi_1 = rax_7 << 2
    int32_t* rbp_1 = &arg2[rax_7]
    sub_142c4fc50(arg2, rbp_1, &arg2[rax_7 * 2], arg4)
    sub_142c4fc50(r15 - rsi_1, r15, &r15[rax_7], arg4)
    int32_t* rdi_1 = arg3 - 4 - rsi_1
    sub_142c4fc50(arg3 - 4 - (rax_7 << 3), rdi_1, arg3 - 4, arg4)
    sub_142c4fc50(rbp_1, r15, rdi_1, arg4)
    result = arg1

void* i_1 = &r15[1]

if (arg2 u< r15)
    int32_t* r10_1 = r15
    
    do
        int64_t rdx_5 = sx.q(r15[-1]) * 0x624
        int64_t rcx_6 = sx.q(*r15) * 0x624
        int64_t r8_7 = sx.q(*(rcx_6 + arg4 + 0x10c)) << 0x20 | sx.q(*(rcx_6 + arg4 + 0x108))
        int64_t rcx_9 = sx.q(*(rdx_5 + arg4 + 0x10c)) << 0x20 | sx.q(*(rdx_5 + arg4 + 0x108))
        
        if (rcx_9 u< r8_7)
            break
        
        if (rcx_9 u> r8_7)
            break
        
        r15 = &r10_1[-1]
        r10_1 = r15
    while (arg2 u< r15)

if (i_1 u< arg3)
    int64_t rcx_10 = sx.q(*r15) * 0x624
    int64_t r8_10 = sx.q(*(rcx_10 + arg4 + 0x10c)) << 0x20 | sx.q(*(rcx_10 + arg4 + 0x108))
    
    do
        int64_t rcx_11 = sx.q(*i_1) * 0x624
        int64_t rdx_8 = sx.q(*(rcx_11 + arg4 + 0x10c)) << 0x20 | sx.q(*(rcx_11 + arg4 + 0x108))
        
        if (rdx_8 u< r8_10)
            break
        
        if (rdx_8 u> r8_10)
            break
        
        i_1 += 4
    while (i_1 u< arg3)

void* i = i_1
int32_t* r10_2 = r15

while (true)
    for (; i u< arg3; i += 4)
        int64_t rdi_2 = sx.q(*i)
        int64_t rdx_9 = rdi_2 * 0x624
        int64_t r8_11 = sx.q(*r15) * 0x624
        int64_t r11_3 = sx.q(*(rdx_9 + arg4 + 0x10c)) << 0x20 | sx.q(*(rdx_9 + arg4 + 0x108))
        int64_t rdx_12 = sx.q(*(r8_11 + arg4 + 0x10c)) << 0x20 | sx.q(*(r8_11 + arg4 + 0x108))
        
        if (rdx_12 u>= r11_3)
            if (rdx_12 u> r11_3)
                break
            
            if (i_1 != i)
                int32_t rcx_15 = *i_1
                *i_1 = rdi_2.d
                *i = rcx_15
            
            i_1 += 4
    
    bool cond:2_1 = r10_2 != arg2
    
    if (r10_2 u> arg2)
        void* r11_4 = &r10_2[-1]
        
        do
            int64_t rsi_2 = sx.q(*r11_4)
            int64_t rdx_13 = sx.q(*r15) * 0x624
            int64_t r8_12 = rsi_2 * 0x624
            int64_t rdi_5 = sx.q(*(rdx_13 + arg4 + 0x10c)) << 0x20 | sx.q(*(rdx_13 + arg4 + 0x108))
            int64_t rdx_16 = sx.q(*(r8_12 + arg4 + 0x10c)) << 0x20 | sx.q(*(r8_12 + arg4 + 0x108))
            
            if (rdx_16 u>= rdi_5)
                if (rdx_16 u> rdi_5)
                    break
                
                r15 -= 4
                
                if (r15 != r11_4)
                    int32_t rcx_19 = *r15
                    *r15 = rsi_2.d
                    *r11_4 = rcx_19
            
            r10_2 -= 4
            r11_4 -= 4
        while (arg2 u< r10_2)
        
        cond:2_1 = r10_2 != arg2
    
    if (cond:2_1)
        r10_2 = &r10_2[-1]
        
        if (i != arg3)
            int32_t rdx_21 = *i
            *i = *r10_2
            i += 4
            *r10_2 = rdx_21
        else
            r15 -= 4
            
            if (r10_2 != r15)
                int32_t rdx_19 = *r10_2
                *r10_2 = *r15
                *r15 = rdx_19
            
            int32_t rcx_23 = *(i_1 - 4)
            i_1 -= 4
            int32_t rdx_20 = *r15
            *r15 = rcx_23
            *i_1 = rdx_20
    else
        if (i == arg3)
            break
        
        if (i_1 != i)
            int32_t rdx_17 = *r15
            *r15 = *i_1
            *i_1 = rdx_17
        
        int32_t rdx_18 = *r15
        i_1 += 4
        *r15 = *i
        r15 = &r15[1]
        *i = rdx_18
        i += 4

*result = r15
result[1] = i_1
return result
