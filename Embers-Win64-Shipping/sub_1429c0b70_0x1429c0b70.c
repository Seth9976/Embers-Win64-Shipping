// 函数: sub_1429c0b70
// 地址: 0x1429c0b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 2
int32_t r12 = arg2
int32_t var_90 = 2

if (arg2 s> arg4)
    r12 = arg4

int32_t r10 = 1
int32_t var_88 = r12
int32_t result = arg4
int32_t var_94 = 1
int32_t rdi = arg3
int32_t rbp = arg2
int16_t* i_3 = arg1

if (r12 s>= 2)
    int16_t rdx = arg6
    int32_t r9 = arg5
    
    do
        int16_t* i_1 = i_3
        int32_t r8_1 = rbx * rdi
        int16_t* i = i_3
        int32_t var_98_1 = r8_1
        void* rsi_1 = &i_3[sx.q((result - rbx) * r9)]
        void* var_60_1 = rsi_1
        int64_t r11_1 = sx.q(r10 * rdi)
        int64_t var_78_1 = r11_1
        
        if (i_3 u<= rsi_1)
            int64_t r9_1 = sx.q(r10 * r9)
            int64_t r10_2 = sx.q(rbx * r9) * 2
            int64_t var_70_1 = r9_1
            int64_t var_68_1 = r10_2
            int64_t rax_13 = sx.q((rbp - rbx) * rdi) * 2
            int64_t var_58_1 = rax_13
            
            do
                void* r13_1 = rax_13 + i
                int16_t* i_2 = i
                
                if (i u<= r13_1)
                    int16_t* rbx_1 = &i[r11_1]
                    int64_t r14_1 = (r9_1 - r11_1) * 2 + (r11_1 << 1)
                    
                    do
                        int16_t rsi_2 = *i_2
                        int32_t rax_19
                        int16_t rdx_3
                        int16_t* r15
                        
                        if (rdx u>= 0x4000)
                            uint32_t r8_5 = zx.d(rsi_2 - 0x8000)
                            uint32_t rax_21 = zx.d(*rbx_1)
                            uint16_t rdx_5 = ((rax_21 + r8_5) u>> 1).w
                            
                            if (r8_5 - rax_21 s< 0)
                                rdx_5 -= 0x8000
                            
                            r15 = r14_1 + rbx_1
                            uint32_t r10_4 = zx.d(rbx_1[r9_1 - r11_1] + 0x8000)
                            uint32_t rax_25 = zx.d(*r15)
                            uint32_t rcx_7 = (rax_25 + r10_4) u>> 1
                            
                            if (r10_4 - rax_25 s< 0)
                                rcx_7 = zx.d(rcx_7.w - 0x8000)
                            
                            uint32_t r9_3 = zx.d(rdx_5 - 0x8000)
                            uint16_t rdx_7 = ((r9_3 + rcx_7) u>> 1).w
                            
                            if (r9_3 - rcx_7 s< 0)
                                rdx_7 -= 0x8000
                            
                            *i_2 = rdx_7
                            uint32_t rcx_8 = zx.d(r10_4.w - rax_25.w)
                            rbx_1[r9_1 - r11_1] = r9_3.w - rcx_7.w
                            uint32_t rdx_8 = zx.d(r8_5.w - rax_21.w + 0x8000)
                            rax_19 = (rcx_8 + rdx_8) u>> 1
                            rdx_3 = rdx_8.w - rcx_8.w
                            
                            if (rdx_8 - rcx_8 s< 0)
                                rax_19 += 0x8000
                        else
                            int32_t r9_2 = sx.d(*(r14_1 + rbx_1))
                            r15 = r14_1 + rbx_1
                            int32_t r11_2 = sx.d(rbx_1[r9_1 - r11_1])
                            int32_t r10_3 = sx.d(*rbx_1)
                            int32_t r8_2 = sx.d(rsi_2)
                            rsi_2 -= r10_3.w
                            int16_t r8_4 = ((r8_2 + r10_3) s>> 1).w
                            int16_t rdx_2 = ((r11_2 + r9_2) s>> 1).w
                            r11_2.w -= r9_2.w
                            rdx_3 = rsi_2 - r11_2.w
                            *i_2 = ((sx.d(rdx_2) + sx.d(r8_4)) s>> 1).w
                            rbx_1[r9_1 - r11_1] = r8_4 - rdx_2
                            rax_19 = (sx.d(r11_2.w) + sx.d(rsi_2)) s>> 1
                        
                        *rbx_1 = rax_19.w
                        i_2 = &i_2[sx.q(r8_1)]
                        rbx_1 = &rbx_1[sx.q(r8_1)]
                        *r15 = rdx_3
                        rdx = arg6
                    while (i_2 u<= r13_1)
                    
                    i = i_1
                    r11_1 = var_78_1
                    r9_1 = var_70_1
                    r10_2 = var_68_1
                    rsi_1 = var_60_1
                
                if ((r10 & rbp) != 0)
                    int16_t r8_7 = *i_2
                    int16_t rdx_11
                    
                    if (rdx u>= 0x4000)
                        uint32_t rcx_10 = zx.d(r8_7 - 0x8000)
                        uint32_t rax_34 = zx.d(i_2[r9_1])
                        rdx_11 = ((rax_34 + rcx_10) u>> 1).w
                        
                        if (rcx_10 - rax_34 s< 0)
                            rdx_11 -= 0x8000
                        
                        i_2[r9_1] = rcx_10.w - rax_34.w
                    else
                        int32_t rcx_9 = sx.d(i_2[r9_1])
                        i_2[r9_1] = r8_7 - rcx_9.w
                        rdx_11 = ((sx.d(r8_7) + rcx_9) s>> 1).w
                    
                    *i_2 = rdx_11
                
                rdx = arg6
                i += r10_2
                r8_1 = var_98_1
                rax_13 = var_58_1
                i_1 = i
            while (i u<= rsi_1)
            
            rbx = var_90
            r10 = var_94
            rdi = arg3
            rbp = arg2
            i_3 = arg1
            r12 = var_88
        
        result = arg4
        
        if ((result & r10) != 0)
            while (i u<= &i[sx.q((rbp - rbx) * rdi)])
                int16_t r8_8 = *i
                int16_t rdx_15
                
                if (rdx u>= 0x4000)
                    uint32_t rcx_13 = zx.d(r8_8 - 0x8000)
                    uint32_t rax_42 = zx.d(i[r11_1])
                    rdx_15 = ((rax_42 + rcx_13) u>> 1).w
                    
                    if (rcx_13 - rax_42 s< 0)
                        rdx_15 -= 0x8000
                    
                    i[r11_1] = rcx_13.w - rax_42.w
                else
                    int32_t rcx_12 = sx.d(i[r11_1])
                    i[r11_1] = r8_8 - rcx_12.w
                    rdx_15 = ((sx.d(r8_8) + rcx_12) s>> 1).w
                
                *i = rdx_15
                i = &i[sx.q(r8_1)]
                rdx = arg6
            
            result = arg4
        
        rdx = arg6
        r10 = rbx
        r9 = arg5
        var_94 = rbx
        rbx *= 2
        var_90 = rbx
    while (rbx s<= r12)

return result
