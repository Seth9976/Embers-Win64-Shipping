// 函数: sub_142a82410
// 地址: 0x142a82410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int64_t rax = sx.q(arg3)
*(arg1 + 0x84) = 0
int64_t* r13 = arg1
int32_t* rdi = nullptr

if (arg3 != 0)
    int32_t* rax_2 = sub_142a7dd00(rax * 7)
    rdi = rax_2
    
    if (rax_2 != 0)
        void* r12_1 = &rax_2[rax]
        void* rsi_1 = r12_1 + (rax << 1)
        int32_t rbx_2 = r13[0x11].d
        
        if ((rbx_2.b & 1) != 0)
            r13[0x11].d = (rbx_2 & 0xfffffffe) | 2
        
        char r15 = arg4 & 1
        sub_142a82c20(r13, arg2, arg3, r15, nullptr, arg5)
        
        if (*arg5 s<= 0)
            memcpy(rsi_1, sub_142a83570(r13, arg5), *(r13 + 0x14))
            int32_t rax_7 = *(r13 + 0xc4)
            uint32_t count_1 = *(r13 + 0x14)
            int32_t rax_8 = r13[0x17].d
            int32_t rax_9 = sub_142af6af0(r13, r12_1, arg3, 2, arg5)
            sub_142a83a90(r13, rdi, arg5)
            
            if (*arg5 s<= 0)
                r13[0x11].d = rbx_2
                char rbx_3 = r13[0xd].b
                *(r13 + 0x84) = 5
                r13[0xd].b = 0
                sub_142a82c20(r13, r12_1, rax_9, r15 ^ 1, nullptr, arg5)
                r13[0xd].b = rbx_3
                sub_142a83690(r13)
                
                if (*arg5 s<= 0)
                    int64_t i_2 = sx.q(r13[0x25].d)
                    int32_t rax_10 = 0
                    int32_t* r12_2 = r13[0x26]
                    int64_t i_1 = i_2
                    int32_t* var_48_1 = r12_2
                    
                    if (i_2.d s<= 0)
                    label_142a826b7:
                        int32_t rax_22 = (i_2 - 1).d
                        int64_t r9_5 = sx.q(rax_22)
                        int64_t var_40_1 = r9_5
                        
                        if (rax_22 s>= 0)
                            int64_t r15_1 = sx.q(rbp)
                            int64_t temp3_1
                            
                            do
                                int32_t r8_9
                                
                                if (r9_5 != 0)
                                    r8_9 = r12_2[r9_5 * 3 + 1] - r12_2[r9_5 * 3 - 2]
                                else
                                    r8_9 = r12_2[1]
                                
                                int64_t rax_24 = r9_5 * 3
                                int32_t rdx_11 = r12_2[rax_24]
                                void* rbx_5 = &r12_2[rax_24]
                                uint64_t rdx_12 = zx.q(rdx_11) & 0x7fffffff
                                uint32_t r10_3 = rdx_11 u>> 0x1f
                                int32_t rdx_16
                                
                                if (r8_9 s>= 2)
                                    int32_t var_68_1
                                    int32_t r13_1
                                    int32_t r14_2
                                    
                                    if (r10_3 == 0)
                                        r13_1 = r8_9 - 1 + rdx_12.d
                                        var_68_1 = r13_1
                                        r14_2 = -1
                                    else
                                        r13_1 = rdx_12.d
                                        var_68_1 = rdx_12.d
                                        r14_2 = 1
                                        rdx_12 = zx.q(rdx_12.d - 1 + r8_9)
                                    
                                    int64_t r8_11 = sx.q(r13_1)
                                    int32_t r11_2 = r13_1
                                    int64_t rbp_1 = sx.q(rdx_12.d)
                                    
                                    if (r8_11 != rbp_1)
                                        int64_t rax_27 = r15_1 + r9_5
                                        int64_t rdx_18 = sx.q(r14_2)
                                        int64_t var_50_1 = r8_11
                                        void* r9_8 = &r12_2[rax_27 + ((rax_27 + 1) << 1)]
                                        int32_t r12_3 = var_68_1
                                        
                                        do
                                            int64_t r10_4 = sx.q(rdi[r8_11])
                                            r8_11 += rdx_18
                                            int64_t rcx_14 = sx.q(rdi[r8_11])
                                            int32_t temp4_1
                                            int32_t temp5_1
                                            temp4_1:temp5_1 = sx.q(r10_4.d - rcx_14.d)
                                            
                                            if ((temp5_1 ^ temp4_1) - temp4_1 != 1
                                                    || *(r10_4 + rsi_1) != *(rcx_14 + rsi_1))
                                                int64_t rax_34 = var_50_1
                                                var_50_1 = r8_11
                                                int32_t rax_35 = rdi[rax_34]
                                                
                                                if (rax_35 s< r10_4.d)
                                                    r10_4 = zx.q(rax_35)
                                                
                                                r15_1 -= 1
                                                *(r9_8 - 8) =
                                                    (zx.d(*(sx.q(r10_4.d) + rsi_1)) ^ r10_3) << 0x1f
                                                    | r10_4.d
                                                *(r9_8 - 4) = *(rbx_5 + 4)
                                                int32_t rax_39 = r11_2 - r12_3
                                                r12_3 = r14_2 + r11_2
                                                int32_t temp6_1
                                                int32_t temp7_1
                                                temp6_1:temp7_1 = sx.q(rax_39)
                                                int32_t rax_43 = *(rbx_5 + 8)
                                                *(rbx_5 + 4) +=
                                                    0xffffffff - ((temp7_1 ^ temp6_1) - temp6_1)
                                                int32_t rax_44 = rax_43 & 0xa
                                                *r9_8 = rax_44
                                                *(rbx_5 + 8) &= not.d(rax_44)
                                                r9_8 -= 0xc
                                            
                                            r11_2 += r14_2
                                            rdx_18 = sx.q(r14_2)
                                        while (r8_11 != rbp_1)
                                        
                                        r9_5 = var_40_1
                                        r13_1 = r12_3
                                        r12_2 = var_48_1
                                    
                                    if (r15_1 != 0)
                                        int64_t rcx_20 = (r15_1 + r9_5) * 3
                                        *(r12_2 + (rcx_20 << 2)) = *rbx_5
                                        r12_2[rcx_20 + 2] = *(rbx_5 + 8)
                                    
                                    int32_t r8_12 = rdi[rbp_1]
                                    int64_t rax_48 = sx.q(r13_1)
                                    
                                    if (rdi[rax_48] s< r8_12)
                                        r8_12 = rdi[rax_48]
                                    
                                    rdx_16 = (zx.d(*(sx.q(r8_12) + rsi_1)) ^ r10_3) << 0x1f | r8_12
                                else
                                    if (r15_1 != 0)
                                        int64_t rcx_12 = (r15_1 + r9_5) * 3
                                        *(r12_2 + (rcx_12 << 2)) = *rbx_5
                                        r12_2[rcx_12 + 2] = *(rbx_5 + 8)
                                    
                                    int64_t rcx_13 = sx.q(rdi[rdx_12])
                                    rdx_16 = (zx.d(*(rcx_13 + rsi_1)) ^ r10_3) << 0x1f | rcx_13.d
                                
                                int64_t rax_50 = r15_1 + r9_5
                                temp3_1 = r9_5
                                r9_5 -= 1
                                var_40_1 = r9_5
                                r12_2[rax_50 * 3] = rdx_16
                            while (temp3_1 - 1 s>= 0)
                            r13 = arg1
                    else
                        int32_t* r11_1 = r12_2
                        int64_t i
                        
                        do
                            int32_t rbx_4 = r11_1[1]
                            int32_t r8_6 = rbx_4 - rax_10
                            
                            if (r8_6 s>= 2)
                                int32_t rdx_8 = *r11_1 & 0x7fffffff
                                
                                for (int64_t j = sx.q(rdx_8 + 1); j s< sx.q(rdx_8 + r8_6); j += 1)
                                    char* r8_7 = sx.q(rdi[j])
                                    char* r9_2 = sx.q(rdi[j - 1])
                                    int32_t temp1_1
                                    int32_t temp2_1
                                    temp1_1:temp2_1 = sx.q(r8_7.d - r9_2.d)
                                    
                                    if ((temp2_1 ^ temp1_1) - temp1_1 != 1
                                            || *(r8_7 + rsi_1) != *(r9_2 + rsi_1))
                                        rbp += 1
                            
                            r11_1 = &r11_1[3]
                            rax_10 = rbx_4
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        
                        if (rbp == 0)
                            goto label_142a826b7
                        
                        if (sub_142a82af0(&r13[0xb], r13 + 0x2c, *(r13 + 0x69), (i_2.d + rbp) * 0xc)
                                != 0)
                            if (i_2.d == 1)
                                int64_t* rcx_10 = r13[0xb]
                                *rcx_10 = *r12_2
                                rcx_10[1].d = r12_2[2]
                            
                            r12_2 = r13[0xb]
                            r13[0x25].d += rbp
                            var_48_1 = r12_2
                            r13[0x26] = r12_2
                            goto label_142a826b7
                
                *(r13 + 0x8d) ^= 1
            
            uint32_t count = count_1
            bool cond:0_1 = count s> r13[4].d
            *(r13 + 0x14) = count
            
            if (cond:0_1)
                count = r13[4].d
            
            r13[1] = arg2
            r13[2].d = arg3
            r13[0x17].d = rax_8
            memcpy(r13[0xf], rsi_1, count)
            bool cond:1_1 = r13[0x25].d s> 1
            *(r13 + 0xc4) = rax_7
            int32_t rax_55 = r13[0x17].d
            
            if (cond:1_1)
                rax_55 = 2
            
            r13[0x17].d = rax_55
    else
        *arg5 = 7
else
    sub_142a82c20(arg1, arg2, arg3, arg4, nullptr, arg5)

int64_t result = sub_142a7dcd0(rdi)
*(r13 + 0x84) = 3
return result
