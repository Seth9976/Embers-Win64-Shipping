// 函数: sub_142634770
// 地址: 0x142634770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg4
int32_t arg_8 = 0
void* rbp = arg4
int32_t i = arg1
int32_t r13 = 0

if (arg1 s> 0)
    int64_t rbx_1 = 0
    int32_t rcx = 1
    int32_t rdi_1
    
    do
        rbx_1 += 1
        rdi_1 = rcx + 1
        int32_t rax_1 = rdi_1
        int64_t rsi_1 = rbx_1
        
        if (rcx s>= i)
            rax_1 = 1
        
        if (rcx s>= i)
            rsi_1 = 0
        
        int32_t rdx = 0
        
        if (rax_1 s< i)
            rdx = rax_1
        
        if (sub_142623d60(rcx - 1, rdx, i, arg2, arg3) != 0)
            arg3[rsi_1] |= 0x8000
        
        rcx = rdi_1
    while (rdi_1 s<= i)
    rbp = arg_20

if (i s> 3)
    do
        int64_t rbx_2 = -1
        int64_t rsi_2 = 0
        int32_t r8_1 = -1
        int32_t r11_1 = -1
        int16_t* rbp_1
        
        if (i s> 0)
            int32_t rdi_2 = 1
            
            do
                int64_t rax_3 = rsi_2 + 1
                
                if (rdi_2 s>= i)
                    rax_3 = 0
                
                if (arg3[rax_3] s< 0)
                    int16_t* r10_1 = arg2 + ((zx.q(arg3[rsi_2]) & 0x7fff) << 3)
                    int32_t rax_6 = rdi_2 + 1
                    
                    if (rdi_2 s>= i)
                        rax_6 = 1
                    
                    int16_t* rcx_3
                    
                    if (rax_6 s>= i)
                        rcx_3 = arg3
                    else
                        rcx_3 = &arg3[rax_3 + 1]
                    
                    int64_t rax_8 = zx.q(*rcx_3) & 0x7fff
                    uint32_t rdx_2 = zx.d(*(arg2 + (rax_8 << 3))) - zx.d(*r10_1)
                    uint32_t rax_11 = zx.d(*(arg2 + (rax_8 << 3) + 4)) - zx.d(r10_1[2])
                    int32_t rax_13 = rax_11 * rax_11 + rdx_2 * rdx_2
                    
                    if (r8_1 s< 0 || rax_13 s< r8_1)
                        r8_1 = rax_13
                        r11_1 = rdi_2 - 1
                        rbx_2 = rsi_2
                
                rdi_2 += 1
                rsi_2 += 1
            while (rdi_2 s<= i)
            
            rbp_1 = arg_20
        
        if (i s<= 0 || r11_1 == 0xffffffff)
            return zx.q(neg.d(arg_8))
        
        int32_t i_6 = r11_1 + 1
        int64_t rdx_4 = rbx_2 + 1
        
        if (i_6 s>= i)
            rdx_4 = 0
        
        if (i_6 s>= i)
            i_6 = 0
        
        *rbp_1 = arg3[rbx_2] & 0x7fff
        int32_t rcx_6 = i_6 + 1
        rbp_1[1] = arg3[rdx_4] & 0x7fff
        
        if (rcx_6 s>= i)
            rcx_6 = 0
        
        arg_8 += 1
        i -= 1
        int64_t i_7 = sx.q(i_6)
        rbp_1[2] = arg3[sx.q(rcx_6)] & 0x7fff
        int64_t i_2 = sx.q(i)
        arg_20 = &rbp_1[3]
        
        if (i_7 s< i_2)
            void* rdi_3 = &arg3[i_7]
            __builtin_memcpy(rdi_3, rdi_3 + 2, (i_2 - i_7) << 1)
        
        int32_t i_5 = 0
        
        if (i_6 s< i)
            i_5 = i_6
        
        int32_t i_1 = i_5
        
        if (i_5 s<= 0)
            i_1 = i
        
        int64_t i_4 = sx.q(i_1)
        int16_t rdi_4 = arg3[i_4 - 1]
        int32_t i_3 = i_1 - 1
        
        if (i_1 - 1 s<= 0)
            i_3 = i
        
        int16_t rcx_10 = rdi_4 & 0x7fff
        rdi_4 |= 0x8000
        int32_t rdx_6 = i_5 + 1
        
        if (sub_142623d60(i_3 - 1, i_5, i, arg2, arg3) == 0)
            rdi_4 = rcx_10
        
        int64_t rax_18 = 0
        arg3[i_4 - 1] = rdi_4
        
        if (i_6 s< i)
            rax_18 = rdx_4
        
        int16_t rdi_5 = arg3[rax_18]
        
        if (rdx_6 s>= i)
            rdx_6 = 0
        
        int16_t rcx_12 = rdi_5 & 0x7fff
        rdi_5 |= 0x8000
        
        if (sub_142623d60(i_1 - 1, rdx_6, i, arg2, arg3) == 0)
            rdi_5 = rcx_12
        
        arg3[rax_18] = rdi_5
    while (i s> 3)
    
    rbp = arg_20
    r13 = arg_8

*rbp = *arg3 & 0x7fff
*(rbp + 2) = arg3[1] & 0x7fff
*(rbp + 4) = arg3[2] & 0x7fff
return zx.q(r13 + 1)
