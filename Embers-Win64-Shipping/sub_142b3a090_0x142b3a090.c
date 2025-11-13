// 函数: sub_142b3a090
// 地址: 0x142b3a090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
char r10 = arg2[2].b
void var_1e8
void* r15 = &var_1e8
void var_198
void* r14 = &var_198
int32_t* rbp = arg3
int32_t* var_218 = arg2
int32_t* r12 = arg2
int32_t* result = arg1
int32_t* var_250 = arg3
char rcx = rbp[2].b
void var_1c0
void* rbx = &var_1c0
int32_t var_254 = 0
char rax_2 = (r10 ^ rcx) & 0x80
void* var_228 = nullptr
void* var_238 = &var_1e8
char rdx = r10 | rcx
void* var_200 = nullptr
void* var_208 = nullptr
void* var_220 = &var_198

if ((rdx & 0x70) == 0)
    if (*r12 s< *rbp)
        int32_t* rax_4 = r12
        var_218 = rbp
        r12 = rbp
        var_250 = rax_4
        rbp = rax_4
    
    int64_t r9 = sx.q(*rbp)
    int32_t r10_6
    
    if (r9.d s<= 2)
        int64_t rcx_30 = sx.q(*r12)
        void var_f8
        r14 = &var_f8
        
        if (rcx_30.d s<= 0x31)
            rcx_30 = zx.q(*(rcx_30 + &data_14366c490))
        
        if (r9.d s<= 0x31)
            r9 = zx.q(*(r9 + &data_14366c490))
        
        int32_t rax_40 = (r9 + rcx_30).d
        
        if (rax_40 s<= 0x91)
            goto label_142b3a6a5
        
        void* rax_41 = sub_142a7dd00(sx.q(rax_40))
        var_228 = rax_41
        
        if (rax_41 != 0)
            r14 = rax_41
        label_142b3a6a5:
            *r14 = 0
            r10_6 = 1
            int64_t r15_5 = sx.q(*r12)
            int32_t rbx_1 = 0
            
            if (r15_5.d s<= 0x31)
                r15_5 = zx.q(*(r15_5 + &data_14366c490))
            
            int64_t rax_42 = sx.q(*rbp)
            
            if (rax_42.d s<= 0x31)
                rax_42 = zx.q(*(rax_42 + &data_14366c490))
            
            void* rsi_2 = rbp + 9
            void* rcx_33 = rbp + 9 + sx.q(rax_42.d)
            void* rbp_3 = rcx_33 - rsi_2
            
            if (rsi_2 u> rcx_33)
                rbp_3 = nullptr
            
            if (rbp_3 != 0)
                void* rdi_9 = rsi_2 - var_250 - 9
                
                do
                    char rdx_19 = *rsi_2
                    
                    if (rdx_19 == 0)
                        char* rax_46 = sx.q(r10_6)
                        r10_6 += 1
                        *(rax_46 + r14) = 0
                    else
                        char* rcx_35 = sx.q(rbx_1) + r14
                        r10_6 = rbx_1 + sub_142b3b1a0(rcx_35, r10_6 - rbx_1, r12 + 9, r15_5.d, 0, 
                            rcx_35, zx.d(rdx_19))
                    
                    rbx_1 += 1
                    rsi_2 += 1
                    rdi_9 += 1
                while (rdi_9 u< rbp_3)
                
                result = arg1
            
            rbp = var_250
        label_142b3a765:
            result[2].b = rax_2
            void* rcx_37 = sx.q(r10_6 - 1) + r14
            
            if (rcx_37 u>= r14)
                while (*rcx_37 == 0)
                    if (r10_6 == 1)
                        break
                    
                    r10_6 -= 1
                    rcx_37 -= 1
                    
                    if (rcx_37 u< r14)
                        break
            
            *result = r10_6
            int32_t rax_49 = r12[1]
            int32_t rdx_21 = rbp[1]
            int32_t rcx_38 = rax_49 + rdx_21
            
            if (rax_49 s< 0 && rdx_21 s< 0 && rcx_38 s> 0)
                rcx_38 = -0x773593fe
            
            result[1] = rcx_38
            sub_142b3a960(result, arg4, r14, r10_6, &var_254, arg5)
            sub_142b39f50(result, arg4, &var_254, arg5)
            goto label_142b3a7f8
        
        *arg5 |= 0x10
    else
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = muls.dp.d(0x38e38e39, *r12 + 8)
        int32_t r8_2 = temp0_1 s>> 1
        uint64_t r8_3 = zx.q(r8_2 + (r8_2 u>> 0x1f))
        uint64_t rdi_3 = zx.q((r9 + 8).d s/ 9)
        uint32_t rsi_1 = (rdi_3 + r8_3).d
        uint32_t r8_4 = (r8_3 << 2).d
        
        if (r8_4 s> 0x28)
            void* rax_7 = sub_142a7dd00(sx.q(r8_4))
            var_200 = rax_7
            r15 = rax_7
            var_238 = rax_7
        
        uint32_t rdi_4 = (rdi_3 << 2).d
        
        if (rdi_4 s> 0x28)
            void* rax_8 = sub_142a7dd00(sx.q(rdi_4))
            var_208 = rax_8
            rbx = rax_8
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rsi_1 + 7)
        int64_t rdi_5 = sx.q((temp5_1 + (temp4_1 & 7)) s>> 3)
        int32_t rcx_10 = (rdi_5.d + rsi_1) << 3
        
        if (rcx_10 s> 0xa0)
            void* rax_13 = sub_142a7dd00(sx.q(rcx_10))
            var_228 = rax_13
            r14 = rax_13
            var_220 = rax_13
        
        if (r15 != 0 && rbx != 0 && r14 != 0)
            int32_t i = *r12
            void* i_2 = r14 + (rdi_5 << 3)
            void* r8_5 = r12 + 9
            void* r9_1 = r15
            
            while (i s> 0)
                *r9_1 = 0
                int32_t* rcx_12 = &data_14366c468
                
                while (i s> 0)
                    i -= 1
                    int32_t rax_15 = zx.d(*r8_5) * *rcx_12
                    r8_5 += 1
                    rcx_12 = &rcx_12[1]
                    *r9_1 += rax_15
                    
                    if (rcx_12 s>= &data_14366c48c)
                        break
                
                r9_1 += 4
            
            int32_t i_1 = *rbp
            void* r8_6 = rbp + 9
            void* r9_2 = rbx
            
            while (i_1 s> 0)
                *r9_2 = 0
                int32_t* rcx_13 = &data_14366c468
                
                while (i_1 s> 0)
                    i_1 -= 1
                    int32_t rax_17 = zx.d(*r8_6) * *rcx_13
                    r8_6 += 1
                    rcx_13 = &rcx_13[1]
                    *r9_2 += rax_17
                    
                    if (rcx_13 s>= &data_14366c48c)
                        break
                
                r9_2 += 4
            
            int64_t rax_18 = sx.q(rsi_1)
            void* i_3 = i_2
            int64_t rdx_6 = 0
            void* r11_1 = i_2 + (rax_18 << 3)
            uint64_t rax_20 = ((rax_18 << 3) + 7) u>> 3
            
            if (i_2 u> r11_1)
                rax_20 = 0
            
            if (rax_20 != 0)
                do
                    rdx_6 += 1
                    *i_3 = 0
                    i_3 += 8
                while (rdx_6 u< rax_20)
            
            int32_t rdi_6 = 0x12
            void* rcx_14 = r9_2 - 4
            
            if (rbx u<= r9_2 - 4)
                void* rbp_1 = var_238
                int64_t r13_1 = neg.q(rbx)
                uint64_t r15_4 = (r9_1 - 4 - rbp_1 + 4) u>> 2
                
                do
                    uint64_t r10_2 = r15_4
                    int64_t r8_7 = 1
                    void* r9_4 = rbp_1
                    
                    if (rbp_1 u> r9_1 - 4)
                        r10_2 = 0
                    
                    void* rdx_7 = i_2 + ((rbx + r13_1) s>> 2 << 3)
                    
                    if (1 u<= r10_2)
                        do
                            uint64_t rax_23 = zx.q(*r9_4)
                            rdx_7 += 8
                            r9_4 += 4
                            r8_7 += 1
                            *(rdx_7 - 8) += zx.q(*rbx) * rax_23
                        while (r8_7 u<= r10_2)
                        
                        rcx_14 = r9_2 - 4
                    
                    rdi_6 -= 1
                    
                    if (rdi_6 s<= 0 || rbx == rcx_14)
                        rdi_6 = 0x12
                        void* i_4 = i_2
                        
                        if (i_2 u< r11_1)
                            do
                                int64_t r10_3 = *i_4
                                
                                if (r10_3 u>= 0x3b9aca00)
                                    uint64_t rcx_21 = r10_3 u/ 0x3b9aca00
                                    
                                    if (rcx_21 u>= 0x3b9aca00)
                                        uint32_t r8_12 = (rcx_21 u/ 0x3b9aca00).d
                                        uint64_t rax_26 = zx.q(r8_12)
                                        *(i_4 + 0x10) += rax_26
                                        *i_4 = r10_3 - rax_26 * 0xde0b6b3a7640000
                                        rcx_21 = zx.q(rcx_21.d - r8_12 * 0x3b9aca00)
                                    
                                    uint64_t rax_29 = zx.q(rcx_21.d)
                                    *(i_4 + 8) += rax_29
                                    *i_4 -= rax_29 * 0x3b9aca00
                                
                                i_4 += 8
                            while (i_4 u< r11_1)
                            
                            rcx_14 = r9_2 - 4
                            rbp_1 = var_238
                    
                    rbx += 4
                while (rbx u<= rcx_14)
                
                r14 = var_220
                r12 = var_218
                result = arg1
                rbp = var_250
            
            void* r10_5 = r14
            
            for (; i_2 u< r11_1; i_2 += 8)
                int32_t r8_13 = *i_2
                uint32_t r9_6 = r8_13 u/ 0xa
                r8_13.b -= r9_6.b * 0xa
                *r10_5 = r8_13.b
                uint32_t r8_15 = r9_6 u/ 0xa
                r9_6.b -= r8_15.b * 0xa
                *(r10_5 + 1) = r9_6.b
                uint32_t r9_8 = r8_15 u/ 0xa
                r8_15.b -= r9_8.b * 0xa
                *(r10_5 + 2) = r8_15.b
                uint32_t r8_17 = r9_8 u/ 0xa
                r9_8.b -= r8_17.b * 0xa
                *(r10_5 + 3) = r9_8.b
                uint32_t r9_10 = r8_17 u/ 0xa
                r8_17.b -= r9_10.b * 0xa
                *(r10_5 + 4) = r8_17.b
                uint32_t r8_19 = r9_10 u/ 0xa
                r9_10.b -= r8_19.b * 0xa
                *(r10_5 + 5) = r9_10.b
                uint32_t r9_12 = r8_19 u/ 0xa
                uint8_t rdx_18 = (r9_12 u/ 0xa).b
                r8_19.b -= r9_12.b * 0xa
                *(r10_5 + 6) = r8_19.b
                r9_12.b -= rdx_18 * 0xa
                *(r10_5 + 7) = r9_12.b
                *(r10_5 + 8) = rdx_18
                r10_5 += 9
            
            r10_6 = r10_5.d - r14.d
            goto label_142b3a765
        
        *arg5 |= 0x10
    label_142b3a7f8:
        
        if (var_228 != 0)
            sub_142a7dcd0(var_228)
        
        if (var_208 != 0)
            sub_142a7dcd0(var_208)
        
        if (var_200 != 0)
            sub_142a7dcd0(var_200)
else if ((rdx & 0x30) != 0)
    sub_142b3a860(result, r12, rbp, arg4, arg5)
else if ((r10 & 0x40) == 0 && *(r12 + 9) == 0 && *r12 == 1)
    if ((r10 & 0x70) != 0
            && ((rcx & 0x40) != 0 || *(rbp + 9) != 0 || *rbp != 1 || (rcx & 0x70) != 0))
        goto label_142b3a19f
    
    *arg5 |= 0x80
else if ((rcx & 0x40) != 0 || *(rbp + 9) != 0 || *rbp != 1 || (rcx & 0x70) != 0)
label_142b3a19f:
    *result = 1
    *(result + 9) = 0
    result[2].b = rax_2 | 0x40
else
    *arg5 |= 0x80

__security_check_cookie(rax_1 ^ &var_298)
return result
