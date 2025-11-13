// 函数: sub_142972c90
// 地址: 0x142972c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa8)
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rsi = 0
sub_1428d8e50(arg4)
int64_t* var_a0 = sub_1428d8ba0(arg4)
int64_t* var_b8 = sub_1428d8ba0(arg4)
int64_t* rax_4 = sub_1428d8ba0(arg4)
int64_t* var_88 = rax_4
int64_t* rax_5 = sub_1428d8ba0(arg4)
int64_t* var_a8 = rax_5

if (rax_5 != 0)
    void var_70
    int32_t rax_6 = sub_142974080(arg3, &var_70, 6)
    
    if (rax_6 == 0 || rax_6 s> 6)
        sub_1428a5670(3, 0x83, 0x6a, "crypto\bn\bn_gf2m.c", 0x18e)
    else if (sub_142972740(rax_4, arg2, &var_70) != 0 && sub_142890300(rax_4) == 0
            && sub_142890040(rax_5, arg3) != 0)
        int32_t i_5 = sub_142890560(rax_4)
        int32_t i_10 = sub_142890560(rax_5)
        int64_t r13_1 = sx.q(arg3[1].d)
        int32_t i_9 = i_10
        int32_t i_8 = i_10
        
        if (sub_142890e60(rax_4, r13_1.d) != 0)
            int64_t rax_12 = sx.q(rax_4[1].d)
            int64_t* rbx_2 = *rax_4
            
            if (rax_12 s< r13_1)
                __builtin_memset(&rbx_2[rax_12], 0, (r13_1 - rax_12) << 3)
            
            rax_4[1].d = r13_1.d
            
            if (sub_142890e60(var_a0, r13_1.d) != 0)
                int64_t* r14_1 = *var_a0
                *r14_1 = 1
                
                if (r13_1.d s> 1)
                    __builtin_memset(&r14_1[1], 0, sx.q((r13_1 - 1).d) << 3)
                
                var_a0[1].d = r13_1.d
                
                if (sub_142890e60(var_b8, r13_1.d) != 0)
                    int64_t* r8_1 = var_b8
                    int64_t* r10_1 = *r8_1
                    int64_t* var_98_1 = r10_1
                    
                    if (r13_1.d s> 0)
                        __builtin_memset(r10_1, 0, r13_1 << 3)
                    
                    int64_t* rdx_7 = var_a8
                    r8_1[1].d = r13_1.d
                    int64_t* r11_1 = *rdx_7
                    int64_t* var_90_1 = r11_1
                    
                    while (true)
                        if (i_5 != 0)
                            int32_t i
                            
                            do
                                int64_t rdi_4 = *rbx_2
                                
                                if ((rdi_4.b & 1) != 0)
                                    break
                                
                                int64_t rax_16 = *r14_1
                                int64_t j_3 = 0
                                int64_t r9_2 = neg.q(zx.q(rax_16.d) & 1)
                                int32_t j_2 = (r13_1 - 1).d
                                int64_t j_1 = sx.q(j_2)
                                int64_t rax_17 = rax_16 ^ (**arg3 & r9_2)
                                
                                if (j_2 s> 0)
                                    void* r8_2 = &r14_1[1]
                                    void* r11_3 = rbx_2 - r14_1
                                    j_3 = j_1
                                    int64_t j
                                    
                                    do
                                        void* rdx_10 = -8 - r14_1 + r8_2
                                        int64_t rcx_20 = *(r11_3 + r8_2) << 0x3f
                                        r8_2 += 8
                                        int64_t rcx_21 = rcx_20 | rdi_4 u>> 1
                                        rdi_4 = *(r11_3 + r8_2 - 8)
                                        *(r11_3 + r8_2 - 0x10) = rcx_21
                                        int64_t rdx_13 =
                                            (*(rdx_10 + *arg3 + 8) & r9_2) ^ *(r8_2 - 8)
                                        int64_t rcx_25 = rdx_13 << 0x3f | rax_17 u>> 1
                                        rax_17 = rdx_13
                                        *(r8_2 - 0x10) = rcx_25
                                        j = j_1
                                        j_1 -= 1
                                    while (j != 1)
                                    rsi = 0
                                
                                rbx_2[j_3] = rdi_4 u>> 1
                                r14_1[j_3] = rax_17 u>> 1
                                i = i_5
                                i_5 -= 1
                            while (i != 1)
                            r10_1 = var_98_1
                            r11_1 = var_90_1
                            i_8 = i_9
                            rdx_7 = var_a8
                            r8_1 = var_b8
                        
                        if (i_5 s<= 0x40)
                            int64_t rax_20 = *rbx_2
                            
                            if (rax_20 == 0)
                                break
                            
                            if (rax_20 == 1)
                                sub_142890ce0(var_a0)
                                
                                if (sub_142890040(arg1, var_a0) != 0)
                                    rsi = 1
                                
                                break
                        
                        if (i_5 s< i_8)
                            int64_t* rcx_26 = var_88
                            int32_t i_7 = i_5
                            int64_t* rdi_7 = var_a0
                            rbx_2 = r11_1
                            r14_1 = r10_1
                            i_9 = i_7
                            i_5 = i_8
                            var_88 = rdx_7
                            r11_1 = *rcx_26
                            i_8 = i_7
                            r10_1 = *rdi_7
                            var_90_1 = r11_1
                            var_98_1 = r10_1
                            var_a8 = rcx_26
                            var_a0 = r8_1
                            var_b8 = rdi_7
                        
                        int64_t i_1 = 0
                        
                        if (r13_1.d s> 0 && r13_1.d u>= 2)
                            int64_t rcx_27 = sx.q((r13_1 - 1).d)
                            void* r9_3 = &r10_1[rcx_27]
                            void* rax_22 = &r14_1[rcx_27]
                            
                            if (r14_1 u> r9_3 || rax_22 u< r10_1)
                                void* rdx_14 = &rbx_2[rcx_27]
                                
                                if (r14_1 u> rdx_14 || rax_22 u< rbx_2)
                                    void* r8_3 = &r11_1[rcx_27]
                                    
                                    if ((r14_1 u> r8_3 || rax_22 u< r11_1)
                                            && (rbx_2 u> r9_3 || rdx_14 u< r10_1)
                                            && (rbx_2 u> r8_3 || rdx_14 u< r11_1))
                                        int32_t rcx_29 = r13_1.d & 0x80000001
                                        
                                        if (rcx_29 s< 0)
                                            rcx_29 = ((rcx_29 - 1) | 0xfffffffe) + 1
                                        
                                        void* r8_5 = r14_1 - rbx_2
                                        int64_t* rax_25 = rbx_2
                                        
                                        do
                                            int128_t zmm0_1 = *rax_25
                                            i_1 += 2
                                            int128_t zmm1_1 = *(r11_1 - rbx_2 + rax_25)
                                            rax_25 = &rax_25[2]
                                            zmm1_1 ^= zmm0_1
                                            zmm0_1 = *(r8_5 + rax_25 - 0x10)
                                            *(rax_25 - 0x10) = zmm1_1
                                            *(r8_5 + rax_25 - 0x10) =
                                                *(r10_1 - rbx_2 + rax_25 - 0x10) ^ zmm0_1
                                        while (i_1 s< sx.q(r13_1.d - rcx_29))
                        
                        if (i_1 s< r13_1)
                            int64_t* rcx_34 = &rbx_2[i_1]
                            void* r10_3 = r14_1 - rbx_2
                            int64_t i_4 = r13_1 - i_1
                            int64_t i_2
                            
                            do
                                *rcx_34 ^= *(rcx_34 + r11_1 - rbx_2)
                                *(rcx_34 + r10_3) ^= *(rcx_34 + r10_1 - rbx_2)
                                rcx_34 = &rcx_34[1]
                                i_2 = i_4
                                i_4 -= 1
                            while (i_2 != 1)
                        
                        r10_1 = var_98_1
                        rdx_7 = var_a8
                        r8_1 = var_b8
                        
                        if (i_5 == i_8)
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(i_5 - 1)
                            int64_t i_6 = sx.q((temp3_1 + (temp2_1 & 0x3f)) s>> 6)
                            int64_t i_3 = i_6
                            int64_t rcx_35 = rbx_2[i_6]
                            
                            if (rcx_35 == 0)
                                while (i_3 != 0)
                                    rcx_35 = rbx_2[i_3 - 1]
                                    i_3 -= 1
                                    i_6 = zx.q(i_6.d - 1)
                                    
                                    if (rcx_35 != 0)
                                        break
                            
                            r10_1 = var_98_1
                            r11_1 = var_90_1
                            rdx_7 = var_a8
                            r8_1 = var_b8
                            i_5 = (i_6.d << 6) + sub_142890660(rcx_35)

sub_1428d8a60(arg4)
__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(rsi)
