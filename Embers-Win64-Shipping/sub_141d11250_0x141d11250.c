// 函数: sub_141d11250
// 地址: 0x141d11250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result

if (arg1[0x2a].b != 0 || arg1[0x25] != 0)
    result.b = 1
    return result

arg1[0x2a].b = 1

if (*(arg1 + 0xcd) != 0)
label_141d1186a:
    result.b = 0
else
    int32_t r13_1 = 0
    int32_t i = 0
    int32_t i_3 = 0
    
    if (arg1[0x26].d s> 0)
        int32_t r9_1 = *(arg1 + 0xa4)
        int64_t rbp_1 = 0
        char* rcx_1 = *arg1 + 0x10
        int64_t var_88_1 = 0
        char* var_58_1 = rcx_1
        void* rax = *rcx_1
        char r8_1 = *rcx_1 & 1
        char arg_10 = r8_1
        void* var_60_1 = rax
        
        do
            if (r8_1 != 0)
                rax = &rcx_1[rax s>> 1]
            
            void* r8_2 = rax + rbp_1
            void* rcx_2 = *r8_2
            char r15_1 = *(rax + rbp_1 + 0x48) & 1
            void* r14_1 = *(r8_2 + 8)
            int64_t rax_2 = 0x30
            int64_t r10_1 = *(r8_2 + 0x10)
            void* var_68_1 = rcx_2
            int64_t arg_8
            arg_8.b = r15_1
            
            if (r9_1 s>= 3)
                rax_2 = 0x35
                
                if (*(r8_2 + 0x44) != 0)
                    rax_2 = (sx.q(*(r8_2 + 0x38)) << 4) + 0x39
            
            int64_t rdi_1 = rax_2 + 8
            
            if (r9_1 s>= 2)
                rdi_1 = rax_2
            
            result = zx.q(*(r8_2 + 0x44))
            
            if (result.d u>= 0x40)
                goto label_141d1186a
            
            int64_t rsi_1 = sx.q(*(r8_2 + 0x38))
            
            if (rsi_1.d s>= 0x10000)
                goto label_141d1186a
            
            if (result.d != 0)
                uint64_t rax_5 = zx.q(*(r8_2 + 0x40))
                
                if (rax_5 != r10_1 && (rax_5.d & 0xfffff800) u> 0x1f800)
                    goto label_141d1186a
                
                if (rsi_1.d s> 0)
                    void* rdx_1 = nullptr
                    
                    if (r9_1 s< 5)
                        rdx_1 = rcx_2
                    
                    void* rcx_3 = *(r8_2 + 0x30)
                    
                    if ((rcx_3.b & 1) != 0)
                        rcx_3 = (rcx_3 s>> 1) + r8_2 + 0x30
                    
                    if (rdx_1 + rdi_1 != *rcx_3)
                        goto label_141d1186a
                    
                    rcx_2 = *r8_2
                
                bool cond:13_1 = rsi_1.d s<= 1
                
                if (rsi_1.d == 1)
                    void* r9_2 = *(r8_2 + 0x30)
                    void* const r11_1 = rcx_2
                    
                    if (r9_1 s>= 5)
                        r11_1 = nullptr
                    
                    char r10_2 = *(r8_2 + 0x30) & rsi_1.b
                    void* rax_8
                    int64_t rdx_3
                    void* rbx_2
                    
                    if (r10_2 == 0)
                        rax_8 = r9_2
                        rdx_3 = r9_2 s>> 1
                        rbx_2 = r9_2
                    else
                        rdx_3 = r9_2 s>> 1
                        rax_8 = r8_2 + 0x30 + rdx_3
                        rbx_2 = r8_2 + 0x30 + rdx_3
                    
                    int64_t rcx_5 = 1
                    
                    if (r15_1 != 0)
                        rcx_5 = 0x10
                    
                    if (r10_2 != 0)
                        r9_2 = r8_2 + 0x30 + rdx_3
                    
                    if (r14_1 + r11_1 + rdi_1
                            != ((*(rax_8 + 8) - *rbx_2 - 1 + rcx_5) & not.q(rcx_5 - 1)) + *r9_2)
                        goto label_141d1186a
                    
                    cond:13_1 = rsi_1.d s<= 1
                
                if (not(cond:13_1))
                    int64_t rbx_6 = 1
                    
                    if (1 s< rsi_1)
                        void* r11_2 = *(r8_2 + 0x30)
                        char rdi_2 = *(r8_2 + 0x30) & 1
                        int64_t r14_2 = 1
                        int64_t r10_3 = 0x10
                        
                        if (r15_1 != 0)
                            r14_2 = 0x10
                        
                        int64_t rdx_7 = r11_2 s>> 1
                        
                        do
                            void* rax_14
                            void* rcx_8
                            
                            if (rdi_2 == 0)
                                rax_14 = r11_2
                                rcx_8 = r11_2
                            else
                                rdx_7 = r11_2 s>> 1
                                rax_14 = r8_2 + 0x30 + rdx_7
                                rcx_8 = r8_2 + 0x30 + rdx_7
                            
                            void* r9_5
                            
                            if (rdi_2 == 0)
                                r9_5 = r11_2
                                rdx_7 = r11_2 s>> 1
                            else
                                r9_5 = r8_2 + 0x30 + rdx_7
                            
                            if (*(r9_5 + r10_3) != ((r14_2 - 1 + *(rax_14 + r10_3 - 8)
                                    - *(rcx_8 + r10_3 - 0x10)) & not.q(r14_2 - 1))
                                    + *(r9_5 + r10_3 - 0x10))
                                goto label_141d1186a
                            
                            rbx_6 += 1
                            r10_3 += 0x10
                        while (rbx_6 s< rsi_1)
                        
                        r15_1 = arg_8.b
                    
                    rbp_1 = var_88_1
                
                i = i_3
            
            int32_t rcx_13 = 8
            int32_t rax_17 = 0xc
            
            if (r10_1 s<= 0xffffffff)
                rcx_13 = 4
            
            if (var_68_1 s<= 0xffffffff)
                rax_17 = 8
            
            r13_1 = r13_1 + rax_17 + rcx_13
            
            if (result.d != 0)
                int32_t rax_18 = 8
                
                if (r14_1 s<= 0xffffffff)
                    rax_18 = 4
                
                r13_1 += rax_18
                
                if (rsi_1.d s> 1)
                    r13_1 += (rsi_1 << 2).d
                else if (rsi_1.d == 1 && r15_1 != 0)
                    r13_1 += (rsi_1 << 2).d
            
            r9_1 = *(arg1 + 0xa4)
            i += 1
            rax = var_60_1
            rbp_1 += 0x50
            rcx_1 = var_58_1
            r8_1 = arg_10
            i_3 = i
            var_88_1 = rbp_1
        while (i s< arg1[0x26].d)
    
    int64_t rbp_2 = sx.q(r13_1)
    int64_t rax_19 = j_sub_140a82f30(rbp_2)
    int64_t rcx_15 = sx.q(arg1[0x26].d)
    arg1[0x25] = rax_19
    int64_t rax_20 = 4 * rcx_15
    
    if (mulu.dp.q(4, rcx_15) u>> 0x40 != zx.o(0))
        rax_20 = -1
    
    result = j_sub_140a82f30(rax_20)
    bool cond:2_1 = arg1[0x26].d s<= 0
    int32_t i_1 = 0
    int32_t* r8_3 = arg1[0x25]
    arg1[0x24] = result
    
    if (not(cond:2_1))
        int32_t* r11_3 = nullptr
        int64_t rsi_2 = 0
        
        do
            int64_t* rcx_18 = *arg1 + 0x10
            void* rax_21 = *rcx_18
            
            if ((rax_21.b & 1) != 0)
                rax_21 = (rax_21 s>> 1) + rcx_18
            
            void* r9_6 = rax_21 + rsi_2
            *(r11_3 + arg1[0x24]) = r8_3.d - arg1[0x25].d
            char rax_24 = *(r9_6 + 0x48)
            
            if ((rax_24 & 2) != 0)
                *(r11_3 + arg1[0x24]) = 0xffffffff
                rax_24 = *(r9_6 + 0x48)
            
            int64_t rdx_10 = *r9_6
            int64_t r10_4 = *(r9_6 + 0x10)
            int64_t rbx_7 = *(r9_6 + 8)
            int32_t rax_28 = 0
            
            if (r10_4 s<= 0xffffffff)
                rax_28 = 0x40000000
            
            int32_t rax_29 = 0
            
            if (rbx_7 s<= 0xffffffff)
                rax_29 = 0x20000000
            
            int32_t rax_30 = 0
            
            if (rdx_10 s<= 0xffffffff)
                rax_30 = -0x80000000
            
            *r8_3 = ((zx.d(rax_24) & 1) | (*(r9_6 + 0x44) * 2)) << 0x16 | rax_28 | rax_29 | rax_30
                | *(r9_6 + 0x40) u>> 0xb | *(r9_6 + 0x38) << 6
            void* const rax_36
            
            if (rdx_10 s> 0xffffffff)
                rax_36 = 8
                *(r8_3 + 4) = *r9_6
            else
                r8_3[1] = *r9_6
                rax_36 = 4
            
            void* rcx_31 = rax_36 + 4 + r8_3
            
            if (r10_4 s> 0xffffffff)
                result = 8
                *rcx_31 = *(r9_6 + 0x10)
            else
                *rcx_31 = *(r9_6 + 0x10)
                result = 4
            
            r8_3 = rcx_31 + result
            
            if (*(r9_6 + 0x44) != 0)
                int64_t rax_39
                
                if (rbx_7 s> 0xffffffff)
                    rax_39 = 8
                    *r8_3 = *(r9_6 + 8)
                else
                    *r8_3 = *(r9_6 + 8)
                    rax_39 = 4
                
                int32_t rcx_32 = *(r9_6 + 0x38)
                r8_3 += rax_39
                
                if (rcx_32 s> 1)
                label_141d1177d:
                    int32_t j = 0
                    
                    if (rcx_32 s> 0)
                        int64_t rdx_11 = 0
                        
                        do
                            result = *(r9_6 + 0x30)
                            void* result_1
                            
                            if ((result.b & 1) == 0)
                                result_1 = result
                            else
                                int64_t rax_40 = result s>> 1
                                result_1 = r9_6 + 0x30 + rax_40
                                result = rax_40 + 0x30 + r9_6
                            
                            j += 1
                            int32_t rcx_35 = *(result_1 + rdx_11 + 8) - *(result + rdx_11)
                            rdx_11 += 0x10
                            *r8_3 = rcx_35
                            r8_3 = &r8_3[1]
                        while (j s< *(r9_6 + 0x38))
                else if (rcx_32 == 1 && (*(r9_6 + 0x48) & 1) != 0)
                    goto label_141d1177d
            
            i_1 += 1
            rsi_2 += 0x50
            r11_3 = &r11_3[1]
        while (i_1 s< arg1[0x26].d)
    
    int64_t* rdi_4 = *arg1 + 0x10
    void* rbx_8 = *rdi_4
    
    if ((rbx_8.b & 1) != 0)
        rbx_8 = (rbx_8 s>> 1) + rdi_4
    
    int32_t i_4 = rdi_4[1].d
    
    if (i_4 != 0)
        void* rbx_10 = rbx_8 + 0x30
        int32_t i_2
        
        do
            sub_140a1d5c0(rbx_10)
            rbx_10 += 0x50
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    rdi_4[1].d = 0
    
    if (*(rdi_4 + 0xc) != 0)
        sub_14119ada0(rdi_4, 0)
    
    data_143f36968 += rbp_2
    result.b = 1

return result
